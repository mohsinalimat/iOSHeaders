//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/SXPlaybackTransitionCoordinatorDelegate-Protocol.h>
#import <Silex/SXVideoControlsViewControllerDelegate-Protocol.h>
#import <Silex/SXVideoPlaybackObserver-Protocol.h>
#import <Silex/SXVideoViewDelegate-Protocol.h>
#import <Silex/SXVolumeObserver-Protocol.h>
#import <Silex/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableArray, NSString, SXMediaSelectionController, SXPlaybackCoordinator, SXScreenDimmingManager, SXVideoControlsViewController, SXVideoPlaybackQueue, SXVideoView, SXVideoViewControllerConfiguration, SXVolumeController;
@protocol SXVideoViewControllerDataSource, SXVideoViewControllerDelegate;

@interface SXVideoViewController : UIViewController <SXVideoPlaybackObserver, UIViewControllerTransitioningDelegate, SXVideoControlsViewControllerDelegate, SXPlaybackTransitionCoordinatorDelegate, SXVolumeObserver, SXVideoViewDelegate>
{
    SXVideoViewControllerConfiguration *_configuration;
    id <SXVideoViewControllerDataSource> _dataSource;
    id <SXVideoViewControllerDelegate> _delegate;
    SXVideoView *_videoView;
    SXVideoControlsViewController *_controlsViewController;
    SXPlaybackCoordinator *_playbackCoordinator;
    SXVideoPlaybackQueue *_queue;
    NSMutableArray *_videos;
    NSMutableArray *_ads;
    unsigned long long _numberOfVideos;
    SXMediaSelectionController *_mediaSelectionController;
    SXScreenDimmingManager *_screenDimmingManager;
    SXVolumeController *_volumeController;
}

@property(readonly, nonatomic) SXVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) SXScreenDimmingManager *screenDimmingManager; // @synthesize screenDimmingManager=_screenDimmingManager;
@property(readonly, nonatomic) SXMediaSelectionController *mediaSelectionController; // @synthesize mediaSelectionController=_mediaSelectionController;
@property(nonatomic) unsigned long long numberOfVideos; // @synthesize numberOfVideos=_numberOfVideos;
@property(retain, nonatomic) NSMutableArray *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) SXVideoPlaybackQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SXPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(retain, nonatomic) SXVideoControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property(retain, nonatomic) SXVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak id <SXVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SXVideoViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) SXVideoViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (unsigned long long)indexOfVideoForAd:(id)arg1;
- (unsigned long long)indexOfVideo:(id)arg1;
- (void)accessibilityDidActivateVideoView:(id)arg1;
- (id)subtitleForVideoAtIndex:(unsigned long long)arg1;
- (id)titleForVideoAtIndex:(unsigned long long)arg1;
- (id)layoutForVideo:(id)arg1 withPlaybackCoordinator:(id)arg2 reason:(unsigned long long)arg3;
- (id)layoutForAd:(id)arg1 withPlaybackCoordinator:(id)arg2 reason:(unsigned long long)arg3;
- (void)refreshVideoControlsForPlaybackCoordinator:(id)arg1 reason:(unsigned long long)arg2;
- (void)videoControlsViewController:(id)arg1 didToggleControlVisibility:(_Bool)arg2;
- (void)videoControlsViewControllsWantsToToggleVolume:(id)arg1;
- (void)videoControlsViewControllerWantsToSeekToStart:(id)arg1;
- (void)videoControlsViewControllerWantsSelectCaptions:(id)arg1;
- (void)videoControlsViewControllerWantsToLearnMore:(id)arg1;
- (void)videoControlsViewControllerWantsToSeePrivacyStatement:(id)arg1;
- (_Bool)videoControlsViewControllerWantsToSkipToPreviousVideo:(id)arg1;
- (_Bool)videoControlsViewControllerWantsToSkipToNextVideo:(id)arg1;
- (void)videoControlsViewControllerWantsToClose:(id)arg1;
- (void)videoControlsViewControllerWantsToPause:(id)arg1;
- (void)videoControlsViewControllerWantsToPlay:(id)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)volumeLevelChanged:(double)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (void)playbackTransitionCoordinator:(id)arg1 removeObserversFromPlaybackCoordinator:(id)arg2;
- (void)playbackTransitionCoordinator:(id)arg1 addObserversToPlaybackCoordinator:(id)arg2;
- (void)transitionToPlaybackCoordinator:(id)arg1 direction:(unsigned long long)arg2;
- (_Bool)skipToPrevious;
- (void)advance;
- (void)setupVideoQueueIfNeeded;
@property(readonly, nonatomic) _Bool muted;
- (void)pause;
- (void)play;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

