//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetExplorer/NSCopying-Protocol.h>
#import <AssetExplorer/NSObject-Protocol.h>

@class CLLocation, NSDate, NSString;
@protocol PUDisplayAsset;

@protocol PUDisplayAsset <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly, nonatomic) CDStruct_198678f7 photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_198678f7 photoIrisStillDisplayTime;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic, getter=isLivePhoto) _Bool livePhoto;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) _Bool isTemporaryPlaceholder;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
- (unsigned long long)isContentEqualTo:(id <PUDisplayAsset>)arg1;
@end
