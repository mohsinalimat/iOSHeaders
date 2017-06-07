//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying>
{
    GEOFormattedString *_continueStage;
    NSMutableArray *_executionStages;
    GEOFormattedString *_initialStage;
    GEOFormattedString *_preparationStage;
    GEOFormattedString *_proceedStage;
    unsigned int _shortChainedInstructionIndex;
    struct {
        unsigned int shortChainedInstructionIndex:1;
    } _has;
}

+ (Class)executionStageType;
@property(nonatomic) unsigned int shortChainedInstructionIndex; // @synthesize shortChainedInstructionIndex=_shortChainedInstructionIndex;
@property(retain, nonatomic) NSMutableArray *executionStages; // @synthesize executionStages=_executionStages;
@property(retain, nonatomic) GEOFormattedString *preparationStage; // @synthesize preparationStage=_preparationStage;
@property(retain, nonatomic) GEOFormattedString *initialStage; // @synthesize initialStage=_initialStage;
@property(retain, nonatomic) GEOFormattedString *continueStage; // @synthesize continueStage=_continueStage;
@property(retain, nonatomic) GEOFormattedString *proceedStage; // @synthesize proceedStage=_proceedStage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasShortChainedInstructionIndex;
- (id)executionStageAtIndex:(unsigned long long)arg1;
- (unsigned long long)executionStagesCount;
- (void)addExecutionStage:(id)arg1;
- (void)clearExecutionStages;
@property(readonly, nonatomic) _Bool hasPreparationStage;
@property(readonly, nonatomic) _Bool hasInitialStage;
@property(readonly, nonatomic) _Bool hasContinueStage;
@property(readonly, nonatomic) _Bool hasProceedStage;
- (void)dealloc;

@end

