//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTUserConfiguration : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool _nonWifiFaceTimeEntitled;
@property(nonatomic) _Bool allowAnyNetwork;
@property(nonatomic) _Bool cellularFaceTimeEnabled;
- (_Bool)nonBluetoothAllowedForBundleId:(id)arg1;
- (_Bool)wifiAllowedForBundleId:(id)arg1;
- (_Bool)cellularDataEnabledForBundleId:(id)arg1;
- (_Bool)_adequateInternalOrCarrierInstall;
- (void)dealloc;
- (id)init;

@end

