//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABBlip : NSObject
{
}

+ (void)writeBlip:(id)arg1 toBlipStoreEntry:(struct EshBSE *)arg2;
+ (struct EshBlip *)writeBlip:(id)arg1;
+ (id)readBlipFromEshBlip:(struct EshBlip *)arg1;
+ (id)readBlipFromBse:(id)arg1;
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE *)arg1;
+ (id)compressMetafileData:(id)arg1 info:(struct EshMetafileBlipInfo *)arg2;
+ (void)setMetafileBoundsFromPictData:(id)arg1 info:(struct EshMetafileBlipInfo *)arg2;
+ (int)blipTypeForBlipSignature:(int)arg1;
+ (id)delayedSubBlipWithMetafileInfo:(const struct EshMetafileBlipInfo *)arg1;
+ (id)subBlipWithMetafileInfo:(const struct EshMetafileBlipInfo *)arg1;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData *)arg1;

@end

