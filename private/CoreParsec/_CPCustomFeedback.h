//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCustomFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPCustomFeedback : PBCodable <_CPProcessableFeedback, _CPCustomFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int feedbackType:1;
    } _has;
    int _feedbackType;
    unsigned long long _timestamp;
    NSData *_jsonFeedback;
}

@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(copy, nonatomic) NSData *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasFeedbackType;
@property(readonly, nonatomic) _Bool hasJsonFeedback;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

