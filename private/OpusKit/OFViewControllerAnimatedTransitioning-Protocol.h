//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@protocol OFViewControllerTransitioningContext;

@protocol OFViewControllerAnimatedTransitioning <NSObject>
- (void)animateTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1;
- (double)transitionDurationWithContext:(id <OFViewControllerTransitioningContext>)arg1;

@optional
- (void)animationEnded:(_Bool)arg1;
@end

