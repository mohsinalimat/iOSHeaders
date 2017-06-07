//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLEngineFileStorage, CPLPlatformObject, NSMutableSet, NSString, NSURL;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject>
{
    NSMutableSet *_identitiesToCommit;
    NSMutableSet *_identitiesToDelete;
    NSURL *_tempFolderURL;
    CPLEngineFileStorage *_fileStorage;
}

@property(readonly, nonatomic) CPLEngineFileStorage *fileStorage; // @synthesize fileStorage=_fileStorage;
- (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)compactWithError:(id *)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id *)arg2;
- (_Bool)hasResource:(id)arg1;
- (_Bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id *)arg3;
- (id)retainFileURLForResource:(id)arg1 error:(id *)arg2;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (_Bool)markResourceFailedToUpload:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;
- (_Bool)markResourceAsUploaded:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;
- (_Bool)markResourceDoesNotNeedToBeUploaded:(id)arg1 error:(id *)arg2;
- (id)createFileURLForUploadForResource:(id)arg1 error:(id *)arg2;
- (_Bool)storeResourceForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)openWithError:(id *)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

