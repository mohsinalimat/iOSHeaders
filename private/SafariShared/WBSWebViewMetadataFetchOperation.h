//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataFetchOperation.h>

#import <SafariShared/WKNavigationDelegate-Protocol.h>

@class NSString, WKWebView, WKWebViewConfiguration;
@protocol WBSWebViewMetadataFetchOperationDelegate;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate>
{
    id <WBSWebViewMetadataFetchOperationDelegate> _delegate;
    WKWebView *_webView;
}

@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WBSWebViewMetadataFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)didFailFetch;
- (void)willClearWebView;
- (void)didCreateWebView;
- (void)startOffscreenFetching;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)start;
- (void)clearWebView;
- (void)setUpWebViewIfNeeded;
@property(readonly, nonatomic) struct CGSize webViewSize;
@property(readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

