//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCardSectionValue-Protocol.h>

@class NSData, NSDictionary, NSString, SFActivityIndicatorCardSection, SFAppLinkCardSection, SFAudioPlaybackCardSection, SFDescriptionCardSection, SFDetailedRowCardSection, SFFlightCardSection, SFImagesCardSection, SFKeyValueDataCardSection, SFMapCardSection, SFMediaInfoCardSection, SFMediaPlayerCardSection, SFMessageCardSection, SFMetaInfoCardSection, SFNowPlayingCardSection, SFRichTitleCardSection, SFRowCardSection, SFScoreboardCardSection, SFSectionHeaderCardSection, SFSelectableGridCardSection, SFSocialMediaPostCardSection, SFStockChartCardSection, SFSuggestionCardSection, SFTableHeaderRowCardSection, SFTableRowCardSection, SFTextColumnsCardSection, SFTitleCardSection, SFTrackListCardSection, SFWebCardSection;

@interface SFCardSectionValue : NSObject <SFCardSectionValue, NSSecureCoding, NSCopying>
{
    SFAppLinkCardSection *_appLinkCardSection;
    SFDescriptionCardSection *_descriptionCardSection;
    SFKeyValueDataCardSection *_keyValueDataCardSection;
    SFMapCardSection *_mapCardSection;
    SFMediaInfoCardSection *_mediaInfoCardSection;
    SFMediaPlayerCardSection *_mediaPlayerCardSection;
    SFNowPlayingCardSection *_nowPlayingCardSection;
    SFRichTitleCardSection *_richTitleCardSection;
    SFRowCardSection *_rowCardSection;
    SFScoreboardCardSection *_scoreboardCardSection;
    SFSocialMediaPostCardSection *_socialMediaPostCardSection;
    SFStockChartCardSection *_stockChartCardSection;
    SFTableHeaderRowCardSection *_tableHeaderRowCardSection;
    SFTableRowCardSection *_tableRowCardSection;
    SFTextColumnsCardSection *_textColumnsCardSection;
    SFTitleCardSection *_titleCardSection;
    SFTrackListCardSection *_trackListCardSection;
    SFAudioPlaybackCardSection *_audioPlaybackCardSection;
    SFFlightCardSection *_flightCardSection;
    SFActivityIndicatorCardSection *_activityIndicatorCardSection;
    SFWebCardSection *_webCardSection;
    SFMessageCardSection *_messageCardSection;
    SFDetailedRowCardSection *_detailedRowCardSection;
    SFImagesCardSection *_imagesCardSection;
    SFSuggestionCardSection *_suggestionCardSection;
    SFSelectableGridCardSection *_selectableGridCardSection;
    SFSectionHeaderCardSection *_sectionHeaderCardSection;
    SFMetaInfoCardSection *_metaInfoCardSection;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFMetaInfoCardSection *metaInfoCardSection; // @synthesize metaInfoCardSection=_metaInfoCardSection;
@property(retain, nonatomic) SFSectionHeaderCardSection *sectionHeaderCardSection; // @synthesize sectionHeaderCardSection=_sectionHeaderCardSection;
@property(retain, nonatomic) SFSelectableGridCardSection *selectableGridCardSection; // @synthesize selectableGridCardSection=_selectableGridCardSection;
@property(retain, nonatomic) SFSuggestionCardSection *suggestionCardSection; // @synthesize suggestionCardSection=_suggestionCardSection;
@property(retain, nonatomic) SFImagesCardSection *imagesCardSection; // @synthesize imagesCardSection=_imagesCardSection;
@property(retain, nonatomic) SFDetailedRowCardSection *detailedRowCardSection; // @synthesize detailedRowCardSection=_detailedRowCardSection;
@property(retain, nonatomic) SFMessageCardSection *messageCardSection; // @synthesize messageCardSection=_messageCardSection;
@property(retain, nonatomic) SFWebCardSection *webCardSection; // @synthesize webCardSection=_webCardSection;
@property(retain, nonatomic) SFActivityIndicatorCardSection *activityIndicatorCardSection; // @synthesize activityIndicatorCardSection=_activityIndicatorCardSection;
@property(retain, nonatomic) SFFlightCardSection *flightCardSection; // @synthesize flightCardSection=_flightCardSection;
@property(retain, nonatomic) SFAudioPlaybackCardSection *audioPlaybackCardSection; // @synthesize audioPlaybackCardSection=_audioPlaybackCardSection;
@property(retain, nonatomic) SFTrackListCardSection *trackListCardSection; // @synthesize trackListCardSection=_trackListCardSection;
@property(retain, nonatomic) SFTitleCardSection *titleCardSection; // @synthesize titleCardSection=_titleCardSection;
@property(retain, nonatomic) SFTextColumnsCardSection *textColumnsCardSection; // @synthesize textColumnsCardSection=_textColumnsCardSection;
@property(retain, nonatomic) SFTableRowCardSection *tableRowCardSection; // @synthesize tableRowCardSection=_tableRowCardSection;
@property(retain, nonatomic) SFTableHeaderRowCardSection *tableHeaderRowCardSection; // @synthesize tableHeaderRowCardSection=_tableHeaderRowCardSection;
@property(retain, nonatomic) SFStockChartCardSection *stockChartCardSection; // @synthesize stockChartCardSection=_stockChartCardSection;
@property(retain, nonatomic) SFSocialMediaPostCardSection *socialMediaPostCardSection; // @synthesize socialMediaPostCardSection=_socialMediaPostCardSection;
@property(retain, nonatomic) SFScoreboardCardSection *scoreboardCardSection; // @synthesize scoreboardCardSection=_scoreboardCardSection;
@property(retain, nonatomic) SFRowCardSection *rowCardSection; // @synthesize rowCardSection=_rowCardSection;
@property(retain, nonatomic) SFRichTitleCardSection *richTitleCardSection; // @synthesize richTitleCardSection=_richTitleCardSection;
@property(retain, nonatomic) SFNowPlayingCardSection *nowPlayingCardSection; // @synthesize nowPlayingCardSection=_nowPlayingCardSection;
@property(retain, nonatomic) SFMediaPlayerCardSection *mediaPlayerCardSection; // @synthesize mediaPlayerCardSection=_mediaPlayerCardSection;
@property(retain, nonatomic) SFMediaInfoCardSection *mediaInfoCardSection; // @synthesize mediaInfoCardSection=_mediaInfoCardSection;
@property(retain, nonatomic) SFMapCardSection *mapCardSection; // @synthesize mapCardSection=_mapCardSection;
@property(retain, nonatomic) SFKeyValueDataCardSection *keyValueDataCardSection; // @synthesize keyValueDataCardSection=_keyValueDataCardSection;
@property(retain, nonatomic) SFDescriptionCardSection *descriptionCardSection; // @synthesize descriptionCardSection=_descriptionCardSection;
@property(retain, nonatomic) SFAppLinkCardSection *appLinkCardSection; // @synthesize appLinkCardSection=_appLinkCardSection;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

