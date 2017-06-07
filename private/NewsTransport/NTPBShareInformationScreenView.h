//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBShareInformationScreenView : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_errorCode;
    NSString *_errorMessage;
    NSString *_iadQtoken;
    int _paidSubscriptionConversionPointType;
    int _parentFeedType;
    int _resultType;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    int _userAction;
    _Bool _arrivedFromAd;
    _Bool _subscriptionOnlyArticlePreview;
    CDStruct_945473b1 _has;
}

@property(retain, nonatomic) NSString *iadQtoken; // @synthesize iadQtoken=_iadQtoken;
@property(nonatomic) _Bool arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property(nonatomic) _Bool subscriptionOnlyArticlePreview; // @synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIadQtoken;
@property(nonatomic) _Bool hasArrivedFromAd;
@property(nonatomic) _Bool hasSubscriptionOnlyArticlePreview;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasSectionId;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorMessage;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property(nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end

