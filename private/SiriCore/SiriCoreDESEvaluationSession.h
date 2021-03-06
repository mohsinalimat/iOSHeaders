//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSURLSessionDelegate-Protocol.h>

@class NSString, NSURL, NSURLSession, SiriCoreLocalSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface SiriCoreDESEvaluationSession : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_baseURL;
    NSURLSession *_session;
    SiriCoreLocalSpeechRecognizer *_recognizer;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendRecipeResponseForRecord:(id)arg1 recipeId:(id)arg2 result:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleRecipeResponse:(id)arg1 records:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runWithRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

