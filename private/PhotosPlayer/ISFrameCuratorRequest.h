//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset;

@interface ISFrameCuratorRequest : NSObject
{
    _Bool _cancelled;
    int _videoTrackID;
    AVAsset *_videoAsset;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) int videoTrackID; // @synthesize videoTrackID=_videoTrackID;
@property(readonly, copy, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void).cxx_destruct;
- (void)_run;
- (void)startOnQueue:(id)arg1;
- (void)cancel;
- (id)initWithVideoAsset:(id)arg1 videoTrackID:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end

