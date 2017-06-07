//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecSearchResult.h>

#import <SafariShared/WBSParsecSearchMapsResultFeedbackSenderClient-Protocol.h>
#import <SafariShared/WBSParsecSearchResultPresentedInCard-Protocol.h>

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation, WBSParsecSearchMapsResultFeedbackSender;
@protocol WBSParsecSearchSession;

@interface WBSParsecSearchSimpleResult : WBSParsecSearchResult <WBSParsecSearchMapsResultFeedbackSenderClient, WBSParsecSearchResultPresentedInCard>
{
    WBSParsecImageRepresentation *_titleGlyph;
    NSArray *_moreIconRepresentations;
    _Bool _descriptionTextCanWrap;
    _Bool _hasSingleLineDescriptionAndTitle;
    WBSParsecSearchMapsResultFeedbackSender *_mapsFeedbackSender;
    id <WBSParsecSearchSession> _parsecSearchSession;
    NSNumber *_titleMaximumNumberOfLines;
    NSString *_descriptionLeadInText;
    NSNumber *_descriptionMaximumNumberOfLines;
    NSString *_footnote;
}

@property(readonly, nonatomic) _Bool hasSingleLineDescriptionAndTitle; // @synthesize hasSingleLineDescriptionAndTitle=_hasSingleLineDescriptionAndTitle;
@property(readonly, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(readonly, nonatomic) _Bool descriptionTextCanWrap; // @synthesize descriptionTextCanWrap=_descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines; // @synthesize descriptionMaximumNumberOfLines=_descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSString *descriptionLeadInText; // @synthesize descriptionLeadInText=_descriptionLeadInText;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines; // @synthesize titleMaximumNumberOfLines=_titleMaximumNumberOfLines;
@property(retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
@property(retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender; // @synthesize mapsFeedbackSender=_mapsFeedbackSender;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool willPresentResultInCard;
- (id)moreIconsWithSession:(id)arg1;
@property(readonly, nonatomic) _Bool hasMoreIcons;
- (id)titleGlyphWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

