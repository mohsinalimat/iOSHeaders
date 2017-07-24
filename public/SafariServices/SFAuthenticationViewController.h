//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/SFSafariViewController.h>

#import <SafariServices/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, _UIFallbackPresentationViewController;

__attribute__((visibility("hidden")))
@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate>
{
    _UIFallbackPresentationViewController *_fallbackPresentationViewController;
    CDUnknownBlockType _dismissCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (void).cxx_destruct;
- (void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(_Bool)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentViewController;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

