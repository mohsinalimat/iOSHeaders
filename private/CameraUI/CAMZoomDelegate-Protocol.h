//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CUCaptureController;

@protocol CAMZoomDelegate <NSObject>
- (void)captureController:(CUCaptureController *)arg1 didChangeRampingVideoZoom:(_Bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputMinAvailableVideoZoomFactor:(double)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputVideoZoomFactor:(double)arg2;
@end

