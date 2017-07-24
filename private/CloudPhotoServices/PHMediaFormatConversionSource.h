//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoServices/PHMediaFormatConversionContent.h>

@class NSString;

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent
{
    _Bool _preflighted;
    _Bool _containsHEVCVideo;
    _Bool _containsHEIFImage;
    _Bool _didCheckForLivePhotoPairingIdentifier;
    NSString *_renderOriginatingSignature;
    NSString *_livePhotoPairingIdentifier;
    id _hevcTrackFormatDescription;
    struct CGSize _imageDimensions;
}

+ (Class)requestClass;
+ (id)sourceForFileURL:(id)arg1;
+ (id)imageSourceForFileURL:(id)arg1 dimensions:(struct CGSize)arg2;
+ (id)imageSourceForFileURL:(id)arg1;
+ (id)videoSourceForFileURL:(id)arg1;
+ (id)sourceForFileURL:(id)arg1 mediaType:(long long)arg2 imageDimensions:(struct CGSize)arg3;
@property(retain) id hevcTrackFormatDescription; // @synthesize hevcTrackFormatDescription=_hevcTrackFormatDescription;
@property _Bool didCheckForLivePhotoPairingIdentifier; // @synthesize didCheckForLivePhotoPairingIdentifier=_didCheckForLivePhotoPairingIdentifier;
@property(retain, nonatomic) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property _Bool containsHEIFImage; // @synthesize containsHEIFImage=_containsHEIFImage;
@property _Bool containsHEVCVideo; // @synthesize containsHEVCVideo=_containsHEVCVideo;
@property _Bool preflighted; // @synthesize preflighted=_preflighted;
@property struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(copy) NSString *renderOriginatingSignature; // @synthesize renderOriginatingSignature=_renderOriginatingSignature;
- (void).cxx_destruct;
- (void)checkForLivePhotoPairingIdentifier;
- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)arg1;
- (_Bool)preflightWithError:(id *)arg1;
- (void)checkForHEIFImage;
- (void)checkForHEVCVideo;
- (_Bool)determineMediaTypeFromPathExtensionWithError:(id *)arg1;

@end

