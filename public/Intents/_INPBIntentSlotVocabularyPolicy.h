//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_intentSlotNames;
    NSMutableArray *_intentSlotVocabularyConcepts;
}

+ (Class)intentSlotVocabularyConceptsType;
+ (Class)intentSlotNamesType;
@property(retain, nonatomic) NSMutableArray *intentSlotVocabularyConcepts; // @synthesize intentSlotVocabularyConcepts=_intentSlotVocabularyConcepts;
@property(retain, nonatomic) NSMutableArray *intentSlotNames; // @synthesize intentSlotNames=_intentSlotNames;
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
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyConceptsCount;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;
- (void)clearIntentSlotVocabularyConcepts;
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotNamesCount;
- (void)addIntentSlotNames:(id)arg1;
- (void)clearIntentSlotNames;

@end

