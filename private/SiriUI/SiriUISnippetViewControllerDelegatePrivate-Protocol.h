//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSString, UIViewController;
@protocol SiriUIViewController;

@protocol SiriUISnippetViewControllerDelegatePrivate <NSObject>
- (void)cancelSpeakingForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 speakText:(NSString *)arg2 completion:(void (^)(void))arg3;
@end

