//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCopying-Protocol.h>
#import <FuseUI/NSSecureCoding-Protocol.h>

@class MPStoreItemMetadata, MPUContentItemIdentifierCollection, NSArray, NSDictionary, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface MusicStoreItemMetadataContext : NSObject <NSCopying, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_adjustedOptionsToRepresentativeMediaEntity;
    _Bool _hasOverrideChildrenMetadataContexts;
    NSArray *_overrideChildrenMetadataContexts;
    _Bool _wantsRepresentativeMediaEntity;
    _Bool _hasCompleteStoreItemMetadata;
    NSDictionary *_JSDictionary;
    NSString *_storeID;
    MPStoreItemMetadata *_storeItemMetadata;
}

+ (id)mediaLibrary;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) MPStoreItemMetadata *storeItemMetadata; // @synthesize storeItemMetadata=_storeItemMetadata;
@property(readonly, copy, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, copy, nonatomic) NSDictionary *JSDictionary; // @synthesize JSDictionary=_JSDictionary;
@property(readonly, nonatomic) _Bool hasCompleteStoreItemMetadata; // @synthesize hasCompleteStoreItemMetadata=_hasCompleteStoreItemMetadata;
- (void).cxx_destruct;
- (void)_invalidateFromMediaLibraryChange;
- (void)_beginObservingMediaLibraryNotifications;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)storeItemMetadataContextWithParentMetadata:(id)arg1;
- (id)storeItemMetadataContextWithChildStoreItemMetadataContexts:(id)arg1;
- (id)representativeMediaEntityWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isStoreRestricted) _Bool storeRestricted;
- (_Bool)isPlayable;
@property(readonly, nonatomic, getter=isCompilation) _Bool compilation;
@property(readonly, copy, nonatomic) NSArray *childrenStoreItemMetadataContexts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStorePlatformDictionary:(id)arg1 storeID:(id)arg2 hasCompleteStoreItemMetadata:(_Bool)arg3;
- (id)initWithStorePlatformDictionary:(id)arg1 hasCompleteStoreItemMetadata:(_Bool)arg2;
- (id)initWithStoreItemMetadata:(id)arg1 hasCompleteStoreItemMetadata:(_Bool)arg2;
- (id)initWithStoreID:(id)arg1;
- (id)initWithJSDictionary:(id)arg1;
- (id)init;
@property(readonly, copy, nonatomic) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;

@end

