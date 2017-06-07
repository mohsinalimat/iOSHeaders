//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DAEASOAuthFramework/SL_OOPAuthFlowDelegate-Protocol.h>
#import <DAEASOAuthFramework/UIWebViewDelegate-Protocol.h>

@class NSString;

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate>
{
    CDUnknownBlockType _completion;
    unsigned long long _oauthType;
    NSString *_tokenRequestURI;
    NSString *_oauthURI;
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *oauthURI; // @synthesize oauthURI=_oauthURI;
@property(retain, nonatomic) NSString *tokenRequestURI; // @synthesize tokenRequestURI=_tokenRequestURI;
@property(nonatomic) unsigned long long oauthType; // @synthesize oauthType=_oauthType;
- (void).cxx_destruct;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(CDUnknownBlockType)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(CDUnknownBlockType)arg2;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(CDUnknownBlockType)arg1;
- (_Bool)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (id)requestForAuthURL:(id)arg1;
- (id)_accountDescription;
- (id)authURLForUsername:(id)arg1;
- (void)setAuthFlowCompletion:(CDUnknownBlockType)arg1;
- (id)initialRedirectURL;
- (id)initWithOAuthType:(unsigned long long)arg1 authURI:(id)arg2 username:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

