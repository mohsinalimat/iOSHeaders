//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSURLAuthenticationChallengeSender-Protocol.h>

@class AVAssetResourceLoaderInternal, NSOperationQueue, NSString, NSURLSession;
@protocol AVAssetResourceLoaderDelegate, NSURLSessionDataDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender>
{
    AVAssetResourceLoaderInternal *_resourceLoader;
}

- (struct OpaqueFigCustomURLHandler *)_contentKeySessionCustomURLHandler;
- (void)_setContentKeySessionCustomURLHandler:(struct OpaqueFigCustomURLHandler *)arg1;
- (void)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 willHandleRequest:(_Bool *)arg3;
- (void)_noteFinishingOfRequest:(id)arg1;
- (void)_poseAuthenticationChallengeWithRequestInfo:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 challenge:(id)arg3;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 data:(id)arg2 requestDictionary:(id)arg3 fallbackHandler:(CDUnknownBlockType)arg4;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 challenge:(id)arg2 fallbackHandler:(CDUnknownBlockType)arg3;
- (void)_issueLoadingRequestWithKey:(id)arg1 loadingRequest:(id)arg2 isRenewalRequest:(_Bool)arg3 fallbackHandler:(CDUnknownBlockType)arg4;
- (void)_issueLoadingRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(CDUnknownBlockType)arg3;
- (void)_cancelRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2;
- (void)_cancelRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(CDUnknownBlockType)arg3;
- (void)_cancelRequestWithKey:(id)arg1 fallbackHandler:(CDUnknownBlockType)arg2;
- (void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(_Bool)arg3 key:(id)arg4 fallbackHandler:(CDUnknownBlockType)arg5;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(CDUnknownBlockType)arg2;
- (void)cancelLoading;
- (id)asset;
- (struct OpaqueFigCustomURLLoader *)_customURLLoader;
- (struct OpaqueFigCustomURLHandler *)_customURLHandler;
- (struct OpaqueFigCustomURLHandler *)_authHandler;
- (id)URLRequestHelper;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVAssetResourceLoaderDelegate> delegate;
- (id)_getDelegateOnStateQueue;
- (id)stateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_setDelegateOnStateQueue:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2;
- (id)init;
@property(nonatomic) _Bool preloadsEligibleContentKeys;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)_sendAuthResponseForChallenge:(id)arg1 disposition:(long long)arg2 credential:(id)arg3 error:(id)arg4;
- (id)cachedContentInformationForURL:(id)arg1;
- (void)cacheContentInformation:(id)arg1 forURL:(id)arg2;
- (id)customURLBridge;
- (void)setCustomURLBridge:(id)arg1;
@property(retain, nonatomic) NSURLSession *URLSession;
@property(readonly, nonatomic) NSOperationQueue *URLSessionDataDelegateQueue;
@property(readonly, nonatomic) id <NSURLSessionDataDelegate> URLSessionDataDelegate;
- (void)_makeURLSessionSupportGooIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

