//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentAnimationHandler.h>

#import <Silex/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>
{
    double _initialAlpha;
    double _initialScale;
}

@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) double initialAlpha; // @synthesize initialAlpha=_initialAlpha;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finishAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (void)startAnimation;
- (void)prepareAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

