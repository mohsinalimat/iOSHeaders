//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZoneChange.h>

@class HMDCloudGroupChange, HMDCloudShareGroupChange;

@interface HMDCloudHomeZoneChange : HMDCloudZoneChange
{
    HMDCloudGroupChange *_rootGroupChange;
    HMDCloudShareGroupChange *_shareGroupChange;
}

@property(retain, nonatomic) HMDCloudShareGroupChange *shareGroupChange; // @synthesize shareGroupChange=_shareGroupChange;
@property(retain, nonatomic) HMDCloudGroupChange *rootGroupChange; // @synthesize rootGroupChange=_rootGroupChange;
- (void).cxx_destruct;
- (id)objectChanges;
- (id)changeWithObjectID:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;
- (_Bool)moreChangesToProcess;
- (void)setAllChangedAsProcessed;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;
- (_Bool)hasValidChanges;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (id)transactionStoreRowIDsForObjectID:(id)arg1;
- (id)processedTransactionStoreRowIDs;
- (id)allTransactionStoreRowIDs;
- (_Bool)encryptionFailed;
- (_Bool)decryptionFailed;
- (id)initWithZone:(id)arg1;

@end
