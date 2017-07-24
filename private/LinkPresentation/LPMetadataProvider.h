//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPMetadataProviderSpecializationDelegate-Protocol.h>
#import <LinkPresentation/WKNavigationDelegate-Protocol.h>

@class LPLinkMetadata, LPMetadataProviderSpecialization, LPStatisticsTimingToken, NSMutableArray, NSString, NSURL, WKWebView;

@interface LPMetadataProvider : NSObject <WKNavigationDelegate, LPMetadataProviderSpecializationDelegate>
{
    unsigned int _loggingID;
    WKWebView *_webView;
    NSURL *_URL;
    LPLinkMetadata *_metadata;
    _Bool _complete;
    _Bool _fetchingFromExistingWebView;
    _Bool _hasStartedFetching;
    NSMutableArray *_pendingResolvers;
    long long _specializationState;
    LPMetadataProviderSpecialization *_specializedMetadataProvider;
    LPStatisticsTimingToken *_fetchTimingToken;
    _Bool _useSpecializedProviders;
    _Bool _fetchSubresources;
    _Bool _cancelled;
    double _timeout;
    CDUnknownBlockType _completionHandler;
}

+ (id)_defaultUserAgent;
+ (id)_copyDefaultWebViewConfiguration;
+ (id)requestMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)requestMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_incompleteMetadataRequests;
+ (id)_callbackQueue;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool fetchSubresources; // @synthesize fetchSubresources=_fetchSubresources;
@property(nonatomic) _Bool useSpecializedProviders; // @synthesize useSpecializedProviders=_useSpecializedProviders;
- (void).cxx_destruct;
- (void)metadataProviderSpecialization:(id)arg1 didFailWithError:(id)arg2;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)_completedWithResolvedMetadata:(id)arg1 error:(id)arg2;
- (void)_completedWithMainResourceImageData:(id)arg1 MIMEType:(id)arg2 URL:(id)arg3;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)_fetchNextSuccessfulItem:(id)arg1 currentIndex:(unsigned int)arg2 group:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchFirstSuccessfulItem:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchResolvableItems:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_redistinguishImagesAndIcons;
- (void)_fetchSubresources;
- (void)_fetchedMetadata:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelDueToTimeout;
- (void)cancel;
- (_Bool)_switchToSpecializationIfPossibleForMetadata:(id)arg1 URL:(id)arg2;
- (_Bool)_switchToSpecializationIfPossibleForMIMEType:(id)arg1 URL:(id)arg2;
- (void)_fetchMetadataFromWebView;
- (void)_startWatchdogTimer;
- (void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFetchingMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

