//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFSASLAuthenticator.h>

@interface _MFGmailClientTokenAuthenticator : MFSASLAuthenticator
{
    _Bool _sentResponse;
}

- (id)responseForServerData:(id)arg1;
- (_Bool)justSentPlainTextPassword;
- (_Bool)supportsInitialClientResponse;
- (id)saslName;

@end

