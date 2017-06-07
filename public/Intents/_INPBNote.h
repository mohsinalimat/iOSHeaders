//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields, _INPBDateTime;

@interface _INPBNote : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_contents;
    _INPBDateTime *_createdDateTime;
    NSString *_groupName;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    NSString *_title;
}

+ (Class)contentType;
+ (id)options;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;
@property(readonly, nonatomic) _Bool hasGroupName;
- (id)contentAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentsCount;
- (void)addContent:(id)arg1;
- (void)clearContents;
@property(readonly, nonatomic) _Bool hasTitle;

@end
