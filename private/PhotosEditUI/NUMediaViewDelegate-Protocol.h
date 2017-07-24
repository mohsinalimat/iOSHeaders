//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class NUMediaView;

@protocol NUMediaViewDelegate <NSObject>

@optional
- (void)mediaViewDidFinishPreparingVideo:(NUMediaView *)arg1;
- (void)mediaViewDidStartPreparingVideo:(NUMediaView *)arg1;
- (void)mediaViewIsReadyForVideoPlayback:(NUMediaView *)arg1;
- (void)mediaView:(NUMediaView *)arg1 didZoom:(double)arg2;
- (void)mediaViewDidUpdateLivePhoto:(NUMediaView *)arg1;
- (void)mediaViewDidFinishRendering:(NUMediaView *)arg1;
@end

