//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    unsigned long long _acceptedTermsVersion;
}

@property(nonatomic) unsigned long long acceptedTermsVersion; // @synthesize acceptedTermsVersion=_acceptedTermsVersion;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;

@end

