//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudQuotaUI/ICQViewController.h>

@class _ICQUpgradeOfferPageSpecification;

@interface ICQUpgradeOfferViewController : ICQViewController
{
}

+ (_Bool)supportsPageClassIdentifier:(id)arg1;
- (void)cancel:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
@property(nonatomic, getter=isCancelEnabled) _Bool cancelEnabled;
- (id)initWithUpgradeOfferPageSpecification:(id)arg1;
- (id)initWithPageSpecification:(id)arg1;

@end

