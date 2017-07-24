//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/UIWebViewDelegate-Protocol.h>

@class NSString, NSURL, PKPaymentProvisioningController, UIWebView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCardIneligibleViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    CDUnknownBlockType _preflightCompletion;
    _Bool _preloadLearnMoreWebView;
    long long _reason;
    long long _context;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningController *_provisioningController;
    NSURL *_learnMoreURL;
    CDUnknownBlockType _learnMorePresentationHandler;
    CDUnknownBlockType _continueActionHandler;
}

@property _Bool preloadLearnMoreWebView; // @synthesize preloadLearnMoreWebView=_preloadLearnMoreWebView;
@property(copy, nonatomic) CDUnknownBlockType continueActionHandler; // @synthesize continueActionHandler=_continueActionHandler;
@property(copy, nonatomic) CDUnknownBlockType learnMorePresentationHandler; // @synthesize learnMorePresentationHandler=_learnMorePresentationHandler;
@property(retain, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)handleDone:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_webViewDidLoad:(_Bool)arg1 withError:(id)arg2;
- (id)_alertWithReason:(long long)arg1 learnMoreURL:(id)arg2 isPreloaded:(_Bool)arg3;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)webView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithReason:(long long)arg1 context:(long long)arg2 setupDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

