//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXActionHandler.h>

#import <Silex/CNContactViewControllerDelegate-Protocol.h>
#import <Silex/MFMessageComposeViewControllerDelegate-Protocol.h>

@class NSString, UIAlertAction, UIViewController;

@interface SXCallActionHandler : SXActionHandler <MFMessageComposeViewControllerDelegate, CNContactViewControllerDelegate>
{
    UIAlertAction *_callAction;
    UIAlertAction *_facetimeAction;
    UIAlertAction *_messageAction;
    UIAlertAction *_addToContactsAction;
    UIAlertAction *_copyAction;
    UIViewController *_presentedModalViewController;
}

@property(retain, nonatomic) UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)copyToPasteboard;
- (void)addToContacts;
- (void)sendMessage;
- (void)makeFaceTimeCall;
- (void)makeCall;
- (void)dismissPresentedViewController;
- (_Bool)canMakeFacetimeAudioCalls;
- (_Bool)canMakeCalls;
@property(readonly, nonatomic) UIAlertAction *copyAction; // @synthesize copyAction=_copyAction;
@property(readonly, nonatomic) UIAlertAction *addToContactsAction; // @synthesize addToContactsAction=_addToContactsAction;
@property(readonly, nonatomic) UIAlertAction *messageAction; // @synthesize messageAction=_messageAction;
@property(readonly, nonatomic) UIAlertAction *facetimeAction; // @synthesize facetimeAction=_facetimeAction;
@property(readonly, nonatomic) UIAlertAction *callAction; // @synthesize callAction=_callAction;
- (long long)alertControllerStyle;
- (id)alertActions;
- (id)message;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

