//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerController, AVValueTiming, NSArray, NSString, WebAVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface WebAVPlayerController : NSObject
{
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;
    _Bool _pictureInPictureInterrupted;
    _Bool _canScanBackward;
    _Bool _canPlay;
    _Bool _canPause;
    _Bool _canTogglePlayback;
    _Bool _canSeek;
    _Bool _hasEnabledAudio;
    _Bool _hasEnabledVideo;
    _Bool _playingOnSecondScreen;
    _Bool _externalPlaybackActive;
    _Bool _allowsExternalPlayback;
    _Bool _pictureInPicturePossible;
    AVPlayerController *_playerControllerProxy;
    struct WebPlaybackSessionModel *_delegate;
    struct WebPlaybackSessionInterfaceAVKit *_playbackSessionInterface;
    double _rate;
    double _contentDuration;
    double _minTime;
    double _maxTime;
    double _contentDurationWithinEndTimes;
    NSArray *_loadedTimeRanges;
    long long _status;
    AVValueTiming *_timing;
    NSArray *_seekableTimeRanges;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    long long _externalPlaybackType;
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;
    struct CGSize _contentDimensions;
}

+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingPlaying;
@property(getter=isPictureInPicturePossible) _Bool pictureInPicturePossible; // @synthesize pictureInPicturePossible=_pictureInPicturePossible;
@property _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(retain) NSString *externalPlaybackAirPlayDeviceLocalizedName; // @synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName;
@property long long externalPlaybackType; // @synthesize externalPlaybackType=_externalPlaybackType;
@property(getter=isExternalPlaybackActive) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(readonly, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property(retain) NSArray *legibleMediaSelectionOptions; // @synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions;
@property(retain) NSArray *audioMediaSelectionOptions; // @synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions;
@property(retain) NSArray *seekableTimeRanges; // @synthesize seekableTimeRanges=_seekableTimeRanges;
@property(retain) AVValueTiming *timing; // @synthesize timing=_timing;
@property long long status; // @synthesize status=_status;
@property(retain) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property double contentDurationWithinEndTimes; // @synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes;
@property double maxTime; // @synthesize maxTime=_maxTime;
@property double minTime; // @synthesize minTime=_minTime;
@property _Bool hasEnabledVideo; // @synthesize hasEnabledVideo=_hasEnabledVideo;
@property _Bool hasEnabledAudio; // @synthesize hasEnabledAudio=_hasEnabledAudio;
@property struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property double contentDuration; // @synthesize contentDuration=_contentDuration;
@property _Bool canSeek; // @synthesize canSeek=_canSeek;
@property double rate; // @synthesize rate=_rate;
@property _Bool canTogglePlayback; // @synthesize canTogglePlayback=_canTogglePlayback;
@property _Bool canPause; // @synthesize canPause=_canPause;
@property _Bool canPlay; // @synthesize canPlay=_canPlay;
@property _Bool canScanBackward; // @synthesize canScanBackward=_canScanBackward;
@property struct WebPlaybackSessionInterfaceAVKit *playbackSessionInterface; // @synthesize playbackSessionInterface=_playbackSessionInterface;
@property struct WebPlaybackSessionModel *delegate; // @synthesize delegate=_delegate;
@property(retain) AVPlayerController *playerControllerProxy; // @synthesize playerControllerProxy=_playerControllerProxy;
@property(getter=isPictureInPictureInterrupted) _Bool pictureInPictureInterrupted;
@property(readonly, getter=isPlayingOnExternalScreen) _Bool playingOnExternalScreen;
@property(retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property(retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property(readonly) _Bool hasLegibleMediaSelectionOptions;
@property(readonly) _Bool hasAudioMediaSelectionOptions;
@property(readonly) _Bool hasMediaSelectionOptions;
- (void)seekChapterForward:(id)arg1;
- (void)seekToEnd:(id)arg1;
@property(readonly) _Bool canSeekToEnd;
- (void)seekChapterBackward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
@property(readonly) _Bool canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
@property(readonly) _Bool canScanForward;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (_Bool)hasLiveStreamingContent;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (double)currentTimeWithinEndTimes;
- (void)seekToTime:(double)arg1;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
@property(getter=isPlaying) _Bool playing;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)player;
- (void)dealloc;
- (id)init;

@end

