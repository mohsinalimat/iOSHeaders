//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKRoundButton.h>

#import <GameCenterUI/GKPlayerPhotoContainer-Protocol.h>

@class GKPlayer, NSString;

@interface GKPlayerPhotoButton : GKRoundButton <GKPlayerPhotoContainer>
{
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)refreshPhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshPhoto;
- (void)setBackgroundImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

