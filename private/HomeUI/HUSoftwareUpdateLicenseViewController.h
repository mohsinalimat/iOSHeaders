//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSURL, WKWebView;

@interface HUSoftwareUpdateLicenseViewController : UIViewController
{
    NSURL *_url;
    CDUnknownBlockType _agreeHandler;
    CDUnknownBlockType _disagreeHandler;
    WKWebView *_webView;
}

@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType disagreeHandler; // @synthesize disagreeHandler=_disagreeHandler;
@property(copy, nonatomic) CDUnknownBlockType agreeHandler; // @synthesize agreeHandler=_agreeHandler;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)_disagreeToTerms:(id)arg1;
- (void)_agreeToTerms:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithURL:(id)arg1;

@end

