//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class BKSAnimationFenceHandle;

@protocol PGPictureInPictureExportedInterface <NSObject>
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(BKSAnimationFenceHandle *)arg4;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureResumed;
- (oneway void)pictureInPictureSuspended;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

