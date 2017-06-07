//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSError, NSHTTPURLResponse, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, NSURLSessionConfiguration, RUIActionSignal, RUILoader, RUIObjectModel;

@protocol RUILoaderDelegate <NSObject>

@optional
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(RUILoader *)arg1 didFailWithError:(NSError *)arg2;
- (NSURLSessionConfiguration *)sessionConfigurationForLoader:(RUILoader *)arg1;
- (NSURLRequest *)loader:(RUILoader *)arg1 willLoadRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)loader:(RUILoader *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)loader:(RUILoader *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (void)loader:(RUILoader *)arg1 didFinishLoadWithError:(NSError *)arg2;
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 topActionSignal:(RUIActionSignal *)arg3;
@end

