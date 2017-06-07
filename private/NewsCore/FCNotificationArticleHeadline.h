//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

@class FCAssetManager, FCCoverArt, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSDictionary, NSObject, NSString, NSURL;
@protocol FCChannelProviding;

@interface FCNotificationArticleHeadline : FCHeadline
{
    _Bool _hasThumbnail;
    _Bool _sponsored;
    _Bool _deleted;
    _Bool _isDraft;
    _Bool _featureCandidate;
    _Bool _needsRapidUpdates;
    _Bool _paid;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_title;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    unsigned long long _publisherArticleVersion;
    unsigned long long _backendArticleVersion;
    NSObject<FCChannelProviding> *_sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topicIDs;
    NSArray *_topicFlags;
    NSArray *_endOfArticleTopicIDs;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    FCAssetManager *_assetManager;
    NSDictionary *_articlePayload;
    NSString *_flintDocumentUrlString;
    NSArray *_flintFontResourceIDs;
    NSString *_changeEtag;
    struct CGSize _largestThumbnailSize;
    struct CGRect _thumbnailFocalFrame;
}

@property(retain, nonatomic) NSString *changeEtag; // @synthesize changeEtag=_changeEtag;
@property(retain, nonatomic) NSArray *flintFontResourceIDs; // @synthesize flintFontResourceIDs=_flintFontResourceIDs;
@property(retain, nonatomic) NSString *flintDocumentUrlString; // @synthesize flintDocumentUrlString=_flintDocumentUrlString;
@property(retain, nonatomic) NSDictionary *articlePayload; // @synthesize articlePayload=_articlePayload;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
- (id)coverArt;
- (_Bool)isPaid;
- (long long)minimumNewsVersion;
- (_Bool)needsRapidUpdates;
- (void)setStoryStyle:(id)arg1;
- (id)storyStyle;
- (void)setStoryType:(unsigned long long)arg1;
- (unsigned long long)storyType;
- (id)moreFromPublisherArticleIDs;
- (id)relatedArticleIDs;
- (_Bool)isFeatureCandidate;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (_Bool)isDraft;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDeleted;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (_Bool)isSponsored;
- (double)videoDuration;
- (id)videoURL;
- (id)endOfArticleTopicIDs;
- (id)topicFlags;
- (void)setTopicIDs:(id)arg1;
- (id)topicIDs;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)contentURL;
- (id)accessoryText;
- (void)setShortExcerpt:(id)arg1;
- (id)shortExcerpt;
- (id)thumbnailUltraHQ;
- (id)thumbnailHQ;
- (id)thumbnailMedium;
- (id)thumbnail;
- (id)thumbnailLQ;
- (struct CGSize)largestThumbnailSize;
- (_Bool)hasThumbnail;
- (void)setThumbnailFocalFrame:(struct CGRect)arg1;
- (struct CGRect)thumbnailFocalFrame;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (void)setSourceChannel:(id)arg1;
- (id)sourceChannel;
- (unsigned long long)backendArticleVersion;
- (unsigned long long)publisherArticleVersion;
- (void)setPublishDate:(id)arg1;
- (id)publishDate;
- (id)primaryAudience;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setContentType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (id)clusterID;
- (id)referencedArticleID;
- (void)setArticleID:(id)arg1;
- (id)articleID;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)versionIdentifier;
- (void).cxx_destruct;
- (id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (_Bool)isValid;
- (id)contentManifestWithContext:(id)arg1;
- (id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 rapidUpdatesTimeout:(long long)arg4;

@end
