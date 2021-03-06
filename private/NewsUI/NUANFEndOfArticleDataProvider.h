//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUEndOfArticleDataProvider-Protocol.h>
#import <NewsUI/NUViewControllerEndOfArticleProvidingDelegate-Protocol.h>

@class FCArticle, FCCloudContext, NSArray, NSString;
@protocol NUEmailSubscribeViewControllerFactory, NUEndOfArticleDataProviderDelegate;

@interface NUANFEndOfArticleDataProvider : NSObject <NUViewControllerEndOfArticleProvidingDelegate, NUEndOfArticleDataProvider>
{
    id <NUEndOfArticleDataProviderDelegate> _delegate;
    FCCloudContext *_cloudContext;
    FCArticle *_article;
    id <NUEmailSubscribeViewControllerFactory> _emailSubscribeViewControllerFactory;
    NSArray *_controllers;
}

@property(retain, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
@property(readonly, nonatomic) id <NUEmailSubscribeViewControllerFactory> emailSubscribeViewControllerFactory; // @synthesize emailSubscribeViewControllerFactory=_emailSubscribeViewControllerFactory;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(nonatomic) __weak id <NUEndOfArticleDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadWithArticle:(id)arg1 settings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadPublisherAndRelatedContentWithSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endOfArticleViewControllerProvidingNeedsContentHeightChange:(id)arg1;
- (void)loadWithSettings:(id)arg1;
- (id)initWithCloudContext:(id)arg1 article:(id)arg2 emailSubscribeViewControllerFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

