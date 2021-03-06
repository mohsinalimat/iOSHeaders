//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/CRFeedbackListener-Protocol.h>

@class CRKCardSectionViewController, CRKCardViewController, CRNextCardCommand, CRPunchoutCommand, INIntent, UIViewController;
@protocol CRCard, CRReferentialCommand;

@protocol CRKCardViewControllerDelegate <CRFeedbackListener>

@optional
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (unsigned long long)navigationIndexOfCardViewController:(CRKCardViewController *)arg1;
- (_Bool)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (_Bool)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (_Bool)performReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (_Bool)canPerformReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (id <CRCard>)baseCardForCardViewController:(CRKCardViewController *)arg1;
- (struct CGSize)cardViewController:(CRKCardViewController *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(CRKCardViewController *)arg1 didFailToLoadCard:(id <CRCard>)arg2;
- (void)cardViewController:(CRKCardViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardViewControllerBoundsDidChange:(CRKCardViewController *)arg1;
- (void)cardViewControllerDidLoad:(CRKCardViewController *)arg1;
@end

