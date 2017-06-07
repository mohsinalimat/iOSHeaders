//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSInvestigationItem-Protocol.h>
#import <MediaMiningKit/CLSSnapshotSupportProtocol-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface CLSInvestigationSnapshotAsset : NSObject <CLSInvestigationItem, CLSSnapshotSupportProtocol>
{
    NSDictionary *_metadata;
    NSURL *_imageURLForFill;
    NSURL *_imageURLForFit;
    CLLocation *_location;
    NSDate *_creationDate;
    NSString *_assetName;
    NSArray *_faceRegions;
    NSNumber *_scoreValue;
    NSNumber *_hasAdjustments;
    NSNumber *_mediaSubtype;
    NSNumber *_representsBurst;
    NSNumber *_isFavoriteValue;
    NSNumber *_isPhotoValue;
    NSNumber *_isVideoValue;
    NSNumber *_isAudioValue;
    NSNumber *_isTrashedValue;
    NSNumber *_isHiddenValue;
    NSNumber *_isBlurryValue;
    NSNumber *_isIncludedInCloudFeeds;
    NSNumber *_originalInputOrder;
    NSNumber *_peopleCount;
    NSNumber *_facesCount;
    NSNumber *_clsViewCount;
    NSNumber *_clsPlayCount;
    NSNumber *_clsShareCount;
    NSData *_clsDistanceIdentity;
    NSNumber *_clsVideoScore;
    NSNumber *_clsSharpnessScore;
    NSNumber *_clsContentScore;
    NSNumber *_duration;
    NSArray *_clsUnprefetchedPeopleNames;
}

+ (id)contextForItems:(id)arg1;
+ (id)snapshotItemWithMetadata:(id)arg1 imageURLForFill:(id)arg2 imageURLForFit:(id)arg3;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames; // @synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (double)duration;
@property(readonly, nonatomic) double clsContentScore;
- (float)clsSharpnessScore;
- (float)clsVideoScore;
@property(readonly, nonatomic) NSData *clsDistanceIdentity;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
- (unsigned long long)facesCount;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
- (unsigned long long)peopleCount;
- (_Bool)representsBurst;
@property(readonly, nonatomic) _Bool clsIsHDR;
@property(readonly, nonatomic) _Bool clsIsSDOF;
- (_Bool)isSubtype:(unsigned long long)arg1;
- (_Bool)isIncludedInCloudFeeds;
- (_Bool)hasAdjustments;
@property(readonly, nonatomic) _Bool isScreenshot;
@property(readonly, nonatomic) _Bool isUtility;
@property(readonly, nonatomic) _Bool isBlurry;
- (_Bool)isTrashed;
- (_Bool)isAudio;
- (_Bool)isVideo;
- (_Bool)isHidden;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
- (_Bool)isPhoto;
@property(readonly, copy) NSString *description;
- (id)originalInputOrder;
- (id)objectID;
@property(readonly, nonatomic) NSDate *localDate;
@property(readonly, nonatomic) NSDateComponents *dateComponents;
@property(readonly, nonatomic) NSDate *universalDate;
- (double)scoreWithContext:(id)arg1;
- (double)score;
- (double)_score;
- (id)itemMetadataForKeys:(id)arg1;
- (id)faceRegions;
@property(readonly, nonatomic) NSArray *clsPeopleNames;
@property(readonly, nonatomic) CLLocation *clsLocation;
@property(readonly, nonatomic) NSDate *clsDate;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(_Bool)arg2 networkAllowed:(_Bool)arg3;
@property(readonly, nonatomic) NSArray *peopleNames;
@property(readonly, nonatomic) NSDate *date;
- (id)creationDate;
@property(readonly, nonatomic) CLLocation *location;
- (id)localIdentifier;
- (id)cloudIdentifier;
- (id)initWithMetadata:(id)arg1 imageURLForFill:(id)arg2 imageURLForFit:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

