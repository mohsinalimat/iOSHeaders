//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantUI/AFUISiriSessionDelegate-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesisDelegate-Protocol.h>
#import <AssistantUI/NSObject-Protocol.h>

@class AFUIRequestOptions, NSDictionary, NSString, NSValue;
@protocol AFUISiriSession, AFUISpeechSynthesis;

@protocol SVSSiriViewControllerServing <NSObject, AFUISiriSessionDelegate, AFUISpeechSynthesisDelegate>
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationWillEnterForeground;
- (void)hostApplicationWillResignActive;
- (void)didReceiveDismissalAction:(_Bool)arg1 delayForTTS:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)didReceiveShortTapAction;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)setSpeechSynthesis:(id <AFUISpeechSynthesis>)arg1;
- (void)setSession:(id <AFUISiriSession>)arg1;
- (void)userInteractionDidOccur;
- (void)siriKeyboardViewDidChange:(CDStruct_a82615c4 *)arg1;
- (void)startRequestForText:(NSString *)arg1;
- (void)siriDidHidePasscodeUnlock;
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriDidDeactivate;
- (void)showPresentationWithIdentifier:(NSString *)arg1 properties:(NSDictionary *)arg2 lockState:(unsigned long long)arg3;
- (void)preloadPresentationBundleWithIdentifier:(NSString *)arg1;
- (void)setRequestOptions:(AFUIRequestOptions *)arg1;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)setStatusBarFrameValue:(NSValue *)arg1;
- (void)setHostFrontMostAppOrientation:(long long)arg1;
@end

