//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral, NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : NSObject
{
    _Bool _notifyingCharacteristicUpdated;
    _Bool _monitorState;
    double _lastSeen;
    CBPeripheral *_peripheral;
    NSNumber *_statusFlags;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_categoryIdentifier;
    NSString *_identifier;
    unsigned long long _advertisementFormat;
    NSMutableDictionary *_cachedDescriptors;
    NSMapTable *_cachedCharacteristicSignatures;
    NSMapTable *_cachedServiceSignatures;
    unsigned long long _connectionPriority;
}

@property(nonatomic) unsigned long long connectionPriority; // @synthesize connectionPriority=_connectionPriority;
@property(nonatomic) _Bool monitorState; // @synthesize monitorState=_monitorState;
@property(readonly, nonatomic) NSMapTable *cachedServiceSignatures; // @synthesize cachedServiceSignatures=_cachedServiceSignatures;
@property(readonly, nonatomic) NSMapTable *cachedCharacteristicSignatures; // @synthesize cachedCharacteristicSignatures=_cachedCharacteristicSignatures;
@property(readonly, nonatomic) NSMutableDictionary *cachedDescriptors; // @synthesize cachedDescriptors=_cachedDescriptors;
@property(nonatomic) _Bool notifyingCharacteristicUpdated; // @synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated;
@property(nonatomic) unsigned long long advertisementFormat; // @synthesize advertisementFormat=_advertisementFormat;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(retain, nonatomic) NSNumber *statusFlags; // @synthesize statusFlags=_statusFlags;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(readonly, nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
- (void).cxx_destruct;
- (void)updatePairedPeripheralConfiguration:(_Bool)arg1 connectionPriority:(unsigned long long)arg2;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(unsigned long long)arg7;

@end

