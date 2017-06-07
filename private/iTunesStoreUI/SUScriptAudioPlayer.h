//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSURL, SUPlayerStatus;

@interface SUScriptAudioPlayer : SUScriptObject
{
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
    NSURL *_keyUrl;
    NSURL *_certificateUrl;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_audioPlayerStateChangeNotification:(id)arg1;
@property(readonly) long long playerStateUnplayed;
@property(readonly) long long playerStatePaused;
@property(readonly) long long playerStateFinished;
@property(readonly) long long playerStateFailed;
@property(readonly) long long playerStateBuffering;
@property(readonly) long long playerStateActive;
@property(readonly) NSString *nowPlayingKeyTitle;
@property(readonly) NSString *nowPlayingKeyPlaybackDuration;
@property(readonly) NSString *nowPlayingKeyPersistentID;
@property(readonly) NSString *nowPlayingKeyGenre;
@property(readonly) NSString *nowPlayingKeyDiscNumber;
@property(readonly) NSString *nowPlayingKeyDiscCount;
@property(readonly) NSString *nowPlayingKeyComposer;
@property(readonly) NSString *nowPlayingKeyArtwork;
@property(readonly) NSString *nowPlayingKeyArtist;
@property(readonly) NSString *nowPlayingKeyAlbumTrackNumber;
@property(readonly) NSString *nowPlayingKeyAlbumTrackCount;
@property(readonly) NSString *nowPlayingKeyAlbumTitle;
@property(readonly) NSString *URL;
@property(readonly) long long state;
@property(readonly) NSString *keyURL;
@property(readonly) double duration;
@property(readonly) double currentTime;
@property(readonly) NSString *certificateURL;
- (id)_className;
- (void)stop;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;

@end

