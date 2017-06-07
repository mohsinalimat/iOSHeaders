//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BRQueryItem.h>

@class BRCAppLibrary, BRCItemID, BRFileObjectID, NSMutableSet, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCNotification : BRQueryItem
{
    _Bool _isInDocumentScope;
    _Bool _isInDataScope;
    _Bool _isInTrashScope;
    BRCItemID *_itemID;
    BRCItemID *_parentID;
    unsigned long long _oldParentFileID;
    NSSet *_parentIDs;
    NSMutableSet *_appLibraryIDsWithReverseAliases;
    BRCAppLibrary *_appLibrary;
    NSString *_oldAppLibraryID;
    NSString *_aliasSourceAppLibraryID;
    NSString *_unsaltedBookmarkData;
}

+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;
+ (id)notificationGatheredFromItem:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isInTrashScope; // @synthesize isInTrashScope=_isInTrashScope;
@property(readonly, nonatomic) _Bool isInDataScope; // @synthesize isInDataScope=_isInDataScope;
@property(readonly, nonatomic) _Bool isInDocumentScope; // @synthesize isInDocumentScope=_isInDocumentScope;
@property(retain, nonatomic) NSString *unsaltedBookmarkData; // @synthesize unsaltedBookmarkData=_unsaltedBookmarkData;
@property(readonly, nonatomic) NSString *aliasSourceAppLibraryID; // @synthesize aliasSourceAppLibraryID=_aliasSourceAppLibraryID;
@property(readonly, nonatomic) NSString *oldAppLibraryID; // @synthesize oldAppLibraryID=_oldAppLibraryID;
@property(readonly, nonatomic) BRCAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(retain, nonatomic) NSMutableSet *appLibraryIDsWithReverseAliases; // @synthesize appLibraryIDsWithReverseAliases=_appLibraryIDsWithReverseAliases;
@property(retain, nonatomic) NSSet *parentIDs; // @synthesize parentIDs=_parentIDs;
@property(readonly, nonatomic) unsigned long long oldParentFileID; // @synthesize oldParentFileID=_oldParentFileID;
@property(readonly, nonatomic) BRCItemID *parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (void)merge:(id)arg1;
- (_Bool)canMerge:(id)arg1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (void)_addAliasDecoration:(id)arg1;
- (void)setNumberAttribute:(id)arg1 forKey:(id)arg2;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
@property(readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property(readonly, nonatomic) BRFileObjectID *oldParentFileObjectID;
- (id)subclassDescription;

// Remaining properties
@property(readonly, nonatomic) NSURL *url; // @dynamic url;

@end

