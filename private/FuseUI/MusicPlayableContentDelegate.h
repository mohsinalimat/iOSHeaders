//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MPPlayableContentDelegate-Protocol.h>

@class MusicAVPlayer, NSString;

@interface MusicPlayableContentDelegate : NSObject <MPPlayableContentDelegate>
{
    MusicAVPlayer *_player;
}

@property(readonly, nonatomic) MusicAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)playableContentManager:(id)arg1 initializePlaybackQueueWithCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

