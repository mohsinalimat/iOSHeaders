//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSSecureCoding-Protocol.h>
#import <Pasteboard/PBItemRepresentationDataTransferDelegate-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSURL, NSUUID;
@protocol NSObject, PBItemDataTransferDelegate;

@interface PBItem : NSObject <NSSecureCoding, PBItemRepresentationDataTransferDelegate>
{
    _Bool _itemQueue_isStoredOnServer;
    NSData *_itemQueue_primaryData;
    NSURL *_itemQueue_primaryFileURL;
    id <PBItemDataTransferDelegate> _itemQueue_dataTransferDelegate;
    NSDictionary *_itemQueue_privateMetadata;
    NSMutableDictionary *_itemQueue_representationByType;
    NSMutableOrderedSet *_itemQueue_typeOrder;
    NSMutableDictionary *_itemQueue_preferredRepresentationByType;
    NSMutableDictionary *_itemQueue_visibilityByType;
    id _itemQueue_localUserInfo;
    id <NSObject> _itemQueue_localObject;
    NSDictionary *_itemQueue_metadata;
    NSUUID *_UUID;
}

+ (id)allowedClassesForSecureCoding;
+ (_Bool)supportsSecureCoding;
+ (id)itemWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;
+ (id)itemWithData:(id)arg1 type:(id)arg2;
+ (id)itemWithObject:(id)arg1;
+ (id)item;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) _Bool itemQueue_isStoredOnServer; // @synthesize itemQueue_isStoredOnServer=_itemQueue_isStoredOnServer;
@property(copy, nonatomic) NSDictionary *itemQueue_metadata; // @synthesize itemQueue_metadata=_itemQueue_metadata;
@property(retain, nonatomic) id <NSObject> itemQueue_localObject; // @synthesize itemQueue_localObject=_itemQueue_localObject;
@property(retain, nonatomic) id itemQueue_localUserInfo; // @synthesize itemQueue_localUserInfo=_itemQueue_localUserInfo;
@property(retain, nonatomic) NSMutableDictionary *itemQueue_visibilityByType; // @synthesize itemQueue_visibilityByType=_itemQueue_visibilityByType;
@property(retain, nonatomic) NSMutableDictionary *itemQueue_preferredRepresentationByType; // @synthesize itemQueue_preferredRepresentationByType=_itemQueue_preferredRepresentationByType;
@property(retain, nonatomic) NSMutableOrderedSet *itemQueue_typeOrder; // @synthesize itemQueue_typeOrder=_itemQueue_typeOrder;
@property(retain, nonatomic) NSMutableDictionary *itemQueue_representationByType; // @synthesize itemQueue_representationByType=_itemQueue_representationByType;
@property(retain, nonatomic) NSDictionary *itemQueue_privateMetadata; // @synthesize itemQueue_privateMetadata=_itemQueue_privateMetadata;
@property(nonatomic) __weak id <PBItemDataTransferDelegate> itemQueue_dataTransferDelegate; // @synthesize itemQueue_dataTransferDelegate=_itemQueue_dataTransferDelegate;
@property(retain, nonatomic) NSURL *itemQueue_primaryFileURL; // @synthesize itemQueue_primaryFileURL=_itemQueue_primaryFileURL;
@property(retain, nonatomic) NSData *itemQueue_primaryData; // @synthesize itemQueue_primaryData=_itemQueue_primaryData;
- (void).cxx_destruct;
- (id)initWithNSItemProvider:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)itemRepresentationFinishedDataTransfer:(id)arg1;
- (void)itemRepresentation:(id)arg1 beganDataTransferWithProgress:(id)arg2;
@property(nonatomic) __weak id <PBItemDataTransferDelegate> dataTransferDelegate; // @dynamic dataTransferDelegate;
- (void)itemQueue_setDataTransferDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)uikit_loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)uikit_loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)representationConformingToType:(id)arg1;
- (id)_representationForType:(id)arg1;
- (id)itemQueue_representationForType:(id)arg1;
- (id)itemQueue_availableTypes;
- (_Bool)uikit_canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)_canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)itemQueue_canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)hasRepresentationConformingToType:(id)arg1;
- (_Bool)itemQueue_hasRepresentationConformingToType:(id)arg1;
- (_Bool)hasRepresentationOfType:(id)arg1;
- (long long)visibilityForType:(id)arg1;
- (unsigned long long)preferredRepresentationForType:(id)arg1;
- (_Bool)itemQueue_hasRepresentationOfType:(id)arg1;
- (void)uikit_addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (void)removeRepresentationOfType:(id)arg1;
- (void)addRepresentation:(id)arg1;
- (void)addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (void)_addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (void)itemQueue_removeRepresentationOfType:(id)arg1;
- (void)itemQueue_setItemRepresentation:(id)arg1;
- (void)addRepresentationType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (void)addRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)v2_addRepresentationType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (void)addOpenInPlaceRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)v2_addFileCopyRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addFileCopyRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addDataRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *representations;
- (id)initWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (id)initWithObject:(id)arg1;
- (void)_commonInitGenerateUUID:(_Bool)arg1;
- (id)copyWithDoNothingRepresentations;
- (id)_itemQueue_copyWithDoNothingRepresentations;
- (void)dealloc;
- (id)initDoNothing;
- (id)init;
@property(retain, nonatomic) NSDictionary *privateMetadata;
- (id)availableTypesWithPreferredRepresentation:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *availableTypes; // @dynamic availableTypes;
@property(copy, nonatomic) NSDictionary *metadata; // @dynamic metadata;
@property(retain, nonatomic) id localObject;
@property(retain, nonatomic) id localUserInfo; // @dynamic localUserInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

