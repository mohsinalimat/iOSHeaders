//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosExtras/VideosExtrasTemplateViewController.h>

#import <VideosExtras/UITableViewDataSource-Protocol.h>
#import <VideosExtras/UITableViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSString, UIImageView, UITableView, VideosExtrasViewElementViewController;

@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    _Bool _tableViewLeft;
    UIImageView *_vignetteView;
    _Bool _relatedContentEmbedded;
    NSArray *_masterViewConstraints;
    NSArray *_detailViewConstraints;
    NSMapTable *_relatedContentViewControllerMap;
    NSIndexPath *_autohighlightIndexPath;
    VideosExtrasViewElementViewController *_relatedContentViewController;
}

+ (id)relatedContentViewControllerForElement:(id)arg1;
@property(retain, nonatomic) VideosExtrasViewElementViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
- (void).cxx_destruct;
- (void)_configureVignette:(_Bool)arg1;
- (void)_prepareLayout;
- (void)_setNavigationConstraints;
- (void)_setDetailContraints;
- (void)_unembedRelatedContent;
- (void)_pushRelatedViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_embedRelatedContentViewController;
- (void)_setRelatedContentEmbedded:(_Bool)arg1;
- (void)_configureBannerWithElement:(id)arg1;
- (void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2;
- (void)_updateForTemplate:(id)arg1;
- (_Bool)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_addConstraintsToTableView:(id)arg1;
- (void)viewDidLoad;
- (_Bool)showsPlaceholder;
- (id)templateElement;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

