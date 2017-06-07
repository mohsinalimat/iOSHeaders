//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface ML3SuicidePact : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

+ (id)sharedPact;
- (void).cxx_destruct;
- (void)_carryOutSuicidePact;
- (void)execute;
- (_Bool)isSignedForReason:(long long)arg1;
@property(readonly, nonatomic) _Bool isSigned;
- (void)secedeForReason:(long long)arg1;
- (void)signForReason:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

