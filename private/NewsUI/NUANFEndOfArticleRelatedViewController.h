//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUViewControllerEndOfArticleProviding-Protocol.h>

@class NSObject, NSString, NUANFEndOfArticleRelatedDataProvider, NUANFEndOfArticleTopicViewController, NUCanvas, NUFeedViewController, NUViewNode;
@protocol NUViewControllerEndOfArticleProvidingDelegate, OS_dispatch_group;

@interface NUANFEndOfArticleRelatedViewController : UIViewController <NUViewControllerEndOfArticleProviding>
{
    _Bool isVisible;
    id <NUViewControllerEndOfArticleProvidingDelegate> delegate;
    NUANFEndOfArticleRelatedDataProvider *_dataProvider;
    NUFeedViewController *_feedViewController;
    NUANFEndOfArticleTopicViewController *_topicsViewController;
    NUCanvas *_canvas;
    NUViewNode *_hairlineViewNode;
    NUViewNode *_titleLabelNode;
    NSObject<OS_dispatch_group> *_loadLayoutGroup;
}

+ (id)titleAttributes;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *loadLayoutGroup; // @synthesize loadLayoutGroup=_loadLayoutGroup;
@property(readonly, nonatomic) NUViewNode *titleLabelNode; // @synthesize titleLabelNode=_titleLabelNode;
@property(readonly, nonatomic) NUViewNode *hairlineViewNode; // @synthesize hairlineViewNode=_hairlineViewNode;
@property(readonly, nonatomic) NUCanvas *canvas; // @synthesize canvas=_canvas;
@property(readonly, nonatomic) NUANFEndOfArticleTopicViewController *topicsViewController; // @synthesize topicsViewController=_topicsViewController;
@property(readonly, nonatomic) NUFeedViewController *feedViewController; // @synthesize feedViewController=_feedViewController;
@property(readonly, nonatomic) NUANFEndOfArticleRelatedDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak id <NUViewControllerEndOfArticleProvidingDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible;
- (void).cxx_destruct;
- (id)buildCanvasWithTitle:(id)arg1 withScale:(double)arg2 andSettings:(id)arg3;
- (void)loadLayoutWithLoadGroup:(id)arg1 andSettings:(id)arg2;
- (void)whenLoaded:(CDUnknownBlockType)arg1;
- (id)sectionItemViewController;
- (double)sectionItemHeightFor:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

