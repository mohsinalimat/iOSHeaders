//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCCaptionsClientDelegate, OS_dispatch_queue;

@interface AVCCaptionsClient : NSObject
{
    long long _streamToken;
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(readonly) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)configureCaptions:(id)arg1;
- (void)enableCaptions:(_Bool)arg1;
@property(readonly) _Bool captionsSupported;
@property(readonly) _Bool captionsEnabled;
@property(readonly) id <AVCCaptionsClientDelegate> delegate;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (void)disconnect;
- (_Bool)connect;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 streamToken:(long long)arg2;

@end

