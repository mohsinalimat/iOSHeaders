//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAppConfigurationResource, FCAsyncSerialQueue, FCCoverArticlesConfiguration, FCForYouGroupsConfiguration, FCIAdConfiguration, FCKeyValueStore, FCNotificationsConfiguration, FCPrefetchConfiguration, FCRecommendedCategory, FCTopStoriesConfiguration, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSNumber, NSSet, NSString, NSURL, NTPBPersonalizationConfig, NTPBPersonalizationTreatment, NTPBWidgetConfig;
@protocol FCContentContext, OS_dispatch_queue;

@interface FCAppConfiguration : NSObject
{
    _Bool _universalLinksEnabled;
    _Bool _orderFeedEndpointEnabled;
    _Bool _corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
    NSArray *_trendingTopics;
    FCCoverArticlesConfiguration *_coverArticlesConfig;
    NSString *_forYouRecordConfigID;
    NSString *_embedConfigurationAssetID;
    NSString *_widgetConfigID;
    NSNumber *_currentBucket;
    NSNumber *_currentTreatment;
    FCAsyncSerialQueue *_configRequestSerialQueue;
    FCAsyncSerialQueue *_configRefreshSerialQueue;
    FCAsyncSerialQueue *_trendingSerialQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_hiddenFeedIDs;
    NSArray *_presubscribedFeedIDs;
    NSArray *_onboardingFeedIDs;
    FCRecommendedCategory *_topLevelCategory;
    long long _autoScrollToTopFeedTimeout;
    long long _appConfigRefreshRate;
    long long _trendingTopicsRefreshRate;
    long long _timeBetweenWidgetInsertions;
    long long _timeBetweenSameWidgetReinsertion;
    long long _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
    double _interstitialAdLoadDelay;
    double _prerollLoadingTimeout;
    double _tileProminenceScoreBalanceValue;
    long long _minimumDistanceBetweenImageOnTopTiles;
    long long _articleRapidUpdatesTimeout;
    long long _subscriptionsGlobalMeteredCount;
    long long _subscriptionsPlacardPublisherFrequencyInSeconds;
    long long _subscriptionsPlacardGlobalMaximumPerDay;
    long long _subscriptionsGracePeriodForTokenVerificationSeconds;
    long long _newFavoriteNotificationAlertsFrequency;
    double _endOfArticleMinPaidHeadlineRatio;
    long long _endOfArticleMaxInaccessiblePaidArticleCount;
    long long _notificationArticleCacheTimeout;
    long long _notificationArticleWithRapidUpdatesCacheTimeout;
    long long _notificationEnabledChannelsRefreshFrequency;
    long long _savedArticlesMaximumCountWiFi;
    long long _savedArticlesMaximumCountCellular;
    long long _savedArticlesCutoffTime;
    long long _savedArticlesOpenedCutoffTime;
    NTPBPersonalizationConfig *_personalizationConfig;
    NSDictionary *_personalizationTreatments;
    NTPBPersonalizationTreatment *_personalizationTreatment;
    NSDictionary *_endpointConfigsByEnvironment;
    FCIAdConfiguration *_iAdConfig;
    FCPrefetchConfiguration *_prefetchConfig;
    FCTopStoriesConfiguration *_topStoriesConfig;
    NSString *_editorialChannelID;
    NSString *_briefingsTagID;
    NSString *_trendingTagID;
    NSString *_featuredStoriesTagID;
    NSString *_savedStoriesTagID;
    FCNotificationsConfiguration *_notificationsConfig;
    id <FCContentContext> _context;
    NSString *_contentDirectory;
    NSHashTable *_observers;
    NSMutableArray *_observationBlocks;
    NSString *_configurationResourceID;
    NSString *_trendingSearchesResourceID;
    FCKeyValueStore *_resourceCache;
    FCAppConfigurationResource *_configurationResource;
    FCAppConfigurationResource *_trendingSearchesResource;
    NSSet *_preferredLanguages;
    FCForYouGroupsConfiguration *_forYouGroupsConfiguration;
    double _articleDiversificationSimilarityExpectationStart;
    double _articleDiversificationSimilarityExpectationEnd;
    double _articleDiversificationUniquePublisherExpectationSlope;
    double _articleDiversificationUniquePublisherExpectationYIntercept;
    long long _maximumPaidSubscriptionGroupSize;
    long long _maximumTimesHeadlineInPaidSubscriptionGroup;
    long long _expiredPaidSubscriptionGroupCutoffTime;
    long long _maximumNumberOfExpiredPaidSubscriptionGroups;
    long long _analyticsEndpointMaxPayloadSize;
    NTPBWidgetConfig *_widgetConfiguration;
    long long _corryBarMaxArticleCountForArticleList;
    long long _corryBarMaxArticleCountForSingleArticle;
}

