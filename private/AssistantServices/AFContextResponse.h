//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@class STSiriContext;

@interface AFContextResponse : AFSiriResponse
{
    STSiriContext *_context;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_context;
- (id)_initWithRequest:(id)arg1 context:(id)arg2;

@end

