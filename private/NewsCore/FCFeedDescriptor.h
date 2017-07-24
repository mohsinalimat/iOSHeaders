//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedAdMetadataProviding-Protocol.h>
#import <NewsCore/FCFeedHeadlineSource-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@class NSArray, NSString;
@protocol FCContentContext, FCFeedPaginating, FCFeedTheming, FCTagProviding;

@interface FCFeedDescriptor : NSObject <NSCopying, FCFeedHeadlineSource, FCFeedAdMetadataProviding>
{
    long long _feedType;
    NSString *_identifier;
    id <FCContentContext> _context;
    NSArray *_otherArticleIDs;
}

@property(retain, nonatomic) NSArray *otherArticleIDs; // @synthesize otherArticleIDs=_otherArticleIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
- (void).cxx_destruct;
- (void)fetchHeadlinesWithContext:(id)arg1 forIdentifiers:(id)arg2 downloadAssets:(_Bool)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, copy) NSString *description;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(_Bool)arg3 personalize:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)latestHeadlineResultsWithContext:(id)arg1;
@property(readonly, nonatomic) long long feedFilterOptions;
@property(readonly, nonatomic) long long feedSortMethod;
@property(readonly, nonatomic) id <FCFeedPaginating> feedPaginator;
- (_Bool)shouldFilterFeedGroupEmitter:(id)arg1;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *offlineFeedGroupEmitters;
@property(readonly, copy, nonatomic) NSArray *feedGroupEmitters;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1 context:(id)arg2;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (id)streamOfHeadlinesWithIDs:(id)arg1 context:(id)arg2 cachedOnly:(_Bool)arg3 maxCachedAge:(double)arg4;
@property(readonly, nonatomic) NSString *iAdSectionID;
@property(readonly, nonatomic) NSString *iAdFeedID;
@property(readonly, nonatomic) NSString *iAdPrimaryAudience;
@property(readonly, nonatomic) long long iAdContentProvider;
@property(readonly, nonatomic) NSArray *iAdKeywords;
@property(readonly, nonatomic) NSArray *iAdCategories;
@property(readonly, nonatomic) NSString *iAdIdentifier;
@property(readonly, nonatomic) NSString *backingTopicID;
@property(readonly, nonatomic) NSString *backingSectionID;
@property(readonly, nonatomic) NSString *backingChannelID;
@property(readonly, nonatomic) id <FCTagProviding> backingTag;
- (_Bool)enableNotificationsWithSubscriptionController:(id)arg1 error:(id *)arg2;
- (_Bool)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (_Bool)isSubscribedToWithSubscriptionController:(id)arg1;
- (void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)isMutedWithSubscriptionController:(id)arg1;
- (_Bool)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isSubscribable;
@property(readonly, nonatomic) _Bool hideAccessoryText;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool derivesContentsFromExplicitSubscriptions;
@property(readonly, nonatomic) id <FCFeedTheming> theme;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

