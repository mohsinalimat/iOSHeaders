//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMSystemInfo : NSObject
{
}

+ (id)sharedInstance;
- (id)ownerAccount;
- (_Bool)hasSEP;
- (_Bool)isDeviceSecured;
- (_Bool)isInternalBuild;
- (id)btMacAddress;
- (id)wifiMacAddress;
- (id)ecid;
- (id)meid;
- (id)imei;
- (id)serialNumber;
- (id)deviceModelName;
- (id)deviceName;
- (id)osBuildVersion;
- (id)osVersion;
- (id)deviceUDID;
- (id)deviceClass;
- (id)productName;
- (id)productType;

@end

