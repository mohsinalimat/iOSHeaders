//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLSMetadataUtilities : NSObject
{
}

+ (id)allAlbumsDetailsWriteToPath:(id)arg1;
+ (id)_detailsForAlbum:(id)arg1;
+ (id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(_Bool)arg2 includingFingerprints:(_Bool)arg3 forAlbumTitled:(id)arg4;
+ (void)serializeJSONFromObjectDetails:(id)arg1 ToPath:(id)arg2;
+ (_Bool)initializeJSONFileAtPath:(id)arg1;
+ (void)_writeJSONForObjectDetails:(id)arg1 toFile:(id)arg2;
+ (void)writeJSONData:(id)arg1 toFile:(id)arg2;
+ (id)_detailsForAsset:(id)arg1 includingLocal:(_Bool)arg2 includingFingerprints:(_Bool)arg3;
+ (id)_normalizeObjectForJSON:(id)arg1;
+ (id)dictionaryFromManagedObject:(id)arg1 excludeAttributes:(id)arg2 includingRelationships:(id)arg3 excludeRelationshipAttributes:(id)arg4 andSubRelationships:(id)arg5;
+ (id)_nameForAdjustmentType:(int)arg1;
+ (id)_allAlbumsInPhotoLibrary:(id)arg1;
+ (_Bool)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4;

@end

