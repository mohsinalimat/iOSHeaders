//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAEmailVettingRequest.h>

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest
{
    NSString *_token;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)urlString;
- (id)initWithURLString:(id)arg1 account:(id)arg2 token:(id)arg3;
- (id)initWithAccount:(id)arg1 token:(id)arg2;

@end

