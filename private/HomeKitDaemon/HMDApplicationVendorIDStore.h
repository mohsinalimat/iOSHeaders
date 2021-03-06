//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding>
{
    NSMutableDictionary *_applicationVendorIdMapping;
    NSMutableDictionary *_applicationMachUUIDMapping;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping; // @synthesize applicationMachUUIDMapping=_applicationMachUUIDMapping;
@property(readonly, nonatomic) NSMutableDictionary *applicationVendorIdMapping; // @synthesize applicationVendorIdMapping=_applicationVendorIdMapping;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_machUUIDsForApplication:(id)arg1;
- (id)machUUIDsForApplication:(id)arg1;
- (void)_save;
- (void)removeVendorIDForApplicationBundleId:(id)arg1;
- (_Bool)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;
- (void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3;
- (void)addVendorIDData:(id)arg1 applicationBundleId:(id)arg2;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(_Bool)arg3;
- (void)_extractVendorIDForApplication:(id)arg1;
- (id)_vendorIDForApplication:(id)arg1;
- (id)vendorIDForApplication:(id)arg1;
- (void)checkCorrectness;
- (id)init;

@end

