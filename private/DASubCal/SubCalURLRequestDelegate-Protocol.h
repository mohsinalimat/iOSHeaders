//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DASubCal/NSObject-Protocol.h>

@class NSData, NSError, NSString, NSURL, NSURLAuthenticationChallenge, SubCalURLRequest;

@protocol SubCalURLRequestDelegate <NSObject>
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 finishedWithData:(NSData *)arg2 error:(NSError *)arg3;
- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forSubCalURLRequest:(SubCalURLRequest *)arg2;

@optional
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 didRedirectToURL:(NSURL *)arg2;
- (void)subCalURLRequestNeedsUsernameAndPasswordForHost:(NSString *)arg1 continuation:(void (^)(NSString *, NSString *))arg2;
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 updatedData:(NSData *)arg2;
@end

