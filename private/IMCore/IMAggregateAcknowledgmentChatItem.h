//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMAssociatedMessageChatItem.h>

@class IMMessageAcknowledgmentChatItem, NSArray;

@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem
{
    _Bool _latestIsFromMe;
    _Bool _includesMultiple;
    NSArray *_acknowledgments;
    IMMessageAcknowledgmentChatItem *_fromMeAcknowledgement;
    long long _latestAcknowledgmentType;
}

@property(readonly, nonatomic) long long latestAcknowledgmentType; // @synthesize latestAcknowledgmentType=_latestAcknowledgmentType;
@property(readonly, nonatomic) _Bool includesMultiple; // @synthesize includesMultiple=_includesMultiple;
@property(readonly, nonatomic) _Bool latestIsFromMe; // @synthesize latestIsFromMe=_latestIsFromMe;
@property(readonly, nonatomic) IMMessageAcknowledgmentChatItem *fromMeAcknowledgement; // @synthesize fromMeAcknowledgement=_fromMeAcknowledgement;
@property(readonly, copy, nonatomic) NSArray *acknowledgments; // @synthesize acknowledgments=_acknowledgments;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithAcknowledgments:(id)arg1;
@property(readonly, nonatomic) _Bool includesFromMe;

@end

