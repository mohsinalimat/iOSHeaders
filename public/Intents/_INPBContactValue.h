//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields, _INPBContactHandle, _INPBImageValue, _INPBValueMetadata;

@interface _INPBContactValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_aliases;
    _INPBContactHandle *_contactHandle;
    NSString *_customIdentifier;
    NSString *_firstName;
    NSString *_fullName;
    _INPBImageValue *_image;
    NSString *_lastName;
    NSString *_nickName;
    NSString *_relationship;
    int _suggestionType;
    _INPBValueMetadata *_valueMetadata;
    _Bool _isMe;
    struct {
        unsigned int suggestionType:1;
        unsigned int isMe:1;
    } _has;
}

+ (Class)aliasesType;
+ (id)options;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSMutableArray *aliases; // @synthesize aliases=_aliases;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property(retain, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(retain, nonatomic) _INPBContactHandle *contactHandle; // @synthesize contactHandle=_contactHandle;
@property(retain, nonatomic) _INPBImageValue *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
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
@property(readonly, nonatomic) _Bool hasNickName;
- (id)aliasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aliasesCount;
- (void)addAliases:(id)arg1;
- (void)clearAliases;
- (int)StringAsSuggestionType:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSuggestionType;
@property(nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
@property(nonatomic) _Bool hasIsMe;
@property(readonly, nonatomic) _Bool hasRelationship;
@property(readonly, nonatomic) _Bool hasCustomIdentifier;
@property(readonly, nonatomic) _Bool hasContactHandle;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasFullName;
@property(readonly, nonatomic) _Bool hasLastName;
@property(readonly, nonatomic) _Bool hasFirstName;
@property(readonly, nonatomic) _Bool hasValueMetadata;

@end

