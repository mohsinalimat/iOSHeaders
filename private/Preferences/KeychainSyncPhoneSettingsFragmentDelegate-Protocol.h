//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class KeychainSyncCountryInfo, KeychainSyncPhoneSettingsFragment, NSString;

@protocol KeychainSyncPhoneSettingsFragmentDelegate <NSObject>
- (void)phoneSettingsFragment:(KeychainSyncPhoneSettingsFragment *)arg1 didChangePhoneNumber:(NSString *)arg2 countryInfo:(KeychainSyncCountryInfo *)arg3;
@end
