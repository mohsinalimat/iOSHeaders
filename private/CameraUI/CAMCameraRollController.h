//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/PLCameraPreviewWellImageChangeObserver-Protocol.h>
#import <CameraUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <CameraUI/PUOneUpPresentationHelperAssetDisplayDelegate-Protocol.h>
#import <CameraUI/PUOneUpPresentationHelperDelegate-Protocol.h>
#import <CameraUI/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <CameraUI/UIInteractionProgressObserver-Protocol.h>
#import <CameraUI/UIViewControllerPreviewingDelegate-Protocol.h>
#import <CameraUI/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class CAMTransientDataSource, CAMTransientImageManager, NSMutableSet, NSString, PUOneUpPresentationHelper, PUPhotoKitDataSourceManager, PXPhotosDataSource, UIGestureRecognizer;
@protocol CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerPresentationDelegate, CAMCameraRollControllerSessionDelegate, OS_dispatch_source;

@interface CAMCameraRollController : NSObject <PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIInteractionProgressObserver>
{
    struct {
        _Bool respondsToSourceAssetRect;
        _Bool respondsToShouldHideSourceAsset;
        _Bool respondsToPreviewGestureDidBecomeAvailable;
        _Bool respondsToPreviewSourceRect;
        _Bool respondsToImageForReveal;
        _Bool respondsToRevealWillBegin;
        _Bool respondsToRevealDidEnd;
    } _presentationDelegateFlags;
    _Bool _shouldPauseAudioSessionUpdatesForCapture;
    _Bool __allowUpdating;
    _Bool __updateIsScheduled;
    _Bool __transientAssetsAreValid;
    _Bool __oneUpVisible;
    _Bool __oneUpFullyPresented;
    _Bool __didSetupMechanismsForStoppingCaptureSession;
    _Bool __didStopCaptureSession;
    unsigned short _sessionIdentifier;
    id <CAMCameraRollControllerSessionDelegate> _sessionDelegate;
    id <CAMCameraRollControllerImageWellDelegate> _imageWellDelegate;
    id <CAMCameraRollControllerPresentationDelegate> _presentationDelegate;
    UIGestureRecognizer *_previewGestureRecognizer;
    PUOneUpPresentationHelper *__oneUpPresentationHelper;
    CAMTransientDataSource *__transientDataSource;
    CAMTransientImageManager *__transientImageManager;
    PUPhotoKitDataSourceManager *__photoKitDataSourceManager;
    NSMutableSet *__sessionAssetUUIDs;
    PXPhotosDataSource *__photosDataSource;
    PXPhotosDataSource *__stagedDataSource;
    NSObject<OS_dispatch_source> *__memoryWarningSource;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_memoryWarningSource; // @synthesize _memoryWarningSource=__memoryWarningSource;
@property(nonatomic, setter=_setDidStopCaptureSession:) _Bool _didStopCaptureSession; // @synthesize _didStopCaptureSession=__didStopCaptureSession;
@property(nonatomic, setter=_setDidSetupMechanismsForStoppingCaptureSession:) _Bool _didSetupMechanismsForStoppingCaptureSession; // @synthesize _didSetupMechanismsForStoppingCaptureSession=__didSetupMechanismsForStoppingCaptureSession;
@property(nonatomic, getter=_isOneUpFullyPresented, setter=_setOneUpFullyPresented:) _Bool _oneUpFullyPresented; // @synthesize _oneUpFullyPresented=__oneUpFullyPresented;
@property(nonatomic, getter=_isOneUpVisible, setter=_setOneUpVisible:) _Bool _oneUpVisible; // @synthesize _oneUpVisible=__oneUpVisible;
@property(nonatomic, setter=_setTransientAssetsAreValid:) _Bool _transientAssetsAreValid; // @synthesize _transientAssetsAreValid=__transientAssetsAreValid;
@property(nonatomic, setter=_setUpdateIsScheduled:) _Bool _updateIsScheduled; // @synthesize _updateIsScheduled=__updateIsScheduled;
@property(nonatomic, setter=_setAllowUpdating:) _Bool _allowUpdating; // @synthesize _allowUpdating=__allowUpdating;
@property(retain, nonatomic, setter=_setStagedDataSource:) PXPhotosDataSource *_stagedDataSource; // @synthesize _stagedDataSource=__stagedDataSource;
@property(retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // @synthesize _photosDataSource=__photosDataSource;
@property(readonly, nonatomic) NSMutableSet *_sessionAssetUUIDs; // @synthesize _sessionAssetUUIDs=__sessionAssetUUIDs;
@property(readonly, nonatomic) PUPhotoKitDataSourceManager *_photoKitDataSourceManager; // @synthesize _photoKitDataSourceManager=__photoKitDataSourceManager;
@property(readonly, nonatomic) CAMTransientImageManager *_transientImageManager; // @synthesize _transientImageManager=__transientImageManager;
@property(readonly, nonatomic) CAMTransientDataSource *_transientDataSource; // @synthesize _transientDataSource=__transientDataSource;
@property(readonly, nonatomic) PUOneUpPresentationHelper *_oneUpPresentationHelper; // @synthesize _oneUpPresentationHelper=__oneUpPresentationHelper;
@property(nonatomic) _Bool shouldPauseAudioSessionUpdatesForCapture; // @synthesize shouldPauseAudioSessionUpdatesForCapture=_shouldPauseAudioSessionUpdatesForCapture;
@property(retain, nonatomic, setter=_setPreviewGestureRecognizer:) UIGestureRecognizer *previewGestureRecognizer; // @synthesize previewGestureRecognizer=_previewGestureRecognizer;
@property(nonatomic) __weak id <CAMCameraRollControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <CAMCameraRollControllerImageWellDelegate> imageWellDelegate; // @synthesize imageWellDelegate=_imageWellDelegate;
@property(nonatomic, setter=_setSessionIdentifier:) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) __weak id <CAMCameraRollControllerSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_unregisterBrowsingViewModelChangeObserver;
- (void)_registerBrowsingViewModelChangeObserver;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2;
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)_updateTransientDataSourceIfNeeded;
- (void)_invalidateTransientAssets;
- (void)_update;
- (void)_ensureCameraRollViewController;
- (void)_startNewSession;
- (void)interactionProgressDidUpdate:(id)arg1;
- (_Bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
- (_Bool)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg1;
- (_Bool)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg1;
- (void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg1 didChange:(id)arg2;
- (void)_tearDownMemoryWarningNotifications;
- (void)_setupMemoryWarningNotificationsIfNecessary;
- (void)_cancelDelayedStopCaptureSession;
- (void)_scheduleStopCaptureSessionAfterDelay:(double)arg1;
- (void)_stopCaptureSessionIfNecessaryFromTimeout;
- (void)_stopCaptureSessionIfNecessary;
- (void)_teardownMechanismsForStoppingCaptureSession;
- (void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (void)handlePresentingPanGestureRecognizer:(id)arg1;
- (_Bool)isCameraRollViewControllerPresented;
- (_Bool)dismissCameraRollViewControllerForced:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentCameraRollViewControllerAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
@property(readonly, nonatomic) _Bool canPresentCameraRollViewController;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (_Bool)isCaptureSessionCurrent:(unsigned short)arg1;
- (void)processTransientPairedVideoUpdate:(id)arg1 filterType:(long long)arg2;
- (void)processPendingBursts;
- (void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(_Bool)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (id)persistedThumbnailImage;
- (void)_performPreload;
- (void)ppt_preload;
- (void)preload;
- (void)_scheduleUpdateIfOneUpIsActive;
- (void)didPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2;
- (void)resetNavigation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

