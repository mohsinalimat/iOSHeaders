//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXPlaybackCoordinator, SXPlaybackTransitionCoordinator;

@protocol SXPlaybackTransitionCoordinatorDelegate <NSObject>
- (void)playbackTransitionCoordinator:(SXPlaybackTransitionCoordinator *)arg1 removeObserversFromPlaybackCoordinator:(SXPlaybackCoordinator *)arg2;
- (void)playbackTransitionCoordinator:(SXPlaybackTransitionCoordinator *)arg1 addObserversToPlaybackCoordinator:(SXPlaybackCoordinator *)arg2;
@end

