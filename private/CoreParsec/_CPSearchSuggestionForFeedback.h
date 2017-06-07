//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPSearchSuggestionForFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPSearchSuggestionForFeedback : PBCodable <_CPSearchSuggestionForFeedback, NSSecureCoding>
{
    struct {
        unsigned int score:1;
        unsigned int type:1;
    } _has;
    int _type;
    NSString *_identifier;
    NSString *_suggestion;
    NSString *_query;
    double _score;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasQuery;
@property(readonly, nonatomic) _Bool hasSuggestion;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
