//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/IDSFaceTimeMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSData, NSNumber, NSString;

@interface IDSRelayUpdateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfPushToken;
    NSData *_selfRelayBlob;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSData *_relayConnectionID;
    NSData *_relayTransactionIDAlloc;
    NSData *_relayTokenAllocRes;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_selfRelayNATIP;
    NSNumber *_selfRelayNATPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayNATPort; // @synthesize selfRelayNATPort=_selfRelayNATPort;
@property(copy) NSData *selfRelayNATIP; // @synthesize selfRelayNATIP=_selfRelayNATIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayTokenAllocRes; // @synthesize relayTokenAllocRes=_relayTokenAllocRes;
@property(copy) NSData *relayTransactionIDAlloc; // @synthesize relayTransactionIDAlloc=_relayTransactionIDAlloc;
@property(copy) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
@property(copy) NSData *selfRelayBlob; // @synthesize selfRelayBlob=_selfRelayBlob;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
