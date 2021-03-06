//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCacheFlushing-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCAppConfigurationManager, FCArticleController, FCAssetManager, FCFlintResourceManager, FCNetworkBehaviorMonitor, FCTagController, NSString, NSURL;
@protocol FCBackgroundTaskable, FCContentContextInternal, FCPPTContext;

@protocol FCContentContext <NSObject, FCCacheFlushing>
@property(readonly, copy, nonatomic) NSString *contentEnvironmentToken;
@property(readonly, nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable;
@property(readonly, nonatomic) id <FCPPTContext> pptContext;
@property(readonly, nonatomic) id <FCContentContextInternal> internalContentContext;
@property(readonly, nonatomic) NSURL *webArchiveCacheDirectoryURL;
@property(readonly, nonatomic) NSURL *assetCacheDirectoryURL;
@property(readonly, copy, nonatomic) NSString *contentDirectory;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property(readonly, nonatomic) FCTagController *tagController;
@property(readonly, nonatomic) FCArticleController *articleController;
@property(readonly, nonatomic) FCAssetManager *assetManager;
@property(readonly, nonatomic) FCAppConfigurationManager *appConfigurationManager;
@property(readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, copy, nonatomic) NSString *contentStoreFrontID;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
@end

