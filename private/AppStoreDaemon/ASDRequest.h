//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDRequestDelegate-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSUUID;
@protocol ASDRequestObserver, ASDRequestProxy;

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding>
{
    id <ASDRequestObserver> _observer;
    NSUUID *_requestID;
    id <ASDRequestProxy> _proxy;
}

+ (id)_sharedBroker;
+ (_Bool)supportsSecureCoding;
+ (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;
@property(retain) id <ASDRequestProxy> proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property __weak id <ASDRequestObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)_submitRequestWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_startWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_notifyObserverOfCompletionWithError:(id)arg1;
- (void)_cancelWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_callErrorHandler:(CDUnknownBlockType)arg1 withError:(id)arg2 orDefaultCode:(unsigned long long)arg3;
- (void)_callErrorHandler:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)receiveResponse:(id)arg1;
- (id)init;

@end

