//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible>
{
    unsigned short _sessionIdentifier;
    NSString *_assetUUID;
    NSDate *_creationDate;
    long long _captureOrientation;
    long long _captureDevice;
    void *_previewImageSurface;
    struct CGSize _videoDimensions;
}

@property(readonly, nonatomic) void *previewImageSurface; // @synthesize previewImageSurface=_previewImageSurface;
@property(readonly, nonatomic) struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) long long captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaType;
- (void)dealloc;
- (id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 captureDevice:(long long)arg5 videoDimensions:(struct CGSize)arg6 previewImageSurface:(void *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

