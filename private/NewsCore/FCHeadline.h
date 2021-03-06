//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedElement-Protocol.h>
#import <NewsCore/FCHeadlineProviding-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort, FCCoverArt, FCFeedPersonalizedArticleScoreProfile, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSString, NSURL;
@protocol FCChannelProviding, FCNativeAdProviding;

@interface FCHeadline : NSObject <FCHeadlineProviding, FCFeedElement>
{
    _Bool _hasThumbnail;
    _Bool _featureCandidate;
    _Bool _sponsored;
    _Bool _deleted;
    _Bool _isDraft;
    _Bool _usesImageOnTopLayout;
    _Bool _needsRapidUpdates;
    _Bool _paid;
    _Bool _showSubscriptionRequiredText;
    _Bool _canBePurchased;
    _Bool _displayAsNativeAd;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_title;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    NSString *_primaryAudience;
    NSString *_shortExcerpt;
    NSArray *_topics;
    NSArray *_topicIDs;
    NSArray *_endOfArticleTopicIDs;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    NSObject<FCChannelProviding> *_sourceChannel;
    NSString *_sourceName;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    unsigned long long _contentType;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSString *_surfacedBySectionID;
    NSString *_surfacedByChannelID;
    NSString *_surfacedByTopicID;
    NSString *_surfacedByBinID;
    NSString *_accessoryText;
    NSString *_localDraftPath;
    FCFeedPersonalizedArticleScoreProfile *_scoreProfile;
    double _personalizedScore;
    unsigned long long _topStoryType;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    unsigned long long _feedOrder;
    double _globalUserFeedback;
    NSDate *_displayDate;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *_globalCohort;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *_publisherCohort;
    NSString *_identifier;
    NSURL *_headlineURL;
    NSString *_sponsoredBy;
    id <FCNativeAdProviding> _associatedAd;
    NSString *_excerpt;
    struct CGRect _thumbnailFocalFrame;
}

@property(copy, nonatomic) NSString *excerpt; // @synthesize excerpt=_excerpt;
@property(nonatomic) struct CGRect thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(retain, nonatomic) id <FCNativeAdProviding> associatedAd; // @synthesize associatedAd=_associatedAd;
@property(copy, nonatomic) NSString *sponsoredBy; // @synthesize sponsoredBy=_sponsoredBy;
@property(nonatomic, getter=isDisplayingAsNativeAd) _Bool displayAsNativeAd; // @synthesize displayAsNativeAd=_displayAsNativeAd;
@property(copy, nonatomic) NSURL *headlineURL; // @synthesize headlineURL=_headlineURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *publisherCohort; // @synthesize publisherCohort=_publisherCohort;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *globalCohort; // @synthesize globalCohort=_globalCohort;
@property(copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(readonly, nonatomic) _Bool canBePurchased; // @synthesize canBePurchased=_canBePurchased;
@property(nonatomic) double globalUserFeedback; // @synthesize globalUserFeedback=_globalUserFeedback;
@property(nonatomic) unsigned long long feedOrder; // @synthesize feedOrder=_feedOrder;
@property(nonatomic) _Bool showSubscriptionRequiredText; // @synthesize showSubscriptionRequiredText=_showSubscriptionRequiredText;
@property(readonly, nonatomic) FCCoverArt *coverArt; // @synthesize coverArt=_coverArt;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) _Bool needsRapidUpdates; // @synthesize needsRapidUpdates=_needsRapidUpdates;
@property(retain, nonatomic) FCTopStoriesStyleConfiguration *storyStyle; // @synthesize storyStyle=_storyStyle;
@property(nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(nonatomic) unsigned long long topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) _Bool usesImageOnTopLayout; // @synthesize usesImageOnTopLayout=_usesImageOnTopLayout;
@property(nonatomic) double tileProminenceScore; // @synthesize tileProminenceScore=_personalizedScore;
@property(retain, nonatomic) FCFeedPersonalizedArticleScoreProfile *scoreProfile; // @synthesize scoreProfile=_scoreProfile;
@property(readonly, copy, nonatomic) NSString *localDraftPath; // @synthesize localDraftPath=_localDraftPath;
@property(readonly, copy, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(copy, nonatomic) NSString *surfacedByBinID; // @synthesize surfacedByBinID=_surfacedByBinID;
@property(copy, nonatomic) NSString *surfacedByTopicID; // @synthesize surfacedByTopicID=_surfacedByTopicID;
@property(copy, nonatomic) NSString *surfacedByChannelID; // @synthesize surfacedByChannelID=_surfacedByChannelID;
@property(copy, nonatomic) NSString *surfacedBySectionID; // @synthesize surfacedBySectionID=_surfacedBySectionID;
@property(readonly, nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(nonatomic, getter=isSponsored) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate; // @synthesize featureCandidate=_featureCandidate;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(readonly, nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(readonly, nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, copy, nonatomic) NSArray *endOfArticleTopicIDs; // @synthesize endOfArticleTopicIDs=_endOfArticleTopicIDs;
@property(copy, nonatomic) NSArray *topicIDs; // @synthesize topicIDs=_topicIDs;
@property(readonly, copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, copy, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ; // @synthesize thumbnailWidgetHQ=_thumbnailWidgetHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget; // @synthesize thumbnailWidget=_thumbnailWidget;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ; // @synthesize thumbnailWidgetLQ=_thumbnailWidgetLQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ; // @synthesize thumbnailUltraHQ=_thumbnailUltraHQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailHQ; // @synthesize thumbnailHQ=_thumbnailHQ;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailMedium; // @synthesize thumbnailMedium=_thumbnailMedium;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) FCHeadlineThumbnail *thumbnailLQ; // @synthesize thumbnailLQ=_thumbnailLQ;
@property(nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
- (void).cxx_destruct;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly, copy, nonatomic) NSString *feedID;
@property(readonly, nonatomic) unsigned long long order;
@property(readonly, nonatomic) unsigned long long articleContentType;
@property(readonly, nonatomic) _Bool hasGlobalUserFeedback;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
@property(readonly, nonatomic) _Bool isTopStory;
- (void)applyHeadlineMetadata:(id)arg1 appConfig:(id)arg2;
- (void)assignStoryType:(unsigned long long)arg1 withAppConfig:(id)arg2;
- (void)overrideDisplayDate:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
- (_Bool)isGap;
@property(readonly, nonatomic) long long feedElementType;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contentManifestWithContext:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

