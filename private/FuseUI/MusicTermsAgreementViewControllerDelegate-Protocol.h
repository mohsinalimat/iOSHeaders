//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicTermsAgreementViewController, NSString;

@protocol MusicTermsAgreementViewControllerDelegate <NSObject>

@optional
- (void)termsAgreementViewController:(MusicTermsAgreementViewController *)arg1 didRequestSendByEmailToEmailAddress:(NSString *)arg2;
- (void)termsAgreementViewControllerDidCancel:(MusicTermsAgreementViewController *)arg1;
- (void)termsAgreementViewControllerDidAcceptTerms:(MusicTermsAgreementViewController *)arg1;
@end

