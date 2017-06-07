//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCAudioPlayerController;

@protocol NCAudioPlayerControllerDelegate <NSObject>

@optional
- (void)playerController:(NCAudioPlayerController *)arg1 didSeekToTime:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willSeekToTime:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToStatus:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToStatus:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToRate:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToRate:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToPlaybackState:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToPlaybackState:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToDuration:(double)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToDuration:(double)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToCurrentTime:(float)arg2;
@end

