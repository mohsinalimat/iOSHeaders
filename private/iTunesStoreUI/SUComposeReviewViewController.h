//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <iTunesStoreUI/SKComposeReviewDelegate-Protocol.h>

@class NSString, NSURL, SKComposeReviewViewController;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate>
{
    NSURL *_compositionURL;
    SKComposeReviewViewController *_remoteViewController;
}

@property(readonly, nonatomic) NSURL *compositionURL; // @synthesize compositionURL=_compositionURL;
- (void)_showRemoteView;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (void)loadView;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)initWithCompositionURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

