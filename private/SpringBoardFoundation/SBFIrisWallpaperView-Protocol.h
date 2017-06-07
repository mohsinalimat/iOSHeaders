//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol SBFIrisWallpaperViewDelegate;

@protocol SBFIrisWallpaperView <NSObject>
@property(readonly, nonatomic) _Bool isIrisInteracting;
@property(readonly, nonatomic) long long irisPlaybackState;
@property(nonatomic) __weak id <SBFIrisWallpaperViewDelegate> irisDelegate;
- (UIGestureRecognizer *)irisGestureRecognizer;
@end

