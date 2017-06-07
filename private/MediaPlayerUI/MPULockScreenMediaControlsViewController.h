//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUMediaRemoteViewController.h>

#import <MediaPlayerUI/MPULockScreenMediaControlsViewDelegate-Protocol.h>

@class MPUNowPlayingArtworkView, MPWeakTimer, NSArray, NSString, UIView;
@protocol MPULockScreenMediaControlsDelegate;

@interface MPULockScreenMediaControlsViewController : MPUMediaRemoteViewController <MPULockScreenMediaControlsViewDelegate>
{
    MPWeakTimer *_longPressInteractionEventTimer;
    MPUNowPlayingArtworkView *_artworkView;
    NSArray *_notificationObservers;
    _Bool _lockscreenDisabledForScreenTurnOff;
    id <MPULockScreenMediaControlsDelegate> _delegate;
}

+ (Class)controlsViewClass;
@property(nonatomic) __weak id <MPULockScreenMediaControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendMediaRemoteCommand:(unsigned int)arg1;
- (void)_endLongPressInteractionEventTimer;
- (void)_beginLongPressInteractionEventTimer;
- (void)_interactionEventReceivedFromRecognizer:(id)arg1;
- (void)_reloadAuxiliaryControls;
- (id)_mediaControlsView;
- (void)lockScreenControlsView:(id)arg1 nowPlayingArtworkDidChange:(id)arg2;
- (void)lockScreenControlsViewTrackActionsButtonTapped:(id)arg1;
- (void)lockScreenControlsViewAddToLibraryButtonTapped:(id)arg1;
- (void)transportControlsView:(id)arg1 longPressEndOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 longPressBeginOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(long long)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(_Bool)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
@property(readonly, nonatomic) UIView *artworkView;
- (void)supportedRemoteControlsDidChange;
- (void)viewDidLoad;
- (id)remoteControlInterfaceIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