+ (void)initialize;
@property(nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; // @synthesize corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers=_corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(nonatomic) long long corryBarMaxArticleCountForSingleArticle; // @synthesize corryBarMaxArticleCountForSingleArticle=_corryBarMaxArticleCountForSingleArticle;
@property(nonatomic) long long corryBarMaxArticleCountForArticleList; // @synthesize corryBarMaxArticleCountForArticleList=_corryBarMaxArticleCountForArticleList;
@property(copy, nonatomic) NTPBWidgetConfig *widgetConfiguration; // @synthesize widgetConfiguration=_widgetConfiguration;
@property(nonatomic, getter=isOrderFeedEndpointEnabled) _Bool orderFeedEndpointEnabled; // @synthesize orderFeedEndpointEnabled=_orderFeedEndpointEnabled;
@property(nonatomic) long long analyticsEndpointMaxPayloadSize; // @synthesize analyticsEndpointMaxPayloadSize=_analyticsEndpointMaxPayloadSize;
@property(nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups; // @synthesize maximumNumberOfExpiredPaidSubscriptionGroups=_maximumNumberOfExpiredPaidSubscriptionGroups;
@property(nonatomic) long long expiredPaidSubscriptionGroupCutoffTime; // @synthesize expiredPaidSubscriptionGroupCutoffTime=_expiredPaidSubscriptionGroupCutoffTime;
@property(nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup; // @synthesize maximumTimesHeadlineInPaidSubscriptionGroup=_maximumTimesHeadlineInPaidSubscriptionGroup;
@property(nonatomic) long long maximumPaidSubscriptionGroupSize; // @synthesize maximumPaidSubscriptionGroupSize=_maximumPaidSubscriptionGroupSize;
@property(nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept; // @synthesize articleDiversificationUniquePublisherExpectationYIntercept=_articleDiversificationUniquePublisherExpectationYIntercept;
@property(nonatomic) double articleDiversificationUniquePublisherExpectationSlope; // @synthesize articleDiversificationUniquePublisherExpectationSlope=_articleDiversificationUniquePublisherExpectationSlope;
@property(nonatomic) double articleDiversificationSimilarityExpectationEnd; // @synthesize articleDiversificationSimilarityExpectationEnd=_articleDiversificationSimilarityExpectationEnd;
@property(nonatomic) double articleDiversificationSimilarityExpectationStart; // @synthesize articleDiversificationSimilarityExpectationStart=_articleDiversificationSimilarityExpectationStart;
@property(retain, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration; // @synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration;
@property(retain, nonatomic) NSSet *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain, nonatomic) FCAppConfigurationResource *trendingSearchesResource; // @synthesize trendingSearchesResource=_trendingSearchesResource;
@property(retain, nonatomic) FCAppConfigurationResource *configurationResource; // @synthesize configurationResource=_configurationResource;
@property(retain, nonatomic) FCKeyValueStore *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(retain, nonatomic) NSString *trendingSearchesResourceID; // @synthesize trendingSearchesResourceID=_trendingSearchesResourceID;
@property(retain, nonatomic) NSString *configurationResourceID; // @synthesize configurationResourceID=_configurationResourceID;
@property(retain, nonatomic) NSMutableArray *observationBlocks; // @synthesize observationBlocks=_observationBlocks;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSString *contentDirectory; // @synthesize contentDirectory=_contentDirectory;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(retain, nonatomic) FCNotificationsConfiguration *notificationsConfig; // @synthesize notificationsConfig=_notificationsConfig;
@property(retain, nonatomic) NSString *savedStoriesTagID; // @synthesize savedStoriesTagID=_savedStoriesTagID;
@property(retain, nonatomic) NSString *featuredStoriesTagID; // @synthesize featuredStoriesTagID=_featuredStoriesTagID;
@property(retain, nonatomic) NSString *trendingTagID; // @synthesize trendingTagID=_trendingTagID;
@property(retain, nonatomic) NSString *briefingsTagID; // @synthesize briefingsTagID=_briefingsTagID;
@property(retain, nonatomic) NSString *editorialChannelID; // @synthesize editorialChannelID=_editorialChannelID;
@property(retain, nonatomic) FCTopStoriesConfiguration *topStoriesConfig; // @synthesize topStoriesConfig=_topStoriesConfig;
@property(retain, nonatomic) FCPrefetchConfiguration *prefetchConfig; // @synthesize prefetchConfig=_prefetchConfig;
@property(retain, nonatomic) FCIAdConfiguration *iAdConfig; // @synthesize iAdConfig=_iAdConfig;
@property(retain, nonatomic) NSDictionary *endpointConfigsByEnvironment; // @synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment;
@property(retain, nonatomic) NTPBPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property(retain, nonatomic) NSDictionary *personalizationTreatments; // @synthesize personalizationTreatments=_personalizationTreatments;
@property(retain, nonatomic) NTPBPersonalizationConfig *personalizationConfig; // @synthesize personalizationConfig=_personalizationConfig;
@property(nonatomic) long long savedArticlesOpenedCutoffTime; // @synthesize savedArticlesOpenedCutoffTime=_savedArticlesOpenedCutoffTime;
@property(nonatomic) long long savedArticlesCutoffTime; // @synthesize savedArticlesCutoffTime=_savedArticlesCutoffTime;
@property(nonatomic) long long savedArticlesMaximumCountCellular; // @synthesize savedArticlesMaximumCountCellular=_savedArticlesMaximumCountCellular;
@property(nonatomic) long long savedArticlesMaximumCountWiFi; // @synthesize savedArticlesMaximumCountWiFi=_savedArticlesMaximumCountWiFi;
@property(nonatomic) long long notificationEnabledChannelsRefreshFrequency; // @synthesize notificationEnabledChannelsRefreshFrequency=_notificationEnabledChannelsRefreshFrequency;
@property(nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout; // @synthesize notificationArticleWithRapidUpdatesCacheTimeout=_notificationArticleWithRapidUpdatesCacheTimeout;
@property(nonatomic) long long notificationArticleCacheTimeout; // @synthesize notificationArticleCacheTimeout=_notificationArticleCacheTimeout;
@property(nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount; // @synthesize endOfArticleMaxInaccessiblePaidArticleCount=_endOfArticleMaxInaccessiblePaidArticleCount;
@property(nonatomic) double endOfArticleMinPaidHeadlineRatio; // @synthesize endOfArticleMinPaidHeadlineRatio=_endOfArticleMinPaidHeadlineRatio;
@property(nonatomic) long long newFavoriteNotificationAlertsFrequency; // @synthesize newFavoriteNotificationAlertsFrequency=_newFavoriteNotificationAlertsFrequency;
@property(nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds; // @synthesize subscriptionsGracePeriodForTokenVerificationSeconds=_subscriptionsGracePeriodForTokenVerificationSeconds;
@property(nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay; // @synthesize subscriptionsPlacardGlobalMaximumPerDay=_subscriptionsPlacardGlobalMaximumPerDay;
@property(nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds; // @synthesize subscriptionsPlacardPublisherFrequencyInSeconds=_subscriptionsPlacardPublisherFrequencyInSeconds;
@property(nonatomic) long long subscriptionsGlobalMeteredCount; // @synthesize subscriptionsGlobalMeteredCount=_subscriptionsGlobalMeteredCount;
@property(nonatomic) long long articleRapidUpdatesTimeout; // @synthesize articleRapidUpdatesTimeout=_articleRapidUpdatesTimeout;
@property(nonatomic) long long minimumDistanceBetweenImageOnTopTiles; // @synthesize minimumDistanceBetweenImageOnTopTiles=_minimumDistanceBetweenImageOnTopTiles;
@property(nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(nonatomic) double prerollLoadingTimeout; // @synthesize prerollLoadingTimeout=_prerollLoadingTimeout;
@property(nonatomic) double interstitialAdLoadDelay; // @synthesize interstitialAdLoadDelay=_interstitialAdLoadDelay;
@property(nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit; // @synthesize numberOfScreenfulsScrolledToBypassWidgetTimeLimit=_numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property(nonatomic) long long timeBetweenSameWidgetReinsertion; // @synthesize timeBetweenSameWidgetReinsertion=_timeBetweenSameWidgetReinsertion;
@property(nonatomic) long long timeBetweenWidgetInsertions; // @synthesize timeBetweenWidgetInsertions=_timeBetweenWidgetInsertions;
@property(nonatomic) long long trendingTopicsRefreshRate; // @synthesize trendingTopicsRefreshRate=_trendingTopicsRefreshRate;
@property(nonatomic) long long appConfigRefreshRate; // @synthesize appConfigRefreshRate=_appConfigRefreshRate;
@property(nonatomic) long long autoScrollToTopFeedTimeout; // @synthesize autoScrollToTopFeedTimeout=_autoScrollToTopFeedTimeout;
@property(retain, nonatomic) FCRecommendedCategory *topLevelCategory; // @synthesize topLevelCategory=_topLevelCategory;
@property(retain, nonatomic) NSArray *onboardingFeedIDs; // @synthesize onboardingFeedIDs=_onboardingFeedIDs;
@property(retain, nonatomic) NSArray *presubscribedFeedIDs; // @synthesize presubscribedFeedIDs=_presubscribedFeedIDs;
@property(retain, nonatomic) NSArray *hiddenFeedIDs; // @synthesize hiddenFeedIDs=_hiddenFeedIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *trendingSerialQueue; // @synthesize trendingSerialQueue=_trendingSerialQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *configRefreshSerialQueue; // @synthesize configRefreshSerialQueue=_configRefreshSerialQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *configRequestSerialQueue; // @synthesize configRequestSerialQueue=_configRequestSerialQueue;
@property(retain, nonatomic) NSNumber *currentTreatment; // @synthesize currentTreatment=_currentTreatment;
@property(retain, nonatomic) NSNumber *currentBucket; // @synthesize currentBucket=_currentBucket;
@property(nonatomic) _Bool universalLinksEnabled; // @synthesize universalLinksEnabled=_universalLinksEnabled;
@property(readonly, nonatomic) NSString *widgetConfigID; // @synthesize widgetConfigID=_widgetConfigID;
@property(retain, nonatomic) NSString *embedConfigurationAssetID; // @synthesize embedConfigurationAssetID=_embedConfigurationAssetID;
@property(readonly, nonatomic) NSString *forYouRecordConfigID; // @synthesize forYouRecordConfigID=_forYouRecordConfigID;
@property(readonly, nonatomic) FCCoverArticlesConfiguration *coverArticlesConfig; // @synthesize coverArticlesConfig=_coverArticlesConfig;
@property(readonly, nonatomic) NSArray *trendingTopics; // @synthesize trendingTopics=_trendingTopics;
- (void).cxx_destruct;
- (void)_didChangeTrendingTopics;
- (void)_extractTrendingTopicsFromLanguageConfiguration:(id)arg1;
- (id)_languageConfigurationsInProtobufTrendingConfiguration:(id)arg1;
- (_Bool)_processTrendingSearchesData:(id)arg1;
- (id)_adoptTrendingSearchesResource:(id)arg1;
- (id)_loadTrendingSearchesResourceFromCache;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_extractWidgetSectionConfigRecordIDFromLanguageConfiguration:(id)arg1;
- (void)_extractForYouRecordConfigIDFromLanguageConfiguration:(id)arg1;
- (void)_extractCoverArticlesFromLanguageConfiguration:(id)arg1;
- (void)_extractNotificationsConfigFromLanguageConfiguration:(id)arg1;
- (void)_extractSavedStoriesTagIDFromLanguageConfiguration:(id)arg1;
- (void)_extractFeaturedStoriesTagIDFromLanguageConfiguration:(id)arg1;
- (void)_extractTrendingTagIDFromLanguageConfiguration:(id)arg1;
- (void)_extractBriefingsTagIDFromLanguageConfiguration:(id)arg1;
- (void)_extractEditorialChannelFromLanguageConfiguration:(id)arg1;
- (void)_extractTopStoriesFromLanguageConfiguration:(id)arg1;
- (id)_categoryFromProtobufCategory:(id)arg1;
- (void)_extractTopLevelCategoryFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractFeedIDsFromLanguageConfigurations:(id)arg1;
- (id)_languageConfigurationsFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractWidgetValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractPrefetchValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractPersonalizationValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractiAdValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractEndpointValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractCommonValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_didChange;
- (_Bool)_processTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (_Bool)_selectConfigurationForTreatment:(id)arg1 configurationData:(id)arg2;
- (_Bool)_selectConfigurationForBucket:(id)arg1 configurationData:(id)arg2;
- (id)_adoptConfigurationResource:(id)arg1;
- (id)_loadConfigurationResourceFromCache;
- (id)_loadResourceCache;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
- (id)personalizationTreatmentForFeldsparID:(id)arg1;
- (id)ANFEmbedConfigurationAssetID;
@property(readonly, nonatomic) NSArray *recommendedCategories;
@property(readonly, nonatomic) NSArray *topLevelRecommendedChannelTagIDs;
@property(readonly, nonatomic) NSArray *topLevelRecommendedTopicTagIDs;
@property(readonly, nonatomic) NSArray *topLevelCuratedTagIDs;
- (id)widgetConfigWithSectionConfigs:(id)arg1;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(readonly, nonatomic) long long widgetArticleListBackgroundMinimumUpdateInterval;
@property(readonly, nonatomic) long long widgetArticleListForegroundMinimumUpdateInterval;
@property(readonly, nonatomic) long long widgetConfigBackgroundMinimumUpdateInterval;
@property(readonly, nonatomic) long long widgetConfigForegroundMinimumUpdateInterval;
- (void)overrideConfigWithTreatment:(id)arg1;
@property(readonly, nonatomic) NSArray *availableExperiments;
- (void)forceUpdateOnNextLaunch;
- (void)addChangeObservationBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSURL *remoteURL;
- (id)initWithContext:(id)arg1 contentDirectory:(id)arg2;
- (id)init;

@end
