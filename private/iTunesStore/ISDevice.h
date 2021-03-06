//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/ISSingleton-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton>
{
    unsigned long long _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (int)_deviceClass;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (void)resetLocationAndPrivacy;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)takePowerAssertion:(id)arg1;
@property(readonly) NSString *systemName;
@property(readonly) NSString *serialNumber;
- (_Bool)releasePowerAssertion:(id)arg1;
@property(readonly) NSString *hardwareName;
@property(readonly) NSString *guid;
@property(readonly) NSString *deviceName;
- (id)copyProtocolConditionalContext;
- (_Bool)checkCapabilities:(id)arg1 withMismatches:(id *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

