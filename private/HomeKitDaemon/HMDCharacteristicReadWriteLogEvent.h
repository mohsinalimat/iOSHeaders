//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HAPAccessory, HMDAccessory, NSArray, NSString, NSUUID;

@interface HMDCharacteristicReadWriteLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _isWriteOperation;
    _Bool _isLocal;
    NSArray *_characteristicsToRead;
    HAPAccessory *_hapAccessory;
    HMDAccessory *_hmdAccessory;
    NSUUID *_transactionId;
}

+ (id)characteristicWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 isLocal:(_Bool)arg4 transactionId:(id)arg5;
+ (id)characteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 isLocal:(_Bool)arg4 transactionId:(id)arg5;
+ (id)uuid;
@property(readonly, nonatomic) NSUUID *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) _Bool isWriteOperation; // @synthesize isWriteOperation=_isWriteOperation;
@property(readonly, nonatomic) __weak HMDAccessory *hmdAccessory; // @synthesize hmdAccessory=_hmdAccessory;
@property(readonly, nonatomic) __weak HAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(readonly, nonatomic) NSArray *characteristicsToRead; // @synthesize characteristicsToRead=_characteristicsToRead;
- (void).cxx_destruct;
- (id)initReadWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 isWriteOperation:(_Bool)arg4 isLocal:(_Bool)arg5 transactionId:(id)arg6;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

