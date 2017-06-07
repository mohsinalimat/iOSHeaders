//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString;

@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSDictionary *_state;
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)publicDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEffectivelyLocked;
@property(readonly, nonatomic) long long escrowCount;
@property(readonly, nonatomic) _Bool recoveryEnabled;
@property(readonly, nonatomic) _Bool recoveryPossible;
@property(readonly, nonatomic) _Bool recoveryRequired;
@property(readonly, nonatomic) _Bool shouldWipe;
@property(readonly, nonatomic) _Bool permanentlyBlocked;
@property(readonly, nonatomic) unsigned long long failedAttemptCount;
@property(readonly, nonatomic) double backOffTime;
@property(readonly, nonatomic) long long lockState;
- (id)init;
- (id)initWithMKBLockStateInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

