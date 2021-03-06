//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSString;

@interface IDSCellularLinkMonitor : NSObject
{
    _Bool _dataUsable;
    NSString *_dataIndicator;
    NSString *_cellularDataInterfaceName;
    unsigned long long _radioAccessTechnology;
    unsigned int _cellularMTU;
    NSHashTable *_cellularLinkDelegates;
    NSMutableDictionary *_notificationRegInfo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)registerCellularDataStatusNotification:(_Bool)arg1;
- (void)currentCellularSignalStrength:(int *)arg1 signalStrength:(int *)arg2 signalGrade:(int *)arg3;
- (void)updateProtocolQualityOfService:(_Bool)arg1 localAddress:(struct sockaddr *)arg2;
- (_Bool)dropIPPackets:(id)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3 isRelay:(_Bool)arg4;
- (_Bool)setPacketNotificationFilter:(struct sockaddr *)arg1 remote:(struct sockaddr *)arg2 uniqueTag:(unsigned int)arg3 callType:(unsigned char)arg4;
- (void)removePacketNotificationFilter;
@property(readonly) _Bool dataUsable; // @synthesize dataUsable=_dataUsable;
@property(readonly) unsigned int cellularMTU; // @synthesize cellularMTU=_cellularMTU;
@property(readonly) unsigned long long radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(readonly) NSString *cellularDataInterfaceName; // @synthesize cellularDataInterfaceName=_cellularDataInterfaceName;
- (void)reset;
- (void)_processCTServerNotification:(id)arg1 info:(id)arg2;
- (void)_unregisterCTNotification:(id)arg1;
- (void)_registerCTNotification:(id)arg1;
- (void)_updateDataStatus;
- (_Bool)_dataContextUsable:(id)arg1;
- (void)_updateCellularMTU;
- (_Bool)_updateRadioAccessTechnology;
- (void)_updateCellularDataInterface;
- (void)_setupCTServerConnection;
- (void)removeCellularLinkDelegate:(id)arg1;
- (void)addCellularLinkDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

