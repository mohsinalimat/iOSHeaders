//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPULockScreenMediaControlsView, UIImage;

@protocol MPULockScreenMediaControlsViewDelegate <NSObject>

@optional
- (void)lockScreenControlsView:(MPULockScreenMediaControlsView *)arg1 nowPlayingArtworkDidChange:(UIImage *)arg2;
- (void)lockScreenControlsViewTrackActionsButtonTapped:(MPULockScreenMediaControlsView *)arg1;
- (void)lockScreenControlsViewAddToLibraryButtonTapped:(MPULockScreenMediaControlsView *)arg1;
@end

