//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIRedeemResultsViewController.h>

#import <StoreKitUI/SUStorePageViewControllerResponder-Protocol.h>

@class NSString;

@interface SKUIRedeemWebResultsViewController : SKUIRedeemResultsViewController <SUStorePageViewControllerResponder>
{
}

+ (_Bool)canShowResultsForRedeem:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

