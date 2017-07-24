//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFPhotosFaceUtilities : NSObject
{
}

+ (struct CGSize)faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1 imgWidth:(double)arg2 imgHeight:(double)arg3;
+ (_Bool)getCropRectForPortraitImage:(struct CGRect *)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3;
+ (long long)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2;
+ (id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(_Bool)arg3;

@end

