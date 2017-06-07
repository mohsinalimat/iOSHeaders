//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCVirtualTTYDeviceDelegate;

@interface AVCVirtualTTYDevice : NSObject
{
    AVConferenceXPCClient *_connection;
    id <AVCVirtualTTYDeviceDelegate> _delegate;
    _Bool _isStarted;
}

@property(nonatomic) id <AVCVirtualTTYDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)terminateSession;
- (void)deregisterBlocksForDelegateNotifications;
- (void)registerBlocksForDelegateNotifications;
- (id)sendCharacter:(unsigned short)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithMode:(long long)arg1 error:(id *)arg2;

@end

