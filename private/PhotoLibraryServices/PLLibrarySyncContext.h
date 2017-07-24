//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLSyncContext-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PLCloudRecordOrganizer, PLPhotoLibrary;

@interface PLLibrarySyncContext : NSObject <PLSyncContext>
{
    NSMutableDictionary *_assetAdjustmentStatesByCloudIdentifier;
    NSArray *_personUUIDsToDedupe;
    PLPhotoLibrary *_photoLibrary;
    PLCloudRecordOrganizer *_recordOrganizer;
}

@property(readonly) PLCloudRecordOrganizer *recordOrganizer; // @synthesize recordOrganizer=_recordOrganizer;
@property(readonly) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(copy, nonatomic) NSArray *personUUIDsToDedupe; // @synthesize personUUIDsToDedupe=_personUUIDsToDedupe;
- (void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2;
- (id)assetAdjustmentStateForCloudIdentifier:(id)arg1;
- (_Bool)personUUIDIsDeleted:(id)arg1;
- (id)personForUUID:(id)arg1;
- (void)deleteFaces:(id)arg1;
- (id)makeFace;
@property(readonly, nonatomic) _Bool serverSupportsGraphHome;
@property(readonly, nonatomic) _Bool serverSupportsVision;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

