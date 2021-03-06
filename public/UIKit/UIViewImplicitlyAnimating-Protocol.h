//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewAnimating-Protocol.h>

@protocol UITimingCurveProvider;

@protocol UIViewImplicitlyAnimating <UIViewAnimating>

@optional
- (void)continueAnimationWithTimingParameters:(id <UITimingCurveProvider>)arg1 durationFactor:(double)arg2;
- (void)addCompletion:(void (^)(long long))arg1;
- (void)addAnimations:(void (^)(void))arg1;
- (void)addAnimations:(void (^)(void))arg1 delayFactor:(double)arg2;
@end

