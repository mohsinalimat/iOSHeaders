//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSDiscardableContent-Protocol.h>

@class NSArray, NSMapTable, NSMutableSet, NSString, TSPComponentExternalReferenceMap, TSPComponentObjectUUIDMap, TSPObject, TSPObjectReferenceMap;
@protocol OS_dispatch_queue, TSPComponentDelegate;

__attribute__((visibility("hidden")))
@interface TSPComponent : NSObject <NSDiscardableContent>
{
    // Error parsing type: Ai, name: _accessCount
    id <TSPComponentDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _identifier;
    NSString *_preferredLocator;
    NSString *_locator;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    NSArray *_featureInfos;
    unsigned long long _saveToken;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    NSMapTable *_writtenObjects;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    NSMutableSet *_dataReferences;
    struct {
        unsigned int usesDelayedArchiving:1;
        unsigned int modified:1;
        unsigned int persisted:1;
        unsigned int isStoredOutsideObjectArchive:1;
        unsigned int packageIdentifier:2;
        unsigned int discarded:1;
    } _flags;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    unsigned long long _encodedLength;
    TSPObjectReferenceMap *_objectReferenceMap;
}

+ (id)componentsDiscardingContentOnCurrentThread;
@property(readonly, nonatomic) TSPObjectReferenceMap *objectReferenceMap; // @synthesize objectReferenceMap=_objectReferenceMap;
@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // @synthesize componentObjectUUIDMap=_componentObjectUUIDMap;
@property(readonly, nonatomic) NSArray *featureInfos; // @synthesize featureInfos=_featureInfos;
@property(readonly, nonatomic) NSString *preferredLocator; // @synthesize preferredLocator=_preferredLocator;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
- (void).cxx_destruct;
- (id)description;
- (id)additionalDescription;
- (void)enumerateDataReferences:(CDUnknownBlockType)arg1;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (_Bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(_Bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (void)enumerateExternalReferences:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isTransientComponent;
@property(readonly) _Bool needsArchiving;
- (_Bool)needsArchivingImpl;
@property(readonly) _Bool persisted;
- (void)markAsDiscarded;
- (void)willDiscardComponent;
- (void)setComponentObjectUUIDMap:(id)arg1;
- (void)setReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(_Bool)arg4 rootObjectOrNil:(id)arg5 archivedObjects:(id)arg6 externalReferenceMap:(id)arg7 dataReferences:(id)arg8 readVersion:(unsigned long long)arg9 writeVersion:(unsigned long long)arg10 featureInfos:(id)arg11 componentObjectUUIDMap:(id)arg12 objectReferenceMap:(id)arg13 saveToken:(unsigned long long)arg14 encodedLength:(unsigned long long)arg15 wasCopied:(_Bool)arg16 wasModifiedDuringWrite:(_Bool)arg17;
- (void)didReadObjects:(id)arg1;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setModifiedImpl:(_Bool)arg1 forObject:(id)arg2;
- (void)setModified:(_Bool)arg1 forObject:(id)arg2 isDocumentUpgrade:(_Bool)arg3;
- (void)setModified:(_Bool)arg1 forObject:(id)arg2;
@property(readonly) _Bool modified;
@property(readonly) unsigned char packageIdentifier;
@property(readonly, nonatomic) _Bool isStoredOutsideObjectArchive;
- (void)setLocator:(id)arg1;
@property(readonly, nonatomic) NSString *locator;
- (_Bool)isContentDiscarded;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (void)discardContentIfPossibleFromNSCache:(_Bool)arg1;
- (void)discardContentIfPossible;
- (void)performSynchronousDiscardContentIfPossibleUsingBlock:(CDUnknownBlockType)arg1;
- (void)continueDiscardingContentIfPossibleUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isDiscardingContent;
@property(retain) TSPObject *rootObject;
- (_Bool)shouldKeepStrongObjectImpl;
- (_Bool)shouldForceCaching;
- (_Bool)isCachingEnabled;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo *)arg2 packageIdentifier:(unsigned char)arg3 encodedLength:(unsigned long long)arg4;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(_Bool)arg5 encodedLength:(unsigned long long)arg6;
- (id)init;
- (void)saveToMessage:(struct ComponentInfo *)arg1 saveToken:(unsigned long long)arg2 writtenComponentInfo:(const struct WrittenComponentInfo *)arg3;

@end

