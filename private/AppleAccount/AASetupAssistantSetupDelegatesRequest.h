//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AASigningSession, ACAccount, NSDictionary;

@interface AASetupAssistantSetupDelegatesRequest : AARequest
{
    NSDictionary *setupParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 withSetupParameters:(id)arg2 signingSession:(id)arg3;

@end
