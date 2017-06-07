//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCAppConfigurationResource, NSObject, NSString;
@protocol FCContentContext, OS_dispatch_queue;

@interface FCAppConfigurationOperation : FCOperation
{
    id <FCContentContext> _context;
    NSString *_resourceID;
    FCAppConfigurationResource *_cachedResource;
    CDUnknownBlockType _configurationCompletionHandler;
    NSObject<OS_dispatch_queue> *_completionQueue;
    FCAppConfigurationResource *_resultResource;
}

@property(retain, nonatomic) FCAppConfigurationResource *resultResource; // @synthesize resultResource=_resultResource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType configurationCompletionHandler; // @synthesize configurationCompletionHandler=_configurationCompletionHandler;
@property(copy, nonatomic) FCAppConfigurationResource *cachedResource; // @synthesize cachedResource=_cachedResource;
@property(copy, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_downloadAppConfigFromURL:(id)arg1;
- (void)resetForRetry;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(double *)arg2;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

