//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject
{
    NSString *_cachedSalt;
    NSObject<OS_dispatch_queue> *_ckQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property(retain) NSString *cachedSalt; // @synthesize cachedSalt=_cachedSalt;
- (void)deleteDeDupeRecordZone;
- (void)clearLocalSyncState;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(CDUnknownBlockType)arg1;
- (id)_container;
- (void)_scheduleOperation:(id)arg1;
- (id)_CKUtilitiesSharedInstance;
- (void)dealloc;
- (id)init;

@end

