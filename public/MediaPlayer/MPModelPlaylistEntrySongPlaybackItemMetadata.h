//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntrySongPlaybackItemMetadata : MPModelSongPlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

+ (id)requiredProperties;
@property(retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // @synthesize playlistEntry=_playlistEntry;
- (void).cxx_destruct;
- (id)song;
- (void)setSong:(id)arg1;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)modelGenericObject;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

