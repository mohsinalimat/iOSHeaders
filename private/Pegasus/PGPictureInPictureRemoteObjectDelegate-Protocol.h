//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGPictureInPictureRemoteObject, PGPictureInPictureViewController;

@protocol PGPictureInPictureRemoteObjectDelegate <NSObject>

@optional
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (_Bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(PGPictureInPictureRemoteObject *)arg1;
@end

