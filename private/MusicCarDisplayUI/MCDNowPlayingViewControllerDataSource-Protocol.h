//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MCDNowPlayingViewController, NSString, UIImage;

@protocol MCDNowPlayingViewControllerDataSource <NSObject>
- (_Bool)nowPlayingViewControllerIsPlaying:(MCDNowPlayingViewController *)arg1;
- (_Bool)playbackIsLiveStreamForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (double)playbackElapsedTimeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (double)playbackDurationForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerIsShowingExplicitTrack:(MCDNowPlayingViewController *)arg1;
- (UIImage *)backgroundArtForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (NSString *)titleForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (NSString *)albumTextForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (NSString *)artistTextForNowPlayingController:(MCDNowPlayingViewController *)arg1;

@optional
- (_Bool)likedForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (long long)repeatTypeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (NSString *)shuffleStringForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
@end

