//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFRankingFeedback.h>

#import <CoreParsec/NSCopying-Protocol.h>
#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/SFProtobufObject-Protocol.h>

@class NSString, PBCodable;

@interface PARRankerFeedback : SFRankingFeedback <NSSecureCoding, NSCopying, SFProtobufObject>
{
    _Bool _didTimeOut;
    unsigned long long _resultsRanked;
    unsigned long long _rankingDurationMilliseconds;
}

+ (Class)protobufClass;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long rankingDurationMilliseconds; // @synthesize rankingDurationMilliseconds=_rankingDurationMilliseconds;
@property(nonatomic) unsigned long long resultsRanked; // @synthesize resultsRanked=_resultsRanked;
@property(nonatomic) _Bool didTimeOut; // @synthesize didTimeOut=_didTimeOut;
@property(readonly, nonatomic) PBCodable *protobufMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

