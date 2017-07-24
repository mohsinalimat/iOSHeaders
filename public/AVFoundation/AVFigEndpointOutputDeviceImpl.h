//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputDeviceImpl-Protocol.h>

@class AVOutputDevice, AVWeakReference, NSArray, NSData, NSNumber, NSString;

@interface AVFigEndpointOutputDeviceImpl : NSObject <AVOutputDeviceImpl>
{
    AVOutputDevice *_parentDevice;
    AVWeakReference *_weakObserver;
    struct OpaqueFigEndpoint *_figEndpoint;
}

+ (void)initialize;
@property __weak AVOutputDevice *parentOutputDevice; // @synthesize parentOutputDevice=_parentDevice;
- (void).cxx_destruct;
- (void)setAdministrativeConfiguration:(id)arg1 administrationPassword:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool groupContainsGroupLeader;
@property(readonly, nonatomic) _Bool isGroupLeader;
@property(readonly, nonatomic) _Bool canBeGroupLeader;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool canBeGrouped;
- (void)setVolume:(float)arg1;
- (void)_canSetEndpointVolumeDidChangeForEndpointWithID:(struct __CFString *)arg1;
@property(readonly) _Bool canSetVolume;
- (void)_volumeDidChangeForEndpointWithID:(struct __CFString *)arg1;
@property(readonly) float volume;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets;
@property(readonly, nonatomic) _Bool requiresAuthorization;
@property(readonly, nonatomic) unsigned long long deviceFeatures;
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property(readonly, nonatomic, getter=isInUseByPairedDevice) _Bool inUseByPairedDevice;
- (struct OpaqueFigEndpoint *)figEndpoint;
@property(readonly, nonatomic) NSNumber *rightBatteryLevel;
@property(readonly, nonatomic) NSNumber *leftBatteryLevel;
@property(readonly, nonatomic) NSNumber *caseBatteryLevel;
@property(readonly, nonatomic) NSNumber *batteryLevel;
@property(readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property(readonly, copy, nonatomic) NSString *modelID;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, copy, nonatomic) NSString *ID;
@property(readonly, copy, nonatomic) NSString *name;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

