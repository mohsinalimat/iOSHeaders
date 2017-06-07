//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DCCachedDirectory, DCFullPath, DCRelativePath, NSData, NSDate, NSDictionary, SDFResponseContainer;

@protocol DCCachedItem
@property(retain) NSDate *lastDownloadDate;
@property(retain) NSDate *lastUploadDate;
@property(readonly, retain) NSData *lastRemoteMetadataVersionIdentifier;
@property(readonly, retain) NSDate *lastRemoteMetadataUpdate;
@property(readonly, retain) NSDictionary *remoteMetadataFromDisk;
@property(readonly) _Bool isContentsUpToDate;
@property(readonly) _Bool isRemoteMetadataUpToDate;
@property(readonly) _Bool isUpToDate;
@property(readonly) _Bool isRoot;
@property(readonly) _Bool existsOnDisk;
@property(readonly, retain) NSDictionary *parentContentsMetadata;
@property(readonly, retain) NSDictionary *remoteMetadata;
@property(readonly, retain) NSDictionary *otherMetadata;
@property(readonly, retain) NSDictionary *localMetadata;
@property(readonly, retain) NSData *versionIdentifier;
@property(readonly, retain) NSData *documentIdentifier;
@property(readonly, retain) DCFullPath *fullPath;
@property(readonly, retain) DCRelativePath *relativePath;
- (void)renameRelativePath:(DCRelativePath *)arg1;
- (unsigned long long)relativeAge;
- (_Bool)existsOnServer;
- (_Bool)needsInitialSynchronization;
- (_Bool)needsUpload;
- (_Bool)needsInitialUpload;
- (_Bool)needsDownload;
- (_Bool)needsInitialDownload;
- (_Bool)hasBeenUploaded;
- (_Bool)hasBeenDownloaded;
- (void)clearRemoteMetadata;
- (void)setHasBeenRemoved:(_Bool)arg1;
- (_Bool)hasBeenRemoved;
- (_Bool)updateDocumentIdentifier:(NSData *)arg1;
- (void)updateItemFromResponseContainer:(SDFResponseContainer *)arg1;
- (DCCachedDirectory *)parent;
@end

