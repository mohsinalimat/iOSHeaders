//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBArticleScroll : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleSessionId;
    NSData *_articleViewingSessionId;
    NSData *_feedViewExposureId;
    NSString *_referencedArticleId;
    int _scrollHostViewType;
    NSString *_scrollVelocity;
    float _scrollingVelocity;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_verticalScrollPositionEnd;
    float _verticalScrollPositionEnding;
    NSString *_verticalScrollPositionStart;
    float _verticalScrollPositionStarting;
    _Bool _adSupportedChannel;
    struct {
        unsigned int scrollHostViewType:1;
        unsigned int scrollingVelocity:1;
        unsigned int verticalScrollPositionEnding:1;
        unsigned int verticalScrollPositionStarting:1;
        unsigned int adSupportedChannel:1;
    } _has;
}

@property(nonatomic) float scrollingVelocity; // @synthesize scrollingVelocity=_scrollingVelocity;
@property(nonatomic) float verticalScrollPositionEnding; // @synthesize verticalScrollPositionEnding=_verticalScrollPositionEnding;
@property(nonatomic) float verticalScrollPositionStarting; // @synthesize verticalScrollPositionStarting=_verticalScrollPositionStarting;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *scrollVelocity; // @synthesize scrollVelocity=_scrollVelocity;
@property(retain, nonatomic) NSString *verticalScrollPositionEnd; // @synthesize verticalScrollPositionEnd=_verticalScrollPositionEnd;
@property(retain, nonatomic) NSString *verticalScrollPositionStart; // @synthesize verticalScrollPositionStart=_verticalScrollPositionStart;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasScrollingVelocity;
@property(nonatomic) _Bool hasVerticalScrollPositionEnding;
@property(nonatomic) _Bool hasVerticalScrollPositionStarting;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(readonly, nonatomic) _Bool hasScrollVelocity;
@property(readonly, nonatomic) _Bool hasVerticalScrollPositionEnd;
@property(readonly, nonatomic) _Bool hasVerticalScrollPositionStart;
@property(nonatomic) _Bool hasScrollHostViewType;
@property(nonatomic) int scrollHostViewType; // @synthesize scrollHostViewType=_scrollHostViewType;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;

@end

