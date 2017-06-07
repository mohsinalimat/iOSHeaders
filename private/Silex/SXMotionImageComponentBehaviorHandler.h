//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentBehaviorHandler.h>

@class UIInterpolatingMotionEffect, UIView;

@interface SXMotionImageComponentBehaviorHandler : SXComponentBehaviorHandler
{
    _Bool _windowed;
    _Bool _horizontal;
    _Bool _vertical;
    UIView *_clippingView;
    UIView *_motionContentView;
    unsigned long long _viewHierarchyIndex;
    UIInterpolatingMotionEffect *_xMotionEffect;
    UIInterpolatingMotionEffect *_yMotionEffect;
    double _amplitude;
}

@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) _Bool windowed; // @synthesize windowed=_windowed;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(retain, nonatomic) UIInterpolatingMotionEffect *yMotionEffect; // @synthesize yMotionEffect=_yMotionEffect;
@property(retain, nonatomic) UIInterpolatingMotionEffect *xMotionEffect; // @synthesize xMotionEffect=_xMotionEffect;
@property(nonatomic) unsigned long long viewHierarchyIndex; // @synthesize viewHierarchyIndex=_viewHierarchyIndex;
@property(retain, nonatomic) UIView *motionContentView; // @synthesize motionContentView=_motionContentView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (void).cxx_destruct;
- (void)destroyMotionDetection;
- (void)setupMotionDetection;
- (void)destroyWithBehaviorController:(id)arg1;
- (void)setupWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;

@end
