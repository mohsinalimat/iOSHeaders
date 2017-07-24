//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CASpringAnimation.h>

@class _UISpringAnimationDelegate;

__attribute__((visibility("hidden")))
@interface _UISpringAnimation : CASpringAnimation
{
}

+ (id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
+ (double)defaultAnimationDuration;
+ (double)defaultStiffness;
+ (void)setDefaultStiffness:(double)arg1;
+ (double)defaultDamping;
+ (void)setDefaultDamping:(double)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) _UISpringAnimationDelegate *delegate; // @dynamic delegate;

@end

