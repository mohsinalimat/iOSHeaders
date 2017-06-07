//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMFeature-Protocol.h>

@class IKAppContext, IKAppDocument, IKAppMediaItemBridge, IKAppPlaylistBridge, IKDOMDocument, IKJSPlayer, NSArray, NSDate, NSMutableSet, NSNumber, NSString;
@protocol IKAppPlayer, IKAppPlaylist;

@interface IKAppPlayerBridge : NSObject <IKDOMFeature>
{
    id <IKAppPlaylist> _appPlaylist;
    IKAppDocument *_appOverlayDocument;
    IKAppDocument *_appInteractiveOverlayDocument;
    _Bool _interactiveOverlayDismissable;
    NSMutableSet *_observedTimeIntervals;
    NSMutableSet *_observedTimeBoundaries;
    NSArray *_observedMetadataKeys;
    IKAppContext *_appContext;
    NSString *_featureName;
    id <IKAppPlayer> _appPlayer;
    IKJSPlayer *_jsPlayer;
    long long _state;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak IKJSPlayer *jsPlayer; // @synthesize jsPlayer=_jsPlayer;
@property(nonatomic) __weak id <IKAppPlayer> appPlayer; // @synthesize appPlayer=_appPlayer;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) double scanRate;
- (void)cleanup;
- (void)currentMediaItemDurationDidChange:(double)arg1;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;
- (void)setTimedMetadataKeysToObserve:(id)arg1;
@property(readonly, nonatomic) IKAppMediaItemBridge *previousMediaItem;
@property(readonly, nonatomic) IKAppMediaItemBridge *nextMediaItem;
@property(readonly, nonatomic) IKAppMediaItemBridge *currentMediaItem;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property(readonly, nonatomic) NSDate *currentMediaItemDate;
@property(retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property(retain, nonatomic) IKDOMDocument *overlayDocument;
@property(nonatomic) _Bool interactiveOverlayDismissable;
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;
@property(retain, nonatomic) IKAppPlaylistBridge *playlist;
- (void)scan:(double)arg1;
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)present;
- (void)play;
- (id)initWithAppContext:(id)arg1 jsPlayer:(id)arg2;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)transportBarVisibilityDidChange:(_Bool)arg1;
- (void)shouldChangeToMediaAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playbackDidStall:(double)arg1;
- (void)playbackError:(id)arg1 shouldStopDueToError:(_Bool)arg2;
- (void)requestSeekToTime:(double)arg1 currentTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)requestSeekToTime:(double *)arg1 currentTime:(double)arg2;
- (void)shouldHandleStateEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldHandleStateEvent:(id)arg1;
- (void)stateWillChange:(id)arg1;
- (void)stateDidChange:(id)arg1;
- (void)mediaItemDidChange:(long long)arg1;
- (void)mediaItemDidChange:(id)arg1 userInitiated:(_Bool)arg2;
- (void)mediaItemWillChange:(long long)arg1;
- (void)mediaItemWillChange:(id)arg1 userInitiated:(_Bool)arg2;
- (void)timeBoundaryDidCross:(double)arg1;
- (void)stopObservingTimeBoundary:(double)arg1;
- (void)observeTimeBoundary:(double)arg1;
- (void)removeTimeIntervalObserver:(unsigned long long)arg1;
- (void)addTimeIntervalObserver:(unsigned long long)arg1;
- (void)timeIntervalElapsed:(double)arg1 time:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
