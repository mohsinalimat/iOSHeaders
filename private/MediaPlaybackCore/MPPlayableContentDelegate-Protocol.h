//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPPlayableContentManager, MPPlayableContentManagerContext, NSArray, NSIndexPath;

@protocol MPPlayableContentDelegate <NSObject>

@optional
- (void)playableContentManager:(MPPlayableContentManager *)arg1 didUpdateContext:(MPPlayableContentManagerContext *)arg2;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initializePlaybackQueueWithContentItems:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initializePlaybackQueueWithCompletionHandler:(void (^)(NSError *))arg2;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initiatePlaybackOfContentItemAtIndexPath:(NSIndexPath *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
