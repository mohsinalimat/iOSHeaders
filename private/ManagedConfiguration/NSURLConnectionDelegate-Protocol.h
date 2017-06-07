//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace;

@protocol NSURLConnectionDelegate <NSObject>

@optional
- (void)connection:(NSURLConnection *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(NSURLConnection *)arg1;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
@end

