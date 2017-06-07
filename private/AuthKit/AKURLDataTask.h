//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData, NSURLRequest, NSURLSessionDataTask;

@interface AKURLDataTask : NSObject
{
    _Bool _canceledOrCompleted;
    NSURLRequest *_request;
    unsigned long long _retryCount;
    NSURLSessionDataTask *_underlyingTask;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_receivedData;
    NSError *_lastRetryError;
}

@property(nonatomic) _Bool canceledOrCompleted; // @synthesize canceledOrCompleted=_canceledOrCompleted;
@property(retain, nonatomic) NSError *lastRetryError; // @synthesize lastRetryError=_lastRetryError;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLSessionDataTask *underlyingTask; // @synthesize underlyingTask=_underlyingTask;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;

@end

