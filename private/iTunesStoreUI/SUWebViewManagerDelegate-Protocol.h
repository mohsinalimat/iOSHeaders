//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSError, NSHTTPURLResponse, NSString, NSURLRequest, SUScriptInterface, SUViewController, SUWebViewManager;

@protocol SUWebViewManagerDelegate <NSObject>

@optional
- (void)webViewManager:(SUWebViewManager *)arg1 webDocumentViewDidSetFrame:(struct CGRect)arg2;
- (void)webViewManagerDidStartLoad:(SUWebViewManager *)arg1;
- (void)webViewManagerDidFinishLoad:(SUWebViewManager *)arg1;
- (void)webViewManager:(SUWebViewManager *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 willInjectScriptInterface:(SUScriptInterface *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didReceivePrimaryResponse:(NSHTTPURLResponse *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didRejectInvalidRequest:(NSURLRequest *)arg2;
- (void)webViewManager:(SUWebViewManager *)arg1 didReceiveTitle:(NSString *)arg2;
- (SUViewController *)viewControllerForWebViewManager:(SUWebViewManager *)arg1;
- (SUScriptInterface *)newScriptInterfaceForWebViewManager:(SUWebViewManager *)arg1;
@end

