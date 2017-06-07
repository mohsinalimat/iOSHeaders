//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSError, NSMutableDictionary, NSString;

@interface ASAutodiscoverTask : ASTask
{
    NSString *_serverURL;
    NSString *_emailAddress;
    NSString *_redirectEmail;
    NSString *_authUsername;
    NSMutableDictionary *_accountInfo;
    NSError *_discoveryError;
}

- (void).cxx_destruct;
- (_Bool)shouldLogIncomingData;
- (_Bool)requiresEASVersionInformaton;
- (void)finishWithError:(id)arg1;
- (_Bool)shouldStallAfterConnectionLost;
- (_Bool)shouldHandlePasswordErrors;
- (void)didProcessContext:(id)arg1;
- (void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1;
- (void)_handleUserNode:(struct _xmlNode *)arg1;
- (void)_handleActionNode:(struct _xmlNode *)arg1;
- (void)_handleErrorNode:(struct _xmlNode *)arg1;
- (void)_handleServerNode:(struct _xmlNode *)arg1;
- (id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2;
- (_Bool)processContext:(id)arg1;
- (id)requestBody;
- (_Bool)_shouldRedirectToHTTPForRequest:(id)arg1;
- (void)_addAuthToRequest:(id)arg1;
- (_Bool)_shouldSendAuthForRequest:(id)arg1;
- (id)_HTTPMethodForRequest:(id)arg1;
- (id)contentType;
- (id)_policyKey;
- (id)_easVersion;
- (id)_url;
- (double)timeoutInterval;
- (id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3;

@end
