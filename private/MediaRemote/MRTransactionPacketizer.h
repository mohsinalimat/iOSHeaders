//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject
{
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}

- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isEmpty;
- (void)dealloc;

@end

