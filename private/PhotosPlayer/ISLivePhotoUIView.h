//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISBasePlayerUIView.h>

#import <PhotosPlayer/ISChangeObserver-Protocol.h>
#import <PhotosPlayer/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosPlayer/UIInteractionProgressObserver-Protocol.h>

@class ISLivePhotoPlaybackFilter, ISLivePhotoPlayer, NSString, UIGestureRecognizer, UIImpactFeedbackGenerator, UILabel, UIPreviewForceInteractionProgress;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIInteractionProgressObserver, UIGestureRecognizerDelegate, ISChangeObserver>
{
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool __playingVitality;
    _Bool __useForceTouch;
    UIGestureRecognizer *_playbackGestureRecognizer;
    ISLivePhotoPlaybackFilter *__playbackFilter;
    UIPreviewForceInteractionProgress *__interactionProgress;
    UILabel *__overlayLabel;
    long long __overlayDismissalID;
}

@property(nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID; // @synthesize _overlayDismissalID=__overlayDismissalID;
@property(readonly, nonatomic) UILabel *_overlayLabel; // @synthesize _overlayLabel=__overlayLabel;
@property(nonatomic, setter=_setUseForceTouch:) _Bool _useForceTouch; // @synthesize _useForceTouch=__useForceTouch;
@property(nonatomic, setter=_setPlayingVitality:) _Bool _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property(readonly, nonatomic) UIPreviewForceInteractionProgress *_interactionProgress; // @synthesize _interactionProgress=__interactionProgress;
@property(retain, nonatomic, setter=_setPlaybackFilter:) ISLivePhotoPlaybackFilter *_playbackFilter; // @synthesize _playbackFilter=__playbackFilter;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)_updateGestureRecognizerParameters;
- (void)_playerDidChangeHinting;
- (void)_playerDidChangePlaybackStyle;
- (void)_dismissOverlayLabel:(long long)arg1;
- (void)_showOverlayLabel;
- (void)_updatePlaybackFilter;
- (void)contentDidChange;
- (void)audioSessionDidChange;
- (Class)_playbackFilterClass;
- (void)_updatePlaybackFilterInput;
- (void)_updateForceInteractionProgress;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (id)livePhotoPlayer;
@property(retain, nonatomic) ISLivePhotoPlayer *player; // @dynamic player;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

