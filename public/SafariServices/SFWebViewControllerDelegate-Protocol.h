//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSError, NSURL, NSURLAuthenticationChallenge, SFWebViewController, UIViewController, WKBackForwardListItem, WKNavigation, WKNavigationAction, WKNavigationResponse, WKWebView, WKWebViewConfiguration, _WKActivatedElementInfo, _WKFrameHandle;

@protocol SFWebViewControllerDelegate <NSObject>
- (void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaInsets:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (UIViewController *)presentingViewControllerForWebViewController:(SFWebViewController *)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)webViewControllerDidChangeHasOnlySecureContent:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (UIViewController *)webViewController:(SFWebViewController *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidCrash:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 webViewDidClose:(WKWebView *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 completionHandler:(void (^)(WKWebView *))arg4;
- (void)webViewController:(SFWebViewController *)arg1 didEndNavigationGestureToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didSameDocumentNavigation:(WKNavigation *)arg2 ofType:(long long)arg3;
- (void)webViewControllerDidChangeURL:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 decidePolicyForNavigationResponse:(WKNavigationResponse *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)webViewController:(SFWebViewController *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewControllerDidChangeEstimatedProgress:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeLoadingState:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
@end

