//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface RadioFairPlayKBSyncManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _activeAccountIdentifier;
    NSMutableArray *_dpInfoKeyBagSyncDataBlobs;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)pushDPInfoKeyBagSyncData:(id)arg1 forAccountIdentifier:(unsigned long long)arg2;
- (id)popDPInfoKeyBagSyncDataWithCount:(long long)arg1 returningAccountIdentifier:(unsigned long long *)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end

