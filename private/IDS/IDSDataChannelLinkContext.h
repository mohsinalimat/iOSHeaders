//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSUUID, _IDSDataChannelLinkContext;

@interface IDSDataChannelLinkContext : NSObject
{
    _IDSDataChannelLinkContext *_internal;
}

- (void).cxx_destruct;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setMTU:(unsigned short)arg1;
- (void)setRATType:(unsigned long long)arg1;
@property(readonly) NSData *relaySessionKey;
@property(readonly) NSData *relaySessionToken;
@property(readonly) long long relayServerProvider;
@property(readonly) unsigned long long remoteRATType;
@property(readonly) long long remoteConnectionType;
@property(readonly) unsigned char remoteNetworkType;
@property(readonly) unsigned int maxBitrate;
@property(readonly) unsigned short maxMTU;
@property(readonly) unsigned long long RATType;
@property(readonly) long long connectionType;
@property(readonly) unsigned char networkType;
@property(readonly) unsigned char flags;
@property(readonly) NSUUID *linkUUID;
@property(readonly) BOOL linkID;
- (id)description;
- (id)initWithLinkID:(BOOL)arg1 linkUUID:(id)arg2 flags:(unsigned char)arg3 networkType:(unsigned char)arg4 connectionType:(long long)arg5 RATType:(unsigned long long)arg6 MTU:(unsigned short)arg7 remoteNetworkType:(unsigned char)arg8 remoteConnectionType:(long long)arg9 remoteRATType:(unsigned long long)arg10 maxBitrate:(unsigned int)arg11 relayServerProvider:(long long)arg12 relaySessionToken:(id)arg13 relaySessionKey:(id)arg14;
- (id)initWithDummyInformation;

@end

