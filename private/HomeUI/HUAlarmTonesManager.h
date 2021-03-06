//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMusicPlayerController, NSArray, NSString, TLAlert;

@interface HUAlarmTonesManager : NSObject
{
    NSString *_defaultToneIdentifier;
    NSArray *_toneIdentifiers;
    MPMusicPlayerController *_musicPlayer;
    TLAlert *_playingAlert;
}

+ (id)localizedTitleForToneIdentifier:(id)arg1 error:(id *)arg2;
+ (id)URLForToneIdentifier:(id)arg1 error:(id *)arg2;
+ (id)defaultManager;
@property(retain, nonatomic) TLAlert *playingAlert; // @synthesize playingAlert=_playingAlert;
@property(readonly, nonatomic) MPMusicPlayerController *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(copy, nonatomic) NSArray *toneIdentifiers; // @synthesize toneIdentifiers=_toneIdentifiers;
@property(copy, nonatomic) NSString *defaultToneIdentifier; // @synthesize defaultToneIdentifier=_defaultToneIdentifier;
- (void).cxx_destruct;
- (void)_didFinishPlayingAlert:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
- (_Bool)_stopPlayingWithFadeOut:(_Bool)arg1;
- (void)previewMedia:(id)arg1;
- (void)previewMediaItem:(id)arg1;
- (id)mediaItemForIdentifier:(id)arg1;
- (void)stopPlaying;
- (void)previewTone:(id)arg1;
- (id)init;

@end

