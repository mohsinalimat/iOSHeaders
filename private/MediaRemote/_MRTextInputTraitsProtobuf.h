//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying>
{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _pINEntrySeparatorIndexes;
    unsigned long long _validTextRangeLength;
    unsigned long long _validTextRangeLocation;
    int _autocapitalizationType;
    int _keyboardType;
    int _returnKeyType;
    _Bool _autocorrection;
    _Bool _enablesReturnKeyAutomatically;
    _Bool _secureTextEntry;
    _Bool _spellchecking;
    struct {
        unsigned int validTextRangeLength:1;
        unsigned int validTextRangeLocation:1;
        unsigned int autocapitalizationType:1;
        unsigned int keyboardType:1;
        unsigned int returnKeyType:1;
        unsigned int autocorrection:1;
        unsigned int enablesReturnKeyAutomatically:1;
        unsigned int secureTextEntry:1;
        unsigned int spellchecking:1;
    } _has;
}

@property(nonatomic) unsigned long long validTextRangeLength; // @synthesize validTextRangeLength=_validTextRangeLength;
@property(nonatomic) unsigned long long validTextRangeLocation; // @synthesize validTextRangeLocation=_validTextRangeLocation;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic) _Bool spellchecking; // @synthesize spellchecking=_spellchecking;
@property(nonatomic) _Bool autocorrection; // @synthesize autocorrection=_autocorrection;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPINEntrySeparatorIndexes:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)arg1;
- (void)addPINEntrySeparatorIndexes:(unsigned long long)arg1;
- (void)clearPINEntrySeparatorIndexes;
@property(readonly, nonatomic) unsigned long long *pINEntrySeparatorIndexes;
@property(readonly, nonatomic) unsigned long long pINEntrySeparatorIndexesCount;
@property(nonatomic) _Bool hasValidTextRangeLength;
@property(nonatomic) _Bool hasValidTextRangeLocation;
@property(nonatomic) _Bool hasSecureTextEntry;
@property(nonatomic) _Bool hasEnablesReturnKeyAutomatically;
@property(nonatomic) _Bool hasSpellchecking;
@property(nonatomic) _Bool hasAutocorrection;
- (int)StringAsReturnKeyType:(id)arg1;
- (id)returnKeyTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasReturnKeyType;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType=_returnKeyType;
- (int)StringAsKeyboardType:(id)arg1;
- (id)keyboardTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasKeyboardType;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
- (int)StringAsAutocapitalizationType:(id)arg1;
- (id)autocapitalizationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAutocapitalizationType;
@property(nonatomic) int autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
- (void)dealloc;

@end

