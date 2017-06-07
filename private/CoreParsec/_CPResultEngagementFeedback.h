//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSString, _CPSearchResultForFeedback;

@interface _CPResultEngagementFeedback : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _actionTarget;
    int _destination;
    _CPSearchResultForFeedback *_result;
    NSString *_titleTextForResultEngagement;
    int _triggerEvent;
    _Bool _actionEngaged;
    _Bool _resultHadTitle;
    struct {
        unsigned int actionTarget:1;
        unsigned int destination:1;
        unsigned int triggerEvent:1;
        unsigned int actionEngaged:1;
        unsigned int resultHadTitle:1;
    } _has;
}

@property(nonatomic) _Bool resultHadTitle; // @synthesize resultHadTitle=_resultHadTitle;
@property(retain, nonatomic) NSString *titleTextForResultEngagement; // @synthesize titleTextForResultEngagement=_titleTextForResultEngagement;
@property(retain, nonatomic) _CPSearchResultForFeedback *result; // @synthesize result=_result;
@property(nonatomic) _Bool actionEngaged; // @synthesize actionEngaged=_actionEngaged;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasResultHadTitle;
@property(readonly, nonatomic) _Bool hasTitleTextForResultEngagement;
@property(readonly, nonatomic) _Bool hasResult;
- (int)StringAsActionTarget:(id)arg1;
- (id)actionTargetAsString:(int)arg1;
@property(nonatomic) _Bool hasActionTarget;
@property(nonatomic) int actionTarget; // @synthesize actionTarget=_actionTarget;
- (int)StringAsDestination:(id)arg1;
- (id)destinationAsString:(int)arg1;
@property(nonatomic) _Bool hasDestination;
@property(nonatomic) int destination; // @synthesize destination=_destination;
- (int)StringAsTriggerEvent:(id)arg1;
- (id)triggerEventAsString:(int)arg1;
@property(nonatomic) _Bool hasTriggerEvent;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(nonatomic) _Bool hasActionEngaged;

@end

