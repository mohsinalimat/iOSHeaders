//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

#import <PhotosPlayer/ISChangeObserver-Protocol.h>
#import <PhotosPlayer/ISWrappedAVPlayerDelegate-Protocol.h>

@class AVPlayer, ISBehavior, ISPlayerItem, ISPlayerOutputContent, ISPlayerState, ISWrappedAVPlayer, NSError, NSHashTable, NSObject, NSString;
@protocol ISBasePlayerDelegate, OS_dispatch_queue;

@interface ISBasePlayer : ISObservable <ISChangeObserver, ISWrappedAVPlayerDelegate>
{
    float _videoVolume;
    AVPlayer *_providedAVPlayer;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSHashTable *_outputQueue_outputs;
    struct {
        _Bool videoPlayer;
        _Bool videoPlayerVolume;
        _Bool contentFromPlayerItem;
        _Bool willPlayToEndObserver;
        _Bool willPlayToPhotoObserver;
        _Bool status;
    } _isValid;
    _Bool _audioEnabled;
    float _audioVolume;
    ISPlayerItem *_playerItem;
    long long _status;
    NSError *_error;
    id <ISBasePlayerDelegate> _delegate;
    ISWrappedAVPlayer *_videoPlayer;
    ISBehavior *_activeBehavior;
    id __videoWillPlayToEndObserver;
    id __videoWillPlayToPhotoObserver;
    ISPlayerState *_lastAppliedLayoutInfo;
    ISPlayerOutputContent *__outputContent;
    double _lastAppliedScale;
    CDStruct_1b6d18a9 __videoForwardPlaybackEndTime;
}

@property(nonatomic, setter=_setVideoForwardPlaybackEndTime:) CDStruct_1b6d18a9 _videoForwardPlaybackEndTime; // @synthesize _videoForwardPlaybackEndTime=__videoForwardPlaybackEndTime;
@property(nonatomic, setter=_setLastAppliedScale:) double lastAppliedScale; // @synthesize lastAppliedScale=_lastAppliedScale;
@property(retain, nonatomic, setter=_setOutputContent:) ISPlayerOutputContent *_outputContent; // @synthesize _outputContent=__outputContent;
@property(retain, nonatomic, setter=_setLastAppliedLayoutInfo:) ISPlayerState *lastAppliedLayoutInfo; // @synthesize lastAppliedLayoutInfo=_lastAppliedLayoutInfo;
@property(retain, nonatomic, setter=_setVideoWillPlayToPhotoObserver:) id _videoWillPlayToPhotoObserver; // @synthesize _videoWillPlayToPhotoObserver=__videoWillPlayToPhotoObserver;
@property(retain, nonatomic, setter=_setVideoWillPlayToEndObserver:) id _videoWillPlayToEndObserver; // @synthesize _videoWillPlayToEndObserver=__videoWillPlayToEndObserver;
@property(retain, nonatomic, setter=setActiveBehavior:) ISBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) __weak id <ISBasePlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(retain, nonatomic, setter=_setError:) NSError *error; // @synthesize error=_error;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(retain, nonatomic) ISPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)behavior:(id)arg1 playVideoToTime:(CDStruct_1b6d18a9)arg2 initialRate:(float)arg3 overDuration:(double)arg4 progressHandler:(CDUnknownBlockType)arg5;
- (void)behavior:(id)arg1 removeTimeObserver:(id)arg2;
- (id)behavior:(id)arg1 addBoundaryTimeObserverForTimes:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)behavior:(id)arg1 setVideoVolume:(float)arg2;
- (void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)behavior:(id)arg1 seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)behavior:(id)arg1 seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (float)videoPlayRate;
- (void)behavior:(id)arg1 setVideoPlayRate:(float)arg2;
- (void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setVideoPlayer:(id)arg1;
- (void)_handleMediaServicesReset;
- (void)_handleErrorsIfNeeded;
- (void)_updateVideoPlayerIfNeeded;
- (void)_invalidateVideoPlayer;
- (void)_updateVideoPlayerVolumeIfNeeded;
- (void)_invalidateVideoPlayerVolume;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)didPerformChanges;
- (void)setVideoVolume:(float)arg1;
- (float)videoVolume;
- (void)_setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateStatusIfNeeded;
- (void)_invalidateStatus;
- (void)_updateWillPlayToPhotoObserverIfNeeded;
- (void)_invalidateWillPlayToPhotoObserver;
- (void)_updateWillPlayToEndObserverIfNeeded;
- (void)_invalidateWillPlayToEndObserver;
- (void)_updateContentFromPlayerItemIfNeeded;
- (void)_invalidateContentFromPlayerItem;
- (void)_configureNewOutput:(id)arg1;
- (void)enumerateOutputsWithBlock:(CDUnknownBlockType)arg1;
- (void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)videoWillPlayToEndInterval;
- (void)_videoWillPlayToEnd;
- (void)_videoWillPlayToPhoto;
- (void)_videoDidPlayToEnd;
- (void)willRemoveOutput:(id)arg1;
- (void)didAddOutput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)activeBehaviorDidChange;
- (void)statusDidChange;
- (void)configurePlayerItem;
- (void)playerItemDidChange;
- (id)mutableChangeObject;
- (void)dealloc;
- (id)initWithVideoPlayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

