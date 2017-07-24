//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVFigObjectInspector.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVMetadataItem, NSArray, NSData, NSDictionary, NSString;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>
{
}

@property(readonly, nonatomic) NSArray *availableVideoDynamicRanges;
@property(readonly, nonatomic) struct CGSize maximumVideoResolution;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
@property(readonly, nonatomic) id propertyListForProxy;
@property(readonly, nonatomic, getter=_assetAnalysisMessages) NSArray *assetAnalysisMessages;
@property(readonly, nonatomic) _Bool supportsAnalysisReporting;
@property(readonly, nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property(readonly, nonatomic) _Bool containsFragments;
@property(readonly, nonatomic) _Bool canContainFragments;
@property(readonly, nonatomic) NSData *SHA1Digest;
@property(readonly, nonatomic, getter=isCompatibleWithAirPlayVideo) _Bool compatibleWithAirPlayVideo;
@property(readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) _Bool compatibleWithSavedPhotosAlbum;
@property(readonly, nonatomic, getter=isComposable) _Bool composable;
@property(readonly, nonatomic, getter=isReadable) _Bool readable;
@property(readonly, nonatomic, getter=isExportable) _Bool exportable;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
- (_Bool)hasProtectedContent;
@property(readonly, nonatomic, getter=_instanceIdentifier) NSString *instanceIdentifier;
@property(readonly, nonatomic) NSString *identifyingTag;
@property(readonly, nonatomic) NSString *identifyingTagClass;
- (id)metadataForFormat:(id)arg1;
@property(readonly, nonatomic) NSArray *availableMetadataFormats;
@property(readonly, nonatomic) NSArray *commonMetadata;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) AVMetadataItem *creationDate;
@property(readonly, nonatomic, getter=_mediaSelectionGroupDictionaries) NSArray *mediaSelectionGroupDictionaries;
@property(readonly, nonatomic) NSDictionary *trackReferences;
@property(readonly, nonatomic) NSArray *alternateTrackGroups;
@property(readonly, nonatomic) NSArray *trackIDs;
@property(readonly, nonatomic) long long trackCount;
@property(readonly, nonatomic) _Bool providesPreciseDurationAndTiming;
@property(readonly, nonatomic) int naturalTimeScale;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) float preferredSoundCheckVolumeNormalization;
@property(readonly, nonatomic) float preferredVolume;
@property(readonly, nonatomic) float preferredRate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

