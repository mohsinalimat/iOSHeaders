//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback;

@protocol _CPCardSectionFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasResultId;
@property(copy, nonatomic) NSString *resultId;
@property(readonly, nonatomic) _Bool hasCardSectionId;
@property(copy, nonatomic) NSString *cardSectionId;
@property(readonly, nonatomic) _Bool hasCardSection;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

