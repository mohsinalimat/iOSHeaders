//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVController.h>

@class MPAVItem, MPCPlaybackEngine;

@interface _MPCAVController : MPAVController
{
    _Bool _allowsNewPlaybackErrorItem;
    MPCPlaybackEngine *_playbackEngine;
    MPAVItem *_firstPlaybackErrorItem;
}

+ (Class)playlistManagerClass;
@property(retain, nonatomic) MPAVItem *firstPlaybackErrorItem; // @synthesize firstPlaybackErrorItem=_firstPlaybackErrorItem;
@property(nonatomic) _Bool allowsNewPlaybackErrorItem; // @synthesize allowsNewPlaybackErrorItem=_allowsNewPlaybackErrorItem;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void).cxx_destruct;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_contentsChanged;
- (void)_connectAVPlayer;
- (void)_playbackErrorNotification:(id)arg1;
- (void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long upNextItemCount;
- (void)setShuffleType:(long long)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playWithOptions:(unsigned long long)arg1;
- (id)initWithPlaybackEngine:(id)arg1;

@end

