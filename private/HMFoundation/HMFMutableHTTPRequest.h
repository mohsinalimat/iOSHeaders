//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest
{
}

- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
@property(copy, nonatomic) NSData *body; // @dynamic body;
- (id)responseWithStatusCode:(long long)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4;
- (id)initWithInternalRequest:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *headerFields; // @dynamic headerFields;
@property(nonatomic) double timeoutInterval; // @dynamic timeoutInterval;

@end

