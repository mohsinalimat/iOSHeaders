//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKIdentity;

@interface BKMatchResultInfo : NSObject
{
    _Bool _unlocked;
    _Bool _credentialAdded;
    BKIdentity *_identity;
    long long _lockoutState;
}

@property(readonly, nonatomic) _Bool credentialAdded; // @synthesize credentialAdded=_credentialAdded;
@property(readonly, nonatomic) _Bool unlocked; // @synthesize unlocked=_unlocked;
@property(readonly, nonatomic) long long lockoutState; // @synthesize lockoutState=_lockoutState;
@property(retain, nonatomic) BKIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;

@end

