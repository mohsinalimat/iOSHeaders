//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSURLSessionDataDelegate-Protocol.h>
#import <CloudKitDaemon/NSURLSessionDelegate-Protocol.h>
#import <CloudKitDaemon/NSURLSessionTaskDelegatePrivate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKDURLSessionPool : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate>
{
    NSMutableDictionary *_sessionWrapperByIdentifier;
    NSMutableDictionary *_sessionConfigurationReferenceByName;
    NSMutableDictionary *_sessionConfigurationReferenceByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    int _backgroundSessionConnectionPoolLimit;
}

+ (id)backgroundSessionConnectionPoolName;
+ (id)sharedURLSessionPool;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)_performAsyncOnDelegateOfSession:(id)arg1 task:(id)arg2 fromSelector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)invalidateDataTask:(id)arg1;
- (id)dataTaskWithTaskDescription:(id)arg1 configuration:(id)arg2 configurationName:(id)arg3 request:(id)arg4 delegate:(id)arg5;
- (id)_URLSessionWrapperWithConfiguration:(id)arg1 configurationName:(id)arg2 forDelegate:(id)arg3;
- (void)checkinSessionConfiguration:(id)arg1 withName:(id)arg2;
- (void)setSessionConfiguration:(id)arg1 forName:(id)arg2;
- (id)checkoutSessionConfigurationWithName:(id)arg1;
@property(readonly, nonatomic) int backgroundSessionConnectionPoolLimit;
- (void)_updateBackgroundSessionConnectionPoolLimit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
