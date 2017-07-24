//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/SXAdControllerDataSource-Protocol.h>
#import <NewsUI/SXAdControllerDelegate-Protocol.h>

@class FCArticle, NSString;
@protocol NUAdProvider, NUAdSettings, NUDevice;

@interface NUArticleAdManager : NSObject <NUAdContextProvider, SXAdControllerDelegate, SXAdControllerDataSource>
{
    FCArticle *_article;
    id <NUAdProvider> _adProvider;
    id <NUAdSettings> _settings;
    id <NUDevice> _device;
}

@property(readonly, nonatomic) id <NUDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) id <NUAdSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didUnloadBannerView:(id)arg3 withError:(id)arg4;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 failedToLoadBannerView:(id)arg3 error:(id)arg4;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didLoadBannerView:(id)arg3;
- (CDUnknownBlockType)adController:(id)arg1 requiresAdForRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithArticle:(id)arg1 adProvider:(id)arg2 settings:(id)arg3 device:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

