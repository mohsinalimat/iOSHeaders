//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/DAActionConsumer-Protocol.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer>
{
    NSConditionLock *_doneCondition;
    _Bool _shouldRetryRequest;
    _Bool _alwaysReportFailures;
}

- (void)dealloc;
- (_Bool)shouldRetryRequest;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)waitUntilDone;
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;
- (void)setDone:(_Bool)arg1;
- (id)initWithAlwaysReportFailures:(_Bool)arg1;
- (id)init;

@end

