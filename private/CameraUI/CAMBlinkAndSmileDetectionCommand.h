//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand
{
    _Bool __blinkDetectionEnabled;
    _Bool __smileDetectionEnabled;
}

@property(readonly, nonatomic, getter=_isSmileDetectionEnabled) _Bool _smileDetectionEnabled; // @synthesize _smileDetectionEnabled=__smileDetectionEnabled;
@property(readonly, nonatomic, getter=_isBlinkDetectionEnabled) _Bool _blinkDetectionEnabled; // @synthesize _blinkDetectionEnabled=__blinkDetectionEnabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlinkDetection:(_Bool)arg1 smileDetection:(_Bool)arg2;

@end

