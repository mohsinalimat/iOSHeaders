//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, OS_dispatch_queue;

@interface HAPHTTPClient : NSObject
{
    struct HTTPClientPrivate *_httpClient;
    _Bool _invalidateRequested;
    NSString *_dnsName;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_queue;
    id <HAPHTTPClientDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HAPHTTPClientDebugDelegate> _debugDelegate;
    NSObject<OS_dispatch_queue> *_debugDelegateQueue;
}

@property(nonatomic) _Bool invalidateRequested; // @synthesize invalidateRequested=_invalidateRequested;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *debugDelegateQueue; // @synthesize debugDelegateQueue=_debugDelegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *dnsName; // @synthesize dnsName=_dnsName;
- (void).cxx_destruct;
- (_Bool)_debugDelegateRespondsToSelector:(SEL)arg1;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id *)arg2;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id *)arg2;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (_Bool)enableUAPSessionSecurityWithReadKey:(unsigned char [32])arg1 writeKey:(unsigned char [32])arg2 error:(id *)arg3;
- (int)_initializeCoreUtilsHTTPClient;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;

@end

