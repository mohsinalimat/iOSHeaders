//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class CAMStillImageCaptureRequest;

@interface CAMStillImageCaptureCommand : CAMCaptureCommand
{
    CAMStillImageCaptureRequest *__request;
}

@property(readonly, nonatomic) CAMStillImageCaptureRequest *_request; // @synthesize _request=__request;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;
- (long long)_videoOrientationForCaptureOrientation:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

