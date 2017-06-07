//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HULayeredBackgroundEffect, HULayeredContentEffect, UIVisualEffectView;

@interface HULayeredVisualEffectView : UIView
{
    HULayeredContentEffect *_contentEffect;
    HULayeredBackgroundEffect *_backgroundEffect;
    double _cornerRadius;
    UIVisualEffectView *_contentEffectView;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_backgroundFillView;
}

@property(retain, nonatomic) UIView *backgroundFillView; // @synthesize backgroundFillView=_backgroundFillView;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) UIVisualEffectView *contentEffectView; // @synthesize contentEffectView=_contentEffectView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) HULayeredBackgroundEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property(retain, nonatomic) HULayeredContentEffect *contentEffect; // @synthesize contentEffect=_contentEffect;
- (void).cxx_destruct;
- (void)_applyCornerRadius;
- (void)_updateSubviewOrder;
- (void)_updateBackgroundEffects;
- (void)_updateContentEffects;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithContentEffect:(id)arg1 backgroundEffect:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

