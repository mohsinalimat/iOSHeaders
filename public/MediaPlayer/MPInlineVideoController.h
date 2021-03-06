//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPSwipableViewDelegate-Protocol.h>
#import <MediaPlayer/MPTransportControlsTarget-Protocol.h>
#import <MediaPlayer/MPVideoControllerProtocol-Protocol.h>
#import <MediaPlayer/MPVideoOverlayDelegate-Protocol.h>
#import <MediaPlayer/MPVolumeControllerDelegate-Protocol.h>
#import <MediaPlayer/UIAlertViewDelegate-Protocol.h>

@class MPAVController, MPAVItem, MPInlineAudioOverlay, MPInlineVideoFullscreenViewController, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoContainerView, MPVideoPlaybackOverlayView, MPVideoView, MPVolumeController, MPWeakTimer, NSSet, NSString, UIActivityIndicatorView, UIAlertView, UIColor, UIImage, UINavigationController, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView, UIWindow, _UIHostedWindow;
@protocol MPVideoOverlay;

@interface MPInlineVideoController : NSObject <MPVolumeControllerDelegate, MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate>
{
    id _delegate;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned long long _activeOverlayUserEvents;
    _Bool _automaticallyHandleTransportControls;
    _Bool _allowsDetailScrubbing;
    _Bool _allowsWirelessPlayback;
    _Bool _alwaysAllowHidingControlsOverlay;
    int _artworkImageStyle;
    _Bool _attemptAutoPlayWhenControlsHidden;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    _Bool _canAnimateControlsOverlay;
    _Bool _canShowControlsOverlay;
    _Bool _controlsOverlayVisible;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    _Bool _disableAutoRotation;
    _Bool _disableControlsAutohide;
    _Bool _displayPlaybackErrorAlerts;
    _Bool _inlinePlaybackUsesTVOut;
    long long _itemTypeOverride;
    _Bool _needsTVWindowSetup;
    _Bool _needsTVWindowTeardown;
    UIImage *_posterImage;
    long long _scaleMode;
    _Bool _TVOutEnabled;
    _Bool _TVOutEnabledMaster;
    _Bool _useHostedWindowWhenFullscreen;
    MPSwipableView *_view;
    MPVideoPlaybackOverlayView *_videoOverlayView;
    unsigned long long _visibleParts;
    long long _audioOverlayStyle;
    _Bool _navigationBarHidden;
    NSString *_playbackErrorDescription;
    long long _videoOverlayStyle;
    UIView *_advertisementView;
    UIAlertView *_alertSheet;
    UIWindow *_alternateTracksWindow;
    MPInlineAudioOverlay *_audioOverlayView;
    unsigned long long _backgroundTaskId;
    _Bool _batteryMonitoringWasEnabled;
    UINavigationController *_chaptersContainerController;
    MPVideoContainerView *_containerView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPInlineVideoFullscreenViewController *_fullscreenViewController;
    _Bool _fullscreenViewSizeIsExternallyManaged;
    UIWindow *_fullscreenWindow;
    _Bool _hasShownFirstVideoFrame;
    MPWeakTimer *_idleTimer;
    _Bool _inCloneMirrorMode;
    _Bool _isAnimatingOverlay;
    _Bool _isTransitioningFromFullscreen;
    _Bool _isTransitioningToFullscreen;
    UIActivityIndicatorView *_loadingIndicator;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long _scaleModeOverride;
    _Bool _scheduledLoadingIndicator;
    UIView *_subtitlesView;
    _Bool _swallowNextTapGesture;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPTVOutWindow *_tvOutWindow;
    UIView *_videoBackgroundView;
    NSSet *_viewsToFade;
    _Bool _wantsOverlayVisibleWhenItemIsAvailable;
    _Bool _wasPlaying;
    UIWindow *_windowForDisablingAutorotation;
    UIWindow *_windowForFullscreenTransition;
    _Bool _shouldDestroyVideoSnapshot;
    MPVolumeController *_volumeController;
}

