//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewController.h>

#import <SpotlightUI/CNAvatarViewDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchTableHeaderViewDelegate-Protocol.h>
#import <SpotlightUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableIndexSet, NSMutableSet, NSString, SPUIPeekDelegate, SPUISearchModel, UISwipeGestureRecognizer;
@protocol SPUITableViewDelegate, UIViewControllerPreviewing;

@interface SPUITableViewController : SearchUITableViewController <SPUISearchTableHeaderViewDelegate, UIGestureRecognizerDelegate, CNAvatarViewDelegate>
{
    _Bool _hasAppeared;
    _Bool _isPresenting;
    _Bool _hasCardPresented;
    _Bool _visibleCellsOrHeadersChanged;
    id <SPUITableViewDelegate> _gestureDelegate;
    double _headerHeight;
    SPUISearchModel *_searchModel;
    NSMutableIndexSet *_expandedSections;
    NSMutableSet *_sectionsThatHaveBeenExpandedBefore;
    NSArray *_sectionIdentifiers;
    NSDictionary *_sectionsForIdentifiers;
    NSArray *_resultIdentifiersForRowsInSections;
    NSDictionary *_resultsForIdentifiers;
    UISwipeGestureRecognizer *_swipeUpRecognizer;
    UISwipeGestureRecognizer *_swipeDownRecognizer;
    SPUIPeekDelegate *_peekDelegate;
    id <UIViewControllerPreviewing> _previewingContext;
    NSMutableSet *_seenVisibleResults;
    NSMutableSet *_seenVisibleSections;
    double _lastScrollOffset;
    unsigned long long _showMoreLessReason;
    struct CGRect _initialKeyboardFrame;
    struct CGRect _keyboardFrame;
}

+ (unsigned long long)previewStyle;
+ (unsigned long long)defaultStyle;
@property _Bool visibleCellsOrHeadersChanged; // @synthesize visibleCellsOrHeadersChanged=_visibleCellsOrHeadersChanged;
@property _Bool hasCardPresented; // @synthesize hasCardPresented=_hasCardPresented;
@property unsigned long long showMoreLessReason; // @synthesize showMoreLessReason=_showMoreLessReason;
@property _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property double lastScrollOffset; // @synthesize lastScrollOffset=_lastScrollOffset;
@property(retain) NSMutableSet *seenVisibleSections; // @synthesize seenVisibleSections=_seenVisibleSections;
@property(retain) NSMutableSet *seenVisibleResults; // @synthesize seenVisibleResults=_seenVisibleResults;
@property _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property struct CGRect initialKeyboardFrame; // @synthesize initialKeyboardFrame=_initialKeyboardFrame;
@property(retain) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain) SPUIPeekDelegate *peekDelegate; // @synthesize peekDelegate=_peekDelegate;
@property(retain) UISwipeGestureRecognizer *swipeDownRecognizer; // @synthesize swipeDownRecognizer=_swipeDownRecognizer;
@property(retain) UISwipeGestureRecognizer *swipeUpRecognizer; // @synthesize swipeUpRecognizer=_swipeUpRecognizer;
@property(retain) NSDictionary *resultsForIdentifiers; // @synthesize resultsForIdentifiers=_resultsForIdentifiers;
@property(retain) NSArray *resultIdentifiersForRowsInSections; // @synthesize resultIdentifiersForRowsInSections=_resultIdentifiersForRowsInSections;
@property(retain) NSDictionary *sectionsForIdentifiers; // @synthesize sectionsForIdentifiers=_sectionsForIdentifiers;
@property(retain) NSArray *sectionIdentifiers; // @synthesize sectionIdentifiers=_sectionIdentifiers;
@property(retain) NSMutableSet *sectionsThatHaveBeenExpandedBefore; // @synthesize sectionsThatHaveBeenExpandedBefore=_sectionsThatHaveBeenExpandedBefore;
@property(retain) NSMutableIndexSet *expandedSections; // @synthesize expandedSections=_expandedSections;
@property(retain) SPUISearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property double headerHeight; // @synthesize headerHeight=_headerHeight;
@property __weak id <SPUITableViewDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateSeparator;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewControllerForPresenting;
- (void)resultSelected:(id)arg1;
- (void)numberOfRowsDidChange:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)sectionForIndex:(unsigned long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateCellSelectedBackgroundViewForRoundedCorners:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)resultForIndexPath:(id)arg1;
- (id)resultsForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)expandableSidewaysRowExistsInSection:(long long)arg1;
- (void)performExpansion:(_Bool)arg1 withSectionIndex:(unsigned long long)arg2;
- (void)toggleExpansionForSection:(id)arg1;
- (unsigned long long)indexOfSection:(id)arg1;
- (_Bool)sectionIsExpanded:(id)arg1;
- (_Bool)isZKWExpanded;
- (void)updateDataModel:(unsigned long long)arg1;
- (id)identifierForSection:(id)arg1;
- (void)resultsDidBecomeVisible:(unsigned long long)arg1;
- (void)isPresenting:(_Bool)arg1;
- (void)viewBecomingVisible:(unsigned long long)arg1;
- (void)leavingSpotlight;
- (void)updateAnimated:(_Bool)arg1 whyUpdate:(unsigned long long)arg2;
- (void)update;
- (void)reset;
- (void)didSwipeUp;
- (void)didTap;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (void)calculateSectionHeaderHeight;
- (id)initWithSearchModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

