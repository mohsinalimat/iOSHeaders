//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPGeniusPlaybackQueue.h>

@interface MPGeniusPlaybackQueue (MusicAdditions)
- (void)_createPlaybackContextFromCloudControllerWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createPlaybackContextFromMediaLibraryWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createPlaybackContextWithRecommendedContentWithSeedAdamID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
@end

