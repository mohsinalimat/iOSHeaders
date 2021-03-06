//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

#import <Silex/AVPlayerItemDelegate-Protocol.h>

@class NSString;

@interface SXAVPlayer : AVPlayer <AVPlayerItemDelegate>
{
    _Bool _isObservingTimeControlStatus;
    _Bool _isObservingStatus;
    _Bool _isObservingLoadedTimeRanges;
    _Bool _isObservingDuration;
    int _audioMode;
    int _playbackPosition;
    int _playbackStatus;
    CDUnknownBlockType _playbackStatusBlock;
    CDUnknownBlockType _playbackProgressBlock;
    CDUnknownBlockType _loadingProgressBlock;
    double _elapsedTime;
    double _duration;
    double _frameRate;
    double _totalTimePlayed;
    id _timeObserver;
    double _playbackStartTime;
}

@property(nonatomic) _Bool isObservingDuration; // @synthesize isObservingDuration=_isObservingDuration;
@property(nonatomic) _Bool isObservingLoadedTimeRanges; // @synthesize isObservingLoadedTimeRanges=_isObservingLoadedTimeRanges;
@property(nonatomic) _Bool isObservingStatus; // @synthesize isObservingStatus=_isObservingStatus;
@property(nonatomic) _Bool isObservingTimeControlStatus; // @synthesize isObservingTimeControlStatus=_isObservingTimeControlStatus;
@property(nonatomic) double playbackStartTime; // @synthesize playbackStartTime=_playbackStartTime;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(nonatomic) double totalTimePlayed; // @synthesize totalTimePlayed=_totalTimePlayed;
@property(nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(copy, nonatomic) CDUnknownBlockType loadingProgressBlock; // @synthesize loadingProgressBlock=_loadingProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType playbackProgressBlock; // @synthesize playbackProgressBlock=_playbackProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType playbackStatusBlock; // @synthesize playbackStatusBlock=_playbackStatusBlock;
@property(nonatomic) int playbackStatus; // @synthesize playbackStatus=_playbackStatus;
@property(nonatomic) int playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(readonly, nonatomic) int audioMode; // @synthesize audioMode=_audioMode;
- (void).cxx_destruct;
- (void)durationChanged;
- (void)loadedTimeRangesChanged;
- (void)timeControlStatusChanged;
- (void)statusChanged;
- (void)setElapsedTime:(double)arg1 duration:(double)arg2;
- (void)playedToEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)addObservers;
- (void)stopTimeObserver;
- (void)startTimeObserver;
- (void)loadFrameRate;
- (void)seekToStartWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 audioMode:(int)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

