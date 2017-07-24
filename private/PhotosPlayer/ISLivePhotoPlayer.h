//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISBasePlayer.h>

#import <PhotosPlayer/ISChangeObserver-Protocol.h>
#import <PhotosPlayer/ISLivePhotoSettleBehaviorDelegate-Protocol.h>

@class ISLivePhotoVitalityFilter, NSDate, NSMutableSet, NSSet, NSString;

@interface ISLivePhotoPlayer : ISBasePlayer <ISLivePhotoSettleBehaviorDelegate, ISChangeObserver>
{
    NSMutableSet *_playbackFilters;
    // Error parsing type: Ai, name: _fadeInRequestID
    struct {
        _Bool scale;
    } _isValid;
    double _lastAppliedScale;
    _Bool _playingVitality;
    _Bool _hinting;
    _Bool _immediatelyShowsPhotoWhenPlaybackEnds;
    _Bool _playbackAllowed;
    _Bool __settleAutomaticallyWhenReady;
    _Bool __shouldPrepareForVitalityWhenReady;
    _Bool __shouldPlayVitalityWhenReady;
    _Bool __shouldPrepareForHintWhenReady;
    ISLivePhotoVitalityFilter *_vitalityFilter;
    long long _currentPlaybackStyle;
    long long _targetReadiness;
    long long __styleToPlayWhenReady;
    NSDate *__vitalityTimeoutDate;
    CDStruct_1b6d18a9 _seekTime;
    CDStruct_e83c9415 _trimTimeRange;
}

@property(retain, nonatomic, setter=_setVitalityTimeoutDate:) NSDate *_vitalityTimeoutDate; // @synthesize _vitalityTimeoutDate=__vitalityTimeoutDate;
@property(nonatomic, setter=_setShouldPrepareForHintWhenReady:) _Bool _shouldPrepareForHintWhenReady; // @synthesize _shouldPrepareForHintWhenReady=__shouldPrepareForHintWhenReady;
@property(nonatomic, setter=_setShouldPlayVitalityWhenReady:) _Bool _shouldPlayVitalityWhenReady; // @synthesize _shouldPlayVitalityWhenReady=__shouldPlayVitalityWhenReady;
@property(nonatomic, setter=_setShouldPrepareForVitalityWhenReady:) _Bool _shouldPrepareForVitalityWhenReady; // @synthesize _shouldPrepareForVitalityWhenReady=__shouldPrepareForVitalityWhenReady;
@property(nonatomic, setter=_setSettleAutomaticallyWhenReady:) _Bool _settleAutomaticallyWhenReady; // @synthesize _settleAutomaticallyWhenReady=__settleAutomaticallyWhenReady;
@property(nonatomic, setter=_setStyleToPlayWhenReady:) long long _styleToPlayWhenReady; // @synthesize _styleToPlayWhenReady=__styleToPlayWhenReady;
@property(nonatomic) CDStruct_e83c9415 trimTimeRange; // @synthesize trimTimeRange=_trimTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) long long targetReadiness; // @synthesize targetReadiness=_targetReadiness;
@property(nonatomic, getter=isPlaybackAllowed) _Bool playbackAllowed; // @synthesize playbackAllowed=_playbackAllowed;
@property(nonatomic) _Bool immediatelyShowsPhotoWhenPlaybackEnds; // @synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds;
@property(nonatomic, setter=_setCurrentPlaybackStyle:) long long currentPlaybackStyle; // @synthesize currentPlaybackStyle=_currentPlaybackStyle;
@property(retain, nonatomic) ISLivePhotoVitalityFilter *vitalityFilter; // @synthesize vitalityFilter=_vitalityFilter;
@property(nonatomic, getter=isHinting, setter=_setHinting:) _Bool hinting; // @synthesize hinting=_hinting;
@property(nonatomic, getter=isPlayingVitality, setter=_setPlayingVitality:) _Bool playingVitality; // @synthesize playingVitality=_playingVitality;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg1;
- (void)vitalityBehaviorDidEndPlaying:(id)arg1;
- (void)vitalityBehaviorDidBeginPlaying:(id)arg1;
- (void)livePhotoSettleBehaviorDidFinish:(id)arg1;
- (void)livePhotoPlaybackBehaviorDidFinish:(id)arg1;
- (void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg1;
- (void)didPerformChanges;
- (void)_fadeInAudio;
- (void)_updateHintingAndVitality;
- (void)_configurePlaybackFilter:(id)arg1;
- (double)_coalescedPlaybackFilterHintProgress;
- (long long)_coalescedPlaybackFilterState;
- (void)_resetPlaybackFilters;
- (void)_configurePlaybackFilters;
- (void)_updateScaleIfNeeded;
- (void)_invalidateScale;
- (void)_handlePlaybackFilterDidChange;
- (void)_handleVitalityFilterDidChange:(id)arg1;
- (double)_photoTransitionDuration;
- (void)_prepareForVitalityIfNeeded;
- (void)_playIfNeeded;
@property(readonly, nonatomic) _Bool _canPlayVitality;
- (void)setSeekTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playVitality;
- (void)prepareForVitality;
- (void)stopPlaybackAnimated:(_Bool)arg1;
- (void)stopPlayback;
- (void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(_Bool)arg2;
- (void)startPlaybackWithStyle:(long long)arg1;
- (double)lastAppliedScale;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(_Bool)arg2;
- (void)_updatePlayerItemLoadingTarget;
@property(readonly, nonatomic) NSSet *playbackFilters;
- (void)removePlaybackFilter:(id)arg1;
- (void)addPlaybackFilter:(id)arg1;
- (void)playHintWhenReady;
- (void)prepareForHintWhenReady;
- (void)activeBehaviorDidChange;
- (double)videoWillPlayToEndInterval;
- (void)statusDidChange;
- (void)playerItemDidChange;
- (void)configurePlayerItem;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

