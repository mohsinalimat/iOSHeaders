//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCConnectionProtocol-Protocol.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCConnectionLegacy : NSObject <VCConnectionProtocol>
{
    unsigned int _type;
    int _priority;
    _Bool _waitToBeNominated;
    struct tagCONNRESULT *_connectionResult;
}

@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) struct tagCONNRESULT *connectionResult; // @synthesize connectionResult=_connectionResult;
@property _Bool waitToBeNominated; // @synthesize waitToBeNominated=_waitToBeNominated;
@property int priority; // @synthesize priority=_priority;
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
- (_Bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
@property(readonly) NSUUID *connectionUUID;
@property int cellularMTU;
@property int remoteCellTech;
@property int localCellTech;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) unsigned short relayChannelNumber;
@property(readonly) _Bool isReplaceOnly;
@property(readonly) _Bool isUpgraded;
@property(readonly) _Bool isVPN;
@property(readonly) int connectionId;
@property(readonly) _Bool isRelay;
@property(readonly) _Bool isIPv6;
@property(readonly) _Bool isRemoteOnCellular;
@property(readonly) _Bool isLocalOnCellular;
@property(readonly) _Bool isRemoteOnWiFi;
@property(readonly) _Bool isLocalOnWiFi;
- (_Bool)isSameAsConnection:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)ipportToString:(struct tagIPPORT *)arg1;
- (_Bool)isOnSameInterfacesWithConnection:(id)arg1;
- (_Bool)isOnSameIPPortWithConnection:(id)arg1;
- (_Bool)isRemoteIPPort:(struct tagIPPORT *)arg1;
- (_Bool)isLocalIPPort:(struct tagIPPORT *)arg1;
- (void)dealloc;
- (id)copy;
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR *)arg1;
- (id)initWithConnectionResult:(struct tagCONNRESULT *)arg1 type:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

