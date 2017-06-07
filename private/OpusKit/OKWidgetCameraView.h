//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

@class AVCaptureDeviceInput, AVCaptureSession, NSObject, NSString, OKWidgetCameraPreviewView;
@protocol OS_dispatch_queue;

@interface OKWidgetCameraView : OKWidgetView
{
    NSObject<OS_dispatch_queue> *_sessionQueue;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    _Bool _deviceAuthorized;
    id _runtimeErrorHandlingObserver;
    id _deviceConnectedObserver;
    id _deviceDisconnectedObserver;
    OKWidgetCameraPreviewView *_previewView;
    long long _inputType;
    NSString *_inputDeviceName;
    float _volume;
}

+ (id)deviceWithInputType:(long long)arg1 inputDeviceName:(id)arg2;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
+ (id)keyPathsForValuesAffectingSessionRunningAndDeviceAuthorized;
@property(nonatomic) id deviceDisconnectedObserver; // @synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver;
@property(nonatomic) id deviceConnectedObserver; // @synthesize deviceConnectedObserver=_deviceConnectedObserver;
@property(nonatomic, getter=isDeviceAuthorized) _Bool deviceAuthorized; // @synthesize deviceAuthorized=_deviceAuthorized;
- (void)checkDeviceAuthorizationStatus;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)_stopRunning;
- (void)__stopRunning;
- (void)_startRunning;
- (void)_prepareSessionIfNeeded;
- (void)setSettingVolume:(float)arg1;
- (void)setSettingInputDeviceName:(id)arg1;
- (void)setSettingInput:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
@property(readonly, nonatomic, getter=isSessionRunningAndDeviceAuthorized) _Bool sessionRunningAndDeviceAuthorized;

@end

