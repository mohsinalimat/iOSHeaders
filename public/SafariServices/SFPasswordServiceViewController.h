//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFPasswordServiceViewControllerProtocol-Protocol.h>

@class NSString, WBUPasswordPickerViewController;

__attribute__((visibility("hidden")))
@interface SFPasswordServiceViewController : UIViewController <SFPasswordServiceViewControllerProtocol>
{
    WBUPasswordPickerViewController *_passwordPickerViewController;
    _Bool _presentInPopover;
    _Bool _hasAuthenticationForOtherPasswords;
    NSString *_applicationIdentifier;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_hintStringsForAppID:(id)arg1 appName:(id)arg2 credentials:(id)arg3;
- (void)gatherAndShowPasswords;
- (void)_willAppearInRemoteViewController;
- (void)_dismiss;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

