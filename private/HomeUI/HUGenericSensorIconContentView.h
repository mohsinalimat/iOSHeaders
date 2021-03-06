//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUAnimationApplier, HUShapeLayerView, HUVisualEffectContainerView, NSArray, UIView;

@interface HUGenericSensorIconContentView : HUPrimaryStateIconContentView
{
    HUShapeLayerView *_bodyView;
    HUVisualEffectContainerView *_bodyContainerView;
    NSArray *_indicatorViews;
    NSArray *_indicatorContainerViews;
    UIView *_indicatorClippingView;
    HUAnimationApplier *_animationApplier;
}

@property(retain, nonatomic) HUAnimationApplier *animationApplier; // @synthesize animationApplier=_animationApplier;
@property(retain, nonatomic) UIView *indicatorClippingView; // @synthesize indicatorClippingView=_indicatorClippingView;
@property(retain, nonatomic) NSArray *indicatorContainerViews; // @synthesize indicatorContainerViews=_indicatorContainerViews;
@property(retain, nonatomic) NSArray *indicatorViews; // @synthesize indicatorViews=_indicatorViews;
@property(retain, nonatomic) HUVisualEffectContainerView *bodyContainerView; // @synthesize bodyContainerView=_bodyContainerView;
@property(retain, nonatomic) HUShapeLayerView *bodyView; // @synthesize bodyView=_bodyView;
- (void).cxx_destruct;
- (struct CGRect)_frameForIndicatorContainerViewInPosition:(unsigned long long)arg1;
- (struct CGRect)_frameForIndicatorViewInPosition:(unsigned long long)arg1 showIndicators:(_Bool)arg2;
- (struct CGAffineTransform)_transformForIndicatorContainerViewInPosition:(unsigned long long)arg1;
- (void)_layoutIndicatorViewsShowingIndicators:(_Bool)arg1;
- (void)layoutSubviews;
- (id)_animationSettingsForShowingIndicators:(_Bool)arg1;
- (void)_updateIndicatorAlpha;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (id)managedVisualEffectViews;
- (_Bool)wantsManagedVibrancyEffect;
- (_Bool)showIndicators;
- (id)initWithFrame:(struct CGRect)arg1;

@end

