//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, _UIViewControllerTransitionContext;
@protocol UIViewControllerTransitionCoordinator;

@interface CCUIContentModuleAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _UIViewControllerTransitionContext *_transitionContext;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(retain, nonatomic) _UIViewControllerTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)performTransitionWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewOfChildContainer:(id)arg1 willChangeToSize:(struct CGSize)arg2;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

