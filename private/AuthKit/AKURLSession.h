//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSURLSessionDataDelegate-Protocol.h>
#import <AuthKit/NSURLSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_tasksByIdentifier;
    _Bool __usesAppleIDContext;
}

+ (id)sharedAnisetteFreeURLSession;
+ (id)sharedURLSession;
@property(nonatomic) _Bool _usesAppleIDContext; // @synthesize _usesAppleIDContext=__usesAppleIDContext;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_unsafe_retryTaskIfPossible:(id)arg1;
- (_Bool)_isRecoverableError:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)_unsafe_completeTask:(id)arg1 withError:(id)arg2;
- (void)cancelDataTask:(id)arg1;
- (id)beginDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_URLSession;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

