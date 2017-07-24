//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLImageFormat : NSObject
{
    _Bool _isCropped;
    _Bool _isAlwaysFullScreen;
    int _formatID;
    NSString *_name;
    double _dimension;
    long long _formatMode;
    long long _version;
    const CDStruct_0d559a47 *_bakedFormatInfo;
    long long _thumbnailKind;
    struct CGSize _size;
}

+ (id)formatWithID:(int)arg1;
+ (id)_syncFormats;
@property(nonatomic) long long thumbnailKind; // @synthesize thumbnailKind=_thumbnailKind;
@property(readonly, nonatomic) const CDStruct_0d559a47 *bakedFormatInfo; // @synthesize bakedFormatInfo=_bakedFormatInfo;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool isAlwaysFullScreen; // @synthesize isAlwaysFullScreen=_isAlwaysFullScreen;
@property(readonly, nonatomic) long long formatMode; // @synthesize formatMode=_formatMode;
@property(readonly, nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(readonly, nonatomic) _Bool isCropped; // @synthesize isCropped=_isCropped;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int formatID; // @synthesize formatID=_formatID;
- (struct CGSize)scaledSizeForSourceSize:(struct CGSize)arg1 capLength:(_Bool)arg2;
- (struct CGSize)scaledSizeForSourceSize:(struct CGSize)arg1;
- (struct CGSize)_shortSideFormatScaledSizeForSourceSize:(struct CGSize)arg1 capLength:(_Bool)arg2;
- (unsigned long long)fullSizeMaxLongSide;
- (unsigned long long)fullSizeMinShortSide;
- (unsigned long long)fullSizeDesiredLongSide;
- (struct CGSize)sizeOfThumbnailWithAspectRatio:(double)arg1;
@property(readonly, nonatomic) _Bool bakedFormatIsDynamicallySized;
@property(readonly, nonatomic) _Bool dimensionsReferToShortSide;
@property(readonly, nonatomic) _Bool isThumbnail; // @dynamic isThumbnail;
@property(readonly, nonatomic) _Bool isTable; // @dynamic isTable;
@property(readonly, nonatomic) _Bool isSquare;
@property(readonly, nonatomic) _Bool refersToOriginalVersion;
@property(readonly, nonatomic) _Bool refersToPenultimateVersion;
@property(readonly, nonatomic) _Bool refersToUnadjustedVersion;
@property(readonly, nonatomic) _Bool refersToLatestVersion;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFormat:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithFormatID:(int)arg1;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2 isCropped:(_Bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(_Bool)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2 isCropped:(_Bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(_Bool)arg5;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2 isCropped:(_Bool)arg3;
- (id)init;
- (id)thumbnailSpecification;
- (_Bool)_canDegradeToFormat:(id)arg1;
- (_Bool)_isAcceptableForViewSize:(struct CGSize)arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(struct CGSize)arg4 demoteFactor:(double)arg5;

@end

