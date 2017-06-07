//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureCommand : CAMCaptureCommand
{
    long long __exposureMode;
    struct CGPoint __exposurePointOfInterest;
}

@property(readonly, nonatomic) struct CGPoint _exposurePointOfInterest; // @synthesize _exposurePointOfInterest=__exposurePointOfInterest;
@property(readonly, nonatomic) long long _exposureMode; // @synthesize _exposureMode=__exposureMode;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExposureMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2;
- (id)initWithExposureMode:(long long)arg1;

@end

