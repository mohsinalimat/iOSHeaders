//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@class NSArray;

@protocol PSYSyncStateProviderInterface <NSObject>
- (oneway void)registerSyncStateObserverIfNeeded;
- (oneway void)requestDeviceSyncStateEntriesForPairingIDs:(NSArray *)arg1 completion:(void (^)(NSDictionary *))arg2;
@end

