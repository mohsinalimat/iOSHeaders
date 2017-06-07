//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIMetricsViewController-Protocol.h>
#import <StoreKitUI/SKUIStorePageSectionsDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewControllerTesting-Protocol.h>
#import <StoreKitUI/UIViewControllerRestoration-Protocol.h>

@class NSDictionary, NSOperationQueue, NSString, NSURLRequest, SKUIClientContext, SKUIColorScheme, SKUIMetricsController, SKUIStorePage, SKUIStorePageSectionsViewController, SSMetricsPageEvent, SSVLoadURLOperation, UIRefreshControl;
@protocol SKUIStorePageDelegate;

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration>
{
    SKUIClientContext *_clientContext;
    id <SKUIStorePageDelegate> _delegate;
    NSString *_lastDataConsumerClassName;
    SSMetricsPageEvent *_lastPageEvent;
    NSURLRequest *_lastRequest;
    _Bool _loadOnAppear;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUIMetricsController *_metricsController;
    NSString *_performanceTestName;
    NSDictionary *_performanceTestOptions;
    SKUIColorScheme *_placeholderColorScheme;
    UIRefreshControl *_refreshControl;
    SKUIStorePageSectionsViewController *_sectionsViewController;
    SKUIStorePage *_storePage;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(copy, nonatomic) SKUIStorePage *storePage; // @synthesize storePage=_storePage;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUIStorePageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showProductPage:(id)arg1 withPageEvent:(id)arg2;
- (void)_setStorePage:(id)arg1 error:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (id)_sectionsViewController;
- (void)_runScrollTestWithName:(id)arg1 options:(id)arg2;
- (void)_runPerformanceTestAfterPageLoad;
- (void)_runPerformanceTestAfterIdle;
- (void)_reloadStorePage;
- (void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2;
- (void)_loadWithOperation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_colorScheme;
- (void)loadWithJSONData:(id)arg1 fromOperation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_metricsEnterEventNotification:(id)arg1;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
- (_Bool)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;
- (_Bool)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
- (id)activeMetricsController;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadURLRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isSkLoading) _Bool skLoading;
- (void)cancelPageLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

