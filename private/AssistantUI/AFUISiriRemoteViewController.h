//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <AssistantUI/SVSSiriViewControllerHosting-Protocol.h>

@class AFApplicationInfo, NSString;
@protocol AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate;

@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting>
{
    id <AFUISiriRemoteViewControllerDataSource> _dataSource;
    id <AFUISiriRemoteViewControllerDelegate> _delegate;
    AFApplicationInfo *_viewServiceApplicationInfo;
}

+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(retain, nonatomic) AFApplicationInfo *viewServiceApplicationInfo; // @synthesize viewServiceApplicationInfo=_viewServiceApplicationInfo;
@property(nonatomic) __weak id <AFUISiriRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISiriRemoteViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)didReceiveShortTapAction;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)setSpeechSynthesis:(id)arg1;
- (void)setSession:(id)arg1;
- (void)userInteractionDidOccur;
- (void)setStatusBarFrame:(struct CGRect)arg1;
- (void)siriKeyboardViewDidChange:(CDStruct_a82615c4 *)arg1;
- (void)startRequestForText:(id)arg1;
- (void)siriDidHidePasscodeUnlock;
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriDidDeactivate;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3;
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonTap;
- (id)speechSynthesisDelegate;
- (id)sessionDelegate;
- (void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(_Bool)arg3;
- (void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(_Bool)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidEnterUITrackingMode;
- (void)serviceDidFinishTest:(id)arg1;
- (void)serviceWillStartTest:(id)arg1;
- (void)serviceDidEndTaptoEdit;
- (void)serviceWillBeginTapToEdit;
- (void)serviceDidResetTextInput;
- (void)serviceDidRequestKeyboard:(_Bool)arg1 minimized:(_Bool)arg2;
- (void)serviceDidRequestKeyboard:(_Bool)arg1;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)pulseHelpButton;
- (void)handlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)getScreenshotWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)setBugReportingAvailable:(_Bool)arg1;
- (void)setHelpButtonEmphasized:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)setStatusViewUserInteractionEnabled:(_Bool)arg1;
- (void)setStatusViewDisabled:(_Bool)arg1;
- (void)setCarDisplayGatekeeperVisible:(_Bool)arg1;
- (void)setCarDisplaySnippetVisible:(_Bool)arg1;
- (void)setStatusViewHidden:(_Bool)arg1;
- (void)siriIdleAndQuietStatusDidChange:(_Bool)arg1;
- (void)notifyOnNextUserInteraction;
- (void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceStartRequestWithOptions:(id)arg1;
- (void)serviceDidReadBulletinWithIdentifier:(id)arg1;
- (void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)serviceStartGuidedAccess;
- (void)serviceRequestsDismissal:(_Bool)arg1;
- (void)serviceRequestsActivationSourceWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

