//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class SKUIRedeem;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController
{
    SKUIRedeem *_redeem;
    long long _redeemCategory;
}

+ (id)redeemResultsControllerForRedeem:(id)arg1;
+ (_Bool)canShowResultsForRedeem:(id)arg1;
@property(nonatomic) long long redeemCategory; // @synthesize redeemCategory=_redeemCategory;
@property(retain, nonatomic) SKUIRedeem *redeem; // @synthesize redeem=_redeem;
- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRedeem:(id)arg1;

@end

