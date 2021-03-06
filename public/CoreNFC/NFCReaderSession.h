//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NFCHardwareManagerCallbacks-Protocol.h>
#import <CoreNFC/NFCReaderSession-Protocol.h>
#import <CoreNFC/NFCSessionCallbacks-Protocol.h>
#import <CoreNFC/NFReaderSessionCallbacks-Protocol.h>

@class NFWeakReference, NSLock, NSString;
@protocol NFReaderSessionInterface><NSXPCProxyCreating, OS_dispatch_group, OS_dispatch_queue;

@interface NFCReaderSession : NSObject <NFReaderSessionCallbacks, NFCHardwareManagerCallbacks, NFCSessionCallbacks, NFCReaderSession>
{
    NFWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<NFReaderSessionInterface><NSXPCProxyCreating> *_proxy;
    _Bool _started;
    _Bool _invalidated;
    long long _invalidationCode;
    NFWeakReference *_connectedTag;
    NSLock *_pollRestartLock;
    NSObject<OS_dispatch_group> *_sessionStartInProgress;
    NSString *_alertMessage;
    unsigned long long _pollMethod;
}

@property(nonatomic) unsigned long long pollMethod; // @synthesize pollMethod=_pollMethod;
- (void)_invalidateSessionWithCode:(long long)arg1 callbackOnQueue:(_Bool)arg2;
- (void)restartPolling;
- (id)transceive:(id)arg1 error:(id *)arg2;
- (_Bool)checkPresenceWithError:(id *)arg1;
- (_Bool)disconnectTagWithError:(id *)arg1;
- (_Bool)_connectTag:(id)arg1 error:(id *)arg2;
- (_Bool)connectTag:(id)arg1 error:(id *)arg2;
- (void)_stopPollingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startPollingWithMethod:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (void)beginSession;
- (void)submitBlockOnQueue:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property(readonly, nonatomic) __weak id delegate;
- (void)didInvalidate;
- (void)hardwareFailedToLoad;
- (void)didDetectTags:(id)arg1;
- (void)didDetectExternalReader:(id)arg1;
- (void)didTerminate:(id)arg1;
- (void)didStartSession:(id)arg1;
- (void)invalidateSessionWithReason:(long long)arg1;
- (void)invalidateSession;
@property(copy, nonatomic) NSString *alertMessage;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