@property(nonatomic) long long audioOverlayStyle; // @synthesize audioOverlayStyle=_audioOverlayStyle;
@property(readonly, nonatomic) UIView *subtitlesView; // @synthesize subtitlesView=_subtitlesView;
@property(copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) long long videoOverlayStyle; // @synthesize videoOverlayStyle=_videoOverlayStyle;
@property(readonly, nonatomic) UIView *advertisementView; // @synthesize advertisementView=_advertisementView;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(nonatomic) _Bool TVOutEnabled; // @synthesize TVOutEnabled=_TVOutEnabled;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property(nonatomic) long long itemTypeOverride; // @synthesize itemTypeOverride=_itemTypeOverride;
@property(nonatomic) _Bool inlinePlaybackUsesTVOut; // @synthesize inlinePlaybackUsesTVOut=_inlinePlaybackUsesTVOut;
@property(nonatomic) _Bool displayPlaybackErrorAlerts; // @synthesize displayPlaybackErrorAlerts=_displayPlaybackErrorAlerts;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) _Bool disableAutoRotation; // @synthesize disableAutoRotation=_disableAutoRotation;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(nonatomic) _Bool controlsOverlayVisible; // @synthesize controlsOverlayVisible=_controlsOverlayVisible;
@property(nonatomic) _Bool canShowControlsOverlay; // @synthesize canShowControlsOverlay=_canShowControlsOverlay;
@property(nonatomic) _Bool canAnimateControlsOverlay; // @synthesize canAnimateControlsOverlay=_canAnimateControlsOverlay;
@property(retain, nonatomic) UIColor *backstopColor; // @synthesize backstopColor=_backstopColor;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool attemptAutoPlayWhenControlsHidden; // @synthesize attemptAutoPlayWhenControlsHidden=_attemptAutoPlayWhenControlsHidden;
@property(nonatomic) int artworkImageStyle; // @synthesize artworkImageStyle=_artworkImageStyle;
@property(nonatomic) _Bool alwaysAllowHidingControlsOverlay; // @synthesize alwaysAllowHidingControlsOverlay=_alwaysAllowHidingControlsOverlay;
@property(nonatomic) _Bool allowsWirelessPlayback; // @synthesize allowsWirelessPlayback=_allowsWirelessPlayback;
@property(nonatomic) _Bool allowsDetailScrubbing; // @synthesize allowsDetailScrubbing=_allowsDetailScrubbing;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) _Bool automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (_Bool)_useInlineControls;
- (void)_updateTVOutEnabled;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1;
- (void)_updateDoubleTapGestureRecognizer;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateBackgroundViewInformation;
- (void)_updateBackgroundViewConfiguration:(_Bool)arg1;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_unregisterForPlayerNotifications;
- (void)_transitionToFullscreenDidEnd;
- (void)_transitionToFullscreenAnimated:(_Bool)arg1;
- (void)_transitionFromFullscreenDidEnd;
- (void)_transitionFromFullscreenAnimated:(_Bool)arg1 fromDoneButton:(_Bool)arg2;
- (void)_transitionFromFullscreenAnimated:(_Bool)arg1;
- (void)_tearDownTVOutWindow;
- (void)_showVideoSnapshotView;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_showOverlayDidEnd:(_Bool)arg1;
- (void)_showOverlayAnimated:(_Bool)arg1 quickHide:(_Bool)arg2;
- (void)_showOverlayAnimated:(_Bool)arg1;
- (_Bool)_shouldShowDestinationPlaceholder;
- (void)_setupTVOutWindow;
- (void)_setupSubviews;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_resetOverlayIdleTimer:(double)arg1;
- (void)_resetOverlayIdleTimer;
- (void)_registerForPlayerNotifications;
- (void)_postViewControllerRequestsExitWithReason:(long long)arg1;
- (void)_postScaleModeDidChange;
- (_Bool)_overlayViewIsVisible;
- (void)_overlayIdleTimerFired:(id)arg1;
- (long long)_itemTypeWithActualTypePreference;
- (_Bool)_isAnimatingFullscreenTransition;
- (void)_hideOverlayDidEnd;
- (void)_hideOverlayAnimated:(_Bool)arg1;
- (void)_hideLoadingIndicator;
- (void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_enableAirPlayVideoRoutesIfNecessary;
- (long long)_effectiveItemType;
- (void)_doneWithChapters:(id)arg1;
- (void)_destroyVideoSnapshotView;
- (void)_destroyVideoOverlayView;
- (void)_destroyAudioOverlayView;
- (void)_delayedShowLoadingIndicator;
- (_Bool)canShowQTAudioOnlyUI;
- (_Bool)_canEnableAirPlayVideoRoutes;
- (void)_cancelOverlayIdleTimer;
- (void)_validityChanged:(id)arg1;
- (void)_timedImageMetadataAvailable:(id)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_scaleModeDidChange:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_playbackError:(id)arg1;
- (void)_itemTypeAvailable:(id)arg1;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_bufferingStateChanged:(id)arg1;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidFinishSuspensionSnapshot:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationResumedEventsOnly:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2;
- (_Bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)setVideoSnapshotEnabled:(_Bool)arg1;
@property(readonly, nonatomic) UIView *fullscreenView;
- (void)fullscreenOverlayDidShow;
- (void)fullscreenOverlayDidHide;
- (void)fullscreenOverlayWillShowAnimated:(_Bool)arg1;
- (void)fullscreenOverlayWillHideAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool viewControllerWillRequestExit;
@property(readonly, retain, nonatomic) MPVideoView *videoView;
@property(readonly, retain, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setUseHostedWindowWhenFullscreen:(_Bool)arg1;
- (void)setScaleModeOverride:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(nonatomic) _Bool disableControlsAutohide;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2 force:(_Bool)arg3;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setControlsNeedLayout;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp;
- (void)prepareToDisplayVideo;
@property(readonly, nonatomic) unsigned int hostedWindowContextID;
@property(readonly, nonatomic) _UIHostedWindow *hostedWindow;
- (void)exitFullscreen;
- (void)displayVideoView;
- (_Bool)canHideOverlay:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canChangeScaleMode;
- (void)setOwnsStatusBar:(_Bool)arg1;
@property(readonly, retain, nonatomic) UIView *view;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
@property(nonatomic) long long orientation;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

