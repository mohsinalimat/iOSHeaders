//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSSearchableItem.h>

#import <FileProvider/NSFileProviderItem_Private-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSNumber, NSPersonNameComponents, NSString, NSURL;

@interface CSSearchableItem (FPItem) <NSFileProviderItem_Private>
+ (id)fp_queryFetchAttributes;
@property(readonly, copy) NSString *fp_appContainerBundleIdentifier;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
- (id)sharingCurrentUserPermissions;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSData *versionIdentifier;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloaded) _Bool downloaded;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, nonatomic, getter=isUploading) _Bool uploading;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, copy, nonatomic) NSNumber *favoriteRank;
- (id)containerSubitemCount;
- (id)sharingCurrentUserRole;
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed;
@property(readonly, copy) NSString *providerIdentifier;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
@property(readonly, nonatomic, getter=isUploaded) _Bool uploaded;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier;

// Remaining properties
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, copy) NSURL *fileURL;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly, copy) NSString *sharingPermissions;
@property(readonly) Class superclass;
@end

