//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying>
{
    unsigned int _evaluationOrder;
    int _limitKind;
    unsigned int _limitOrder;
    unsigned int _limitValue;
    NSData *_smartCriteria;
    _Bool _dynamic;
    _Bool _enabledItemsOnly;
    _Bool _filtered;
    _Bool _genius;
    _Bool _limited;
    _Bool _reverseLimitOrder;
    struct {
        unsigned int evaluationOrder:1;
        unsigned int limitKind:1;
        unsigned int limitOrder:1;
        unsigned int limitValue:1;
        unsigned int dynamic:1;
        unsigned int enabledItemsOnly:1;
        unsigned int filtered:1;
        unsigned int genius:1;
        unsigned int limited:1;
        unsigned int reverseLimitOrder:1;
    } _has;
}

@property(nonatomic) _Bool genius; // @synthesize genius=_genius;
@property(retain, nonatomic) NSData *smartCriteria; // @synthesize smartCriteria=_smartCriteria;
@property(nonatomic) _Bool reverseLimitOrder; // @synthesize reverseLimitOrder=_reverseLimitOrder;
@property(nonatomic) _Bool enabledItemsOnly; // @synthesize enabledItemsOnly=_enabledItemsOnly;
@property(nonatomic) unsigned int limitValue; // @synthesize limitValue=_limitValue;
@property(nonatomic) unsigned int limitOrder; // @synthesize limitOrder=_limitOrder;
@property(nonatomic) unsigned int evaluationOrder; // @synthesize evaluationOrder=_evaluationOrder;
@property(nonatomic) int limitKind; // @synthesize limitKind=_limitKind;
@property(nonatomic) _Bool limited; // @synthesize limited=_limited;
@property(nonatomic) _Bool filtered; // @synthesize filtered=_filtered;
@property(nonatomic) _Bool dynamic; // @synthesize dynamic=_dynamic;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasGenius;
@property(readonly, nonatomic) _Bool hasSmartCriteria;
@property(nonatomic) _Bool hasReverseLimitOrder;
@property(nonatomic) _Bool hasEnabledItemsOnly;
@property(nonatomic) _Bool hasLimitValue;
@property(nonatomic) _Bool hasLimitOrder;
@property(nonatomic) _Bool hasEvaluationOrder;
@property(nonatomic) _Bool hasLimitKind;
@property(nonatomic) _Bool hasLimited;
@property(nonatomic) _Bool hasFiltered;
@property(nonatomic) _Bool hasDynamic;

@end

