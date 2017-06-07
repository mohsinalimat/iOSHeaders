//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBFeedViewport : PBCodable <NSCopying>
{
    unsigned long long _feedDBVersion;
    unsigned long long _version;
    NSMutableArray *_elements;
    NSString *_identifier;
    NSMutableArray *_sharedStrings;
    struct {
        unsigned int feedDBVersion:1;
        unsigned int version:1;
    } _has;
}

+ (Class)sharedStringsType;
+ (Class)elementsType;
@property(retain, nonatomic) NSMutableArray *sharedStrings; // @synthesize sharedStrings=_sharedStrings;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long feedDBVersion; // @synthesize feedDBVersion=_feedDBVersion;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)sharedStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sharedStringsCount;
- (void)addSharedStrings:(id)arg1;
- (void)clearSharedStrings;
- (id)elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementsCount;
- (void)addElements:(id)arg1;
- (void)clearElements;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasFeedDBVersion;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;

@end

