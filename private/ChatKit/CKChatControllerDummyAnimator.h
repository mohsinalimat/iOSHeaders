//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CAAnimationDelegate-Protocol.h>
#import <ChatKit/CKImpactEffectAnimationProvider-Protocol.h>

@class CAEmitterLayer, NSString;
@protocol CKSendAnimationManager, OS_dispatch_group;

@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider>
{
    id <CKSendAnimationManager> _animationDelegate;
    CAEmitterLayer *_dustEmitter;
    NSObject<OS_dispatch_group> *_throwAnimationGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup; // @synthesize throwAnimationGroup=_throwAnimationGroup;
@property(retain, nonatomic) CAEmitterLayer *dustEmitter; // @synthesize dustEmitter=_dustEmitter;
@property(nonatomic) __weak id <CKSendAnimationManager> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

