//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand
{
    _Bool __recordingPaused;
}

@property(readonly, nonatomic, getter=_isRecordingPaused) _Bool _recordingPaused; // @synthesize _recordingPaused=__recordingPaused;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordingPaused:(_Bool)arg1;

@end

