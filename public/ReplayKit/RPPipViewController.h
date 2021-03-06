//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession;

@interface RPPipViewController : UIViewController
{
    long long _cameraPosition;
    AVCaptureSession *_pipSession;
    AVCaptureDevice *_videoDevice;
    AVCaptureDeviceInput *_videoInput;
    long long _initialOrientation;
}

@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureDevice *videoDevice; // @synthesize videoDevice=_videoDevice;
@property(retain, nonatomic) AVCaptureSession *pipSession; // @synthesize pipSession=_pipSession;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (void).cxx_destruct;
- (long long)_captureVideoOrientationForUIDeviceOrientation:(long long)arg1;
- (void)_deviceOrientationDidChange;
- (void)_updateViewGeometry;
- (id)_pipView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)stopPipSession;
- (void)startPipSession;
- (void)setUpPipSession;
- (id)cameraWithPosition:(long long)arg1;
- (id)initWithOrientation:(long long)arg1 position:(long long)arg2;

@end

