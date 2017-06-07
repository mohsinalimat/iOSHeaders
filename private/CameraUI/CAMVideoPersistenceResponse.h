//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMPersistenceResponse.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMVideoPersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible>
{
    NSString *_stillPersistenceUUID;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, copy, nonatomic) NSString *stillPersistenceUUID; // @synthesize stillPersistenceUUID=_stillPersistenceUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaType;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5 duration:(CDStruct_1b6d18a9)arg6 stillPersistenceUUID:(id)arg7 stillDisplayTime:(CDStruct_1b6d18a9)arg8;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) unsigned short sessionIdentifier;
@property(readonly) Class superclass;

@end

