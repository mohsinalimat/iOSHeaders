//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCHeadlineProviding-Protocol.h>

@class FCCoverArt, FCHeadlineThumbnail, FCSharedStringIndex, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSString, NSURL, NTPBFeedViewportHeadline;
@protocol FCChannelProviding;

@interface FCDeflatedHeadline : NSObject <FCHeadlineProviding>
{
    NTPBFeedViewportHeadline *_pbHeadline;
    FCSharedStringIndex *_sharedStrings;
}

@property(readonly, nonatomic) FCSharedStringIndex *sharedStrings; // @synthesize sharedStrings=_sharedStrings;
@property(readonly, nonatomic) NTPBFeedViewportHeadline *pbHeadline; // @synthesize pbHeadline=_pbHeadline;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canBePurchased;
@property(readonly, nonatomic) unsigned long long articleRecordModificationDateMilliseconds;
- (double)globalScore;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly, nonatomic) unsigned long long order;
@property(readonly, copy, nonatomic) NSString *feedID;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property(readonly, nonatomic) unsigned long long feedOrder;
@property(readonly, nonatomic) _Bool showSubscriptionRequiredText;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, nonatomic) unsigned long long articleContentType;
@property(readonly, nonatomic) _Bool hasGlobalUserFeedback;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
@property(readonly, nonatomic) _Bool needsRapidUpdates;
@property(readonly, nonatomic) FCCoverArt *coverArt;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs;
@property(readonly, copy, nonatomic) NSString *localDraftPath;
@property(readonly, nonatomic) _Bool isDraft;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories;
@property(readonly, nonatomic, getter=isSponsored) _Bool sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) NSURL *videoURL;
@property(readonly, copy, nonatomic) NSArray *endOfArticleTopicIDs;
@property(readonly, copy, nonatomic) NSArray *topicFlags;
@property(readonly, copy, nonatomic) NSArray *topicScores;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL;
@property(readonly, copy, nonatomic) NSString *accessoryText;
@property(readonly, copy, nonatomic) NSString *shortExcerpt;
- (id)thumbnailWidgetHQTagged;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ;
- (id)thumbnailWidgetTagged;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget;
- (id)thumbnailWidgetLQTagged;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnail;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ;
@property(readonly, nonatomic) struct CGSize largestThumbnailSize;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property(readonly, nonatomic) unsigned long long backendArticleVersion;
@property(readonly, nonatomic) unsigned long long publisherArticleVersion;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *referencedArticleID;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;
@property(readonly, copy, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) unsigned long long storyType;
@property(readonly, nonatomic) _Bool usesImageOnTopLayout;
@property(readonly, nonatomic) double tileProminenceScore;
@property(readonly, nonatomic, getter=isTopStory) _Bool topStory;
@property(readonly, copy, nonatomic) NSString *surfacedByBinID;
@property(readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property(readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property(readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;
- (_Bool)isGap;
@property(readonly, nonatomic) long long feedElementType;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBHeadline:(id)arg1 sharedStrings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

