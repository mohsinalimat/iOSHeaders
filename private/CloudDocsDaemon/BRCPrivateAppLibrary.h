//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCAppLibrary.h>

@class BRCRelativePath, BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface BRCPrivateAppLibrary : BRCAppLibrary
{
    _Bool _containerMetadataNeedsSyncUp;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property(nonatomic) _Bool containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property(retain, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property(readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
- (void).cxx_destruct;
- (void)setIsOverQuota:(_Bool)arg1;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(_Bool)arg3 error:(id *)arg4;
- (id)pathRelativeToRoot;
- (void)scheduleContainerMetadataSyncUp;
- (id)plist;
- (void)associateWithClientZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (void)_updateIsInCloudDocsZone;
- (void)zoneDidChangeMovedToCloudDocsState;
- (_Bool)_isInCloudDocsZone;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (id)rootItemID;
- (id)fetchRootItem;
- (id)fetchRootItemInDB:(id)arg1;
@property(readonly, nonatomic) BRCRelativePath *documentsPath;
- (_Bool)shouldSaveContainerMetadataServerside;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (_Bool)wasMovedToCloudDocs;
- (id)containerMetadataFilledWithTCCInfo;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
- (id)privateClientZone;
- (id)asPrivateAppLibrary;
- (_Bool)isPrivateAppLibrary;
- (id)initWithName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 zoneRowID:(id)arg4 db:(id)arg5 plist:(id)arg6 session:(id)arg7 initialCreation:(_Bool)arg8 createdRootOnDisk:(_Bool)arg9 createdCZMMoved:(_Bool)arg10 rootFileID:(id)arg11;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(_Bool)arg2;

@end

