//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface _SFUserMediaPermissionController : NSObject
{
    NSMutableDictionary *_cachedSettings;
    NSObject<OS_dispatch_queue> *_permissionAccessQueue;
    unsigned long long _savePermissionsBackgroundTaskIdentifier;
    unsigned long long _savedStateLoadingStatus;
    NSURL *_userMediaPermissionsFileURL;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (_Bool)_captureDevicesAreAllAskGivenPermission:(id)arg1;
- (void)_loadSavedPermissionsIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)_dictionaryRepresentation;
- (void)checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(unsigned long long)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (void)requestUserMediaAuthorizationForDevices:(unsigned long long)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4 dialogPresenter:(id)arg5;
- (void)resetOriginPermissions;
- (void)savePermissionsOnSuspend;
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)arg1 fromOrigin:(id)arg2;
- (void)_setCameraPermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;
- (void)_setMicrophonePermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;
- (void)setCameraPermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;
- (void)setMicrophonePermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;
- (long long)_cameraPermissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (long long)_microphonePermissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (id)_saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;
- (void)saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)permissionsForOrigin:(id)arg1 topLevelOrigin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidateCachedSettingsForOriginHash:(id)arg1;
- (id)initWithUserMediaPermissionsFileURL:(id)arg1;

@end

