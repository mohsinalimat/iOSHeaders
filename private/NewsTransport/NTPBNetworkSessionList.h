//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable <NSCopying>
{
    NSMutableArray *_networkEvents;
    NSMutableArray *_networkSessions;
}

+ (Class)networkEventsType;
+ (Class)networkSessionsType;
@property(retain, nonatomic) NSMutableArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(retain, nonatomic) NSMutableArray *networkSessions; // @synthesize networkSessions=_networkSessions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)networkEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkEventsCount;
- (void)addNetworkEvents:(id)arg1;
- (void)clearNetworkEvents;
- (id)networkSessionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkSessionsCount;
- (void)addNetworkSessions:(id)arg1;
- (void)clearNetworkSessions;
- (void)dealloc;

@end

