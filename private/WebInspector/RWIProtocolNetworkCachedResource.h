//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *sourceMapURL;
@property(nonatomic) double bodySize;
@property(retain, nonatomic) RWIProtocolNetworkResponse *response;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3;

@end

