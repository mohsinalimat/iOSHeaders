//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUIconContentViewDelegate-Protocol.h>

@class HUIconContentView, NSString, UIVisualEffect, UIVisualEffectView;
@protocol HFIconDescriptor;

@interface HUIconView : UIView <HUIconContentViewDelegate>
{
    _Bool _disableContinuousAnimation;
    _Bool _useEffectContentView;
    UIVisualEffect *_vibrancyEffect;
    unsigned long long _iconSize;
    unsigned long long _displayContext;
    unsigned long long _displayStyle;
    UIVisualEffectView *_effectView;
    HUIconContentView *_currentIconContentView;
}

@property(retain, nonatomic) HUIconContentView *currentIconContentView; // @synthesize currentIconContentView=_currentIconContentView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) _Bool useEffectContentView; // @synthesize useEffectContentView=_useEffectContentView;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) _Bool disableContinuousAnimation; // @synthesize disableContinuousAnimation=_disableContinuousAnimation;
@property(nonatomic) unsigned long long displayContext; // @synthesize displayContext=_displayContext;
@property(nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
- (void).cxx_destruct;
- (void)iconContentView:(id)arg1 didChangeAspectRatio:(double)arg2;
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (void)_updateVisualEffect;
- (id)_defaultVibrancyEffect;
@property(retain, nonatomic) UIVisualEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)contentContainerView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
