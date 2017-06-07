//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryDelegate-Protocol.h>

@class HAPRelayAccessory, NSData, NSError, NSString;

@protocol HAPRelayAccessoryDelegate <HAPAccessoryDelegate>
- (void)accessory:(HAPRelayAccessory *)arg1 didPairRelayWithError:(NSError *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didActivateRelayWithError:(NSError *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateRelayState:(unsigned long long)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateRelayEnabled:(_Bool)arg2;

@optional
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateAccessoryAccessToken:(NSData *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateAccessoryIdentifier:(NSString *)arg2;
@end

