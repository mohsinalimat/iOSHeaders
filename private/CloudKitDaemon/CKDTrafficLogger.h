//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDTrafficLogger : NSObject
{
    long long _sequenceNumber;
    NSString *_requestID;
}

@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void).cxx_destruct;
- (void)finishRequestLog;
- (void)logPartialResponseObjectData:(id)arg1;
- (void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2;
- (void)logPartialRequestObjectData:(id)arg1;
- (void)logResponse:(id)arg1;
- (void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3;
- (_Bool)shouldLog;
- (void)_logObject:(id)arg1 ofType:(unsigned long long)arg2;
- (id)initWithRequestID:(id)arg1;

@end

