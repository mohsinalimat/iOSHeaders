//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView;
@protocol SFSharingExtensionWebProcessController;

@interface _SFSafariSharingExtensionController : NSObject
{
    WKWebView *_webView;
    id <SFSharingExtensionWebProcessController> _extensionControllerProxy;
}

- (void).cxx_destruct;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (void)runJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_extensionControllerProxy;
- (id)initWithWebView:(id)arg1;

@end

