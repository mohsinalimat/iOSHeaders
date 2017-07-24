//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSSet;

__attribute__((visibility("hidden")))
@interface CUICommonAssetStorage : NSObject
{
    struct _carheader {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        char _field6[128];
        char _field7[256];
        unsigned char _field8[16];
        unsigned int _field9;
        unsigned int _field10;
        unsigned int _field11;
        unsigned int _field12;
    } *_header;
    struct _carextendedMetadata {
        unsigned int _field1;
        char _field2[256];
        char _field3[256];
        char _field4[256];
        char _field5[256];
    } *_extendedMetadata;
    struct _renditionkeyfmt *_keyfmt;
    void *_imagedb;
    void *_colordb;
    void *_fontdb;
    void *_fontsizedb;
    void *_zcglyphdb;
    void *_zcbezeldb;
    void *_facetKeysdb;
    void *_bitmapKeydb;
    NSData *_globals;
    unsigned int _swap:1;
    unsigned int _isMemoryMapped:1;
    unsigned int _reserved:30;
    NSSet *_externalTags;
    unsigned short _renditionInfoCacheLookup[20];
    id _renditionInfoCache[20];
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _renditionInfoCacheLock;
}

+ (_Bool)isValidAssetStorageWithURL:(id)arg1;
+ (_Bool)isValidAssetStorageWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
- (int)validateBitmapInfo;
- (void)_buildBitmapInfoIntoDictionary:(id)arg1;
- (void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4;
- (void)enumerateBitmapIndexUsingBlock:(CDUnknownBlockType)arg1;
- (id)externalTags;
- (float)fontSizeForFontSizeType:(id)arg1;
- (_Bool)getBaselineOffset:(float *)arg1 forFontType:(id)arg2;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(float *)arg2 forFontType:(id)arg3;
- (const struct FontValue *)_fontValueForFontType:(id)arg1;
- (_Bool)hasColorForName:(const char *)arg1;
- (_Bool)getColor:(struct _colordef *)arg1 forName:(const char *)arg2;
- (id)zeroCodeBezelList;
- (id)zeroCodeGlyphList;
- (id)_zeroCodeListFromTree:(const void *)arg1;
- (void)_swapZeroCodeInformation:(CDStruct_c0454aff *)arg1;
- (id)renditionNameForKeyBaseList:(struct _renditionkeytoken *)arg1;
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (id)allRenditionNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint *)arg2;
- (struct _renditionkeytoken)_swapRenditionKeyToken:(struct _renditionkeytoken)arg1;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)assetKeysMatchingBlock:(CDUnknownBlockType)arg1;
- (id)allAssetKeys;
- (id)assetForKey:(id)arg1;
- (_Bool)assetExistsForKeyData:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)assetExistsForKey:(id)arg1;
- (void)_swapRenditionKeyArray:(unsigned short *)arg1;
- (id)authoringTool;
- (id)deploymentPlatformVersion;
- (id)deploymentPlatform;
- (id)thinningArguments;
- (unsigned int)colorSpaceID;
- (unsigned int)associatedChecksum;
- (id)uuid;
- (unsigned int)renditionCount;
- (const char *)mainVersionString;
- (const char *)versionString;
- (_Bool)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (id)catalogGlobalData;
- (const struct _renditionkeyfmt *)keyFormat;
- (id)keyFormatData;
- (int)keySemantics;
- (long long)storageTimestamp;
- (long long)_storagefileTimestamp;
- (unsigned int)schemaVersion;
- (unsigned int)coreuiVersion;
- (unsigned int)storageVersion;
- (void)dealloc;
- (id)description;
- (id)path;
- (struct _BOMStorage *)_bomStorage;
- (_Bool)_commonInitWithStorage:(struct _BOMStorage *)arg1 forWritting:(_Bool)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1 forWriting:(_Bool)arg2;
- (id)initWithPath:(id)arg1;
- (_Bool)swapped;
- (void)_swapKeyFormat;
- (void)_swapHeader;
- (void)_bringHeaderInfoUpToDate;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;

@end

