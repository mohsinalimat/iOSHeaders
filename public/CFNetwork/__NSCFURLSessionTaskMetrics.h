//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskMetrics.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding>
{
    NSArray *_transactionMetrics;
    NSDateInterval *_taskInterval;
    unsigned long long _redirectCount;
}

+ (_Bool)supportsSecureCoding;
- (void)setRedirectCount:(unsigned long long)arg1;
- (unsigned long long)redirectCount;
- (void)setTaskInterval:(id)arg1;
- (id)taskInterval;
- (void)setTransactionMetrics:(id)arg1;
- (id)transactionMetrics;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithTask:(id)arg1;
- (id)init;

@end

