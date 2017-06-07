//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSRegistrationControlDaemonResponseListener : NSObject <IDSDaemonListenerProtocol>
{
    IDSDaemonRequestTimer *_requestTimer;
}

- (void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(id)arg2 withError:(id)arg3;
- (void)registrationControlResponseForRequestID:(id)arg1 withError:(id)arg2;
- (id)initWithRequestTimer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

