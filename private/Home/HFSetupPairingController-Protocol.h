//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFAccessoryBrowsingManager, HFDiscoveredAccessory, HMHome, NAFuture, NSString;
@protocol HFSetupPairingObserver;

@protocol HFSetupPairingController <NSObject>
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowser;
@property(readonly, nonatomic) _Bool hasFailedAccessories;
@property(readonly, nonatomic) NSString *statusText;
@property(readonly, nonatomic) unsigned long long phase;
@property(readonly, nonatomic) HMHome *home;
@property(retain, nonatomic) NSString *setupCode;
- (HFDiscoveredAccessory *)pairedDiscoveredAccessory;
- (NAFuture *)cancel;
- (void)startWithHome:(HMHome *)arg1;
- (void)removePairingObserver:(id <HFSetupPairingObserver>)arg1;
- (void)addPairingObserver:(id <HFSetupPairingObserver>)arg1;

@optional
@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@end

