//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicIndexBarDataSource-Protocol.h>
#import <FuseUI/MusicIndexBarScrollDelegate-Protocol.h>
#import <FuseUI/MusicLibraryBrowseSectionHeaderViewDelegate-Protocol.h>
#import <FuseUI/MusicLibraryViewConfigurationConsuming-Protocol.h>
#import <FuseUI/MusicMediaPickerSearchDelegate-Protocol.h>
#import <FuseUI/MusicSplitInitialStateProviding-Protocol.h>
#import <FuseUI/MusicTableViewDelegate-Protocol.h>
#import <FuseUI/UITableViewDataSource-Protocol.h>
#import <FuseUI/UIViewControllerPreviewingDelegate-Protocol.h>
#import <FuseUI/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class MPAVController, MusicAsynchronousPropertyLoadingController, MusicClientContext, MusicEditingEntityProvider, MusicEntityValueContext, MusicEntityViewDescriptor, MusicLibraryBrowseTableViewConfiguration, MusicLibraryViewConfiguration, MusicSectionEntityValueContext, MusicTableView, NSArray, NSMapTable, NSMutableArray, NSString, SKUIClientContext, UIColor;
@protocol MusicLibraryBrowseTableViewControllerDelegate, UIViewControllerPreviewing;

@interface MusicLibraryBrowseTableViewController : UIViewController <MusicLibraryBrowseSectionHeaderViewDelegate, MusicMediaPickerSearchDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming, MusicSplitInitialStateProviding, MusicTableViewDelegate, UITableViewDataSource>
{
    MusicAsynchronousPropertyLoadingController *_asynchronousPropertyLoadingController;
    NSArray *_contentDescriptors;
    UIColor *_defaultSelectionTintColor;
    _Bool _didIgnoreEntityProviderInvalidationDuringEditing;
    CDUnknownBlockType _editingChangesCommitBlock;
    MusicEditingEntityProvider *_editingEntityProvider;
    _Bool _editingWasCancelled;
    MusicEntityViewDescriptor *_entityViewDescriptor;
    unsigned long long _firstSectionHeaderIndex;
    _Bool _hasValidFirstSectionHeaderIndex;
    MusicEntityValueContext *_itemEntityValueContext;
    long long _lastSelectionBehavior;
    MusicLibraryBrowseTableViewConfiguration *_libraryViewConfiguration;
    unsigned long long _numberOfEntities;
    MPAVController *_player;
    double _previousWidth;
    id <UIViewControllerPreviewing> _viewControllerPreviewing;
    NSMutableArray *_reusableItemCoalescingEntityValueProviders;
    NSMutableArray *_reusableSectionCoalescingEntityValueProviders;
    unsigned long long _referenceCountForIgnoringEntityProviderInvalidation;
    unsigned long long _referenceCountForRunningEditingStateAnimations;
    MusicSectionEntityValueContext *_sectionEntityValueContext;
    NSMapTable *_sectionContentDescriptorToMaximumHeaderHeight;
    MusicEntityValueContext *_selectedItemEntityValueContext;
    _Bool _shouldReloadTableViewOnceStoppedIgnoringNotifications;
    MusicTableView *_tableView;
    NSMapTable *_viewToDownloadInformationObserverToken;
    NSMutableArray *_visibleFlexibleHeaderViews;
    struct {
        unsigned int didFinishContentHeightAnimation:1;
        unsigned int willBeginContentHeightAnimation:1;
    } _delegateRespondsToSelector;
    MusicClientContext *_clientContext;
    id <MusicLibraryBrowseTableViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MusicLibraryBrowseTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MusicLibraryViewConfiguration *libraryViewConfiguration; // @synthesize libraryViewConfiguration=_libraryViewConfiguration;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_willBeginEditingStateChangeAnimation;
- (void)_willBeginContentHeightAnimation;
- (_Bool)_wantsPersistentSelection;
- (void)_unregisterForNotificationsForContentDescriptors;
- (void)_uninstallEditingEntityProviderIfAppropriate;
- (void)_updatePropertiesFromContentDescriptors;
- (void)_updateNumberOfEntities;
- (void)_updateEntityDisabledStateForVisibleItems;
- (void)_updateEntityDisabledStateForView:(id)arg1 withEntityValueContext:(id)arg2;
- (void)_setSelectedIndexPath:(id)arg1 entityValueContext:(id)arg2;
- (id)_sectionEntityValueContextForIndex:(unsigned long long)arg1;
- (void)_registerForNotificationsForContentDescriptors;
- (void)_reloadTableViewData;
- (void)_recycleSectionCoalescingEntityValueProvider:(id)arg1;
- (void)_recycleItemCoalescingEntityValueProvider:(id)arg1;
- (void)_presentContextualActionsWithEntityValueContext:(id)arg1 fromButton:(id)arg2;
- (id)_itemEntityValueContext;
- (void)_invalidateIndexBarDataSource;
- (id)_effectiveEntityProvider;
- (id)_entityValueContextAtIndexPath:(id)arg1;
- (void)_endIgnoringEntityProviderInvalidation;
- (void)_didFinishEditingStateChangeAnimation;
- (void)_didFinishContentHeightAnimation;
- (id)_dequeueSectionCoalescingEntityValueProvider;
- (id)_dequeueItemCoalescingEntityValueProvider;
- (void)_configureForEntityViewDescriptorProperties;
- (void)_configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (double)_calculateTableViewMaximumRowHeight;
- (void)_beginEntityProviderInvalidation;
- (void)_handleSectionContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_handleEntityViewDescriptorDisplayValuesDidChangeNotification:(id)arg1;
- (void)_handleEntityViewDescriptorDisplayPropertiesDidChangeNotification:(id)arg1;
- (void)_handleEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_handleEntityPlayabilityControllerDidChangeNotification:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)willDisplayBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)tableViewDataDidReload;
- (id)loadEntityViewDescriptor;
- (void)insertEntityValueProviders:(id)arg1;
- (long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3;
- (long long)handleSelectionOfCellForEntityValueContext:(id)arg1;
- (void)handleEntityProviderDidInvalidate;
- (void)handleContentSizeCategoryDidChange;
- (void)handleContentDescriptorDidInvalidate;
- (void)endEditingWithCommitBlock:(CDUnknownBlockType)arg1;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)didEndDisplayingBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)cancelEditing;
@property(readonly, nonatomic) MusicTableView *tableView;
@property(readonly, nonatomic) UIColor *sectionHeaderBackgroundColor;
@property(readonly, nonatomic) MusicEntityViewDescriptor *entityViewDescriptor;
@property(readonly, nonatomic) NSArray *entityProviderChangeRecords;
@property(readonly, nonatomic) double effectiveContentHeight;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableViewTintColorDidChange:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forSectionHeaderView:(id)arg3;
- (void)tableView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forSectionHeaderView:(id)arg3;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectAddButtonForCell:(id)arg2 events:(unsigned long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showInitialStateForSplitViewController;
- (id)tableViewThatNeedsSearchBarHeader;
- (void)sectionHeaderViewDidSelectButton:(id)arg1;
- (_Bool)getContentOffset:(struct CGPoint *)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfIndexBarEntries;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (id)contentScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

