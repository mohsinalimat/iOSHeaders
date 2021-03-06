//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUControllableItemCollectionViewController.h>

#import <HomeUI/HUPrototypeLayoutOptionsEditorViewControllerDelegate-Protocol.h>

@class HUCCGridItemManager, HUGridFlowLayout, HUGridLayoutOptions, NSMapTable, NSString;
@protocol HUCCGridViewControllerDelegate;

@interface HUCCGridViewController : HUControllableItemCollectionViewController <HUPrototypeLayoutOptionsEditorViewControllerDelegate>
{
    _Bool _viewVisible;
    _Bool _needsLayoutOptionsUpdate;
    long long _layoutStyle;
    unsigned long long _itemType;
    unsigned long long _designType;
    id <HUCCGridViewControllerDelegate> _delegate;
    NSMapTable *_overrideCellLayoutOptionsByItem;
}

@property(nonatomic) _Bool needsLayoutOptionsUpdate; // @synthesize needsLayoutOptionsUpdate=_needsLayoutOptionsUpdate;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) NSMapTable *overrideCellLayoutOptionsByItem; // @synthesize overrideCellLayoutOptionsByItem=_overrideCellLayoutOptionsByItem;
@property(nonatomic) __weak id <HUCCGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long designType; // @synthesize designType=_designType;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)layoutOptionsEditorDidFinish:(id)arg1;
- (void)layoutOptionsEditor:(id)arg1 didUpdateLayoutOptions:(id)arg2;
- (void)presentationCoordinator:(id)arg1 pressedStateDidChange:(_Bool)arg2 forItem:(id)arg3;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (long long)preferredModalPresentationStyleForPresentationCoordinator:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (CDStruct_4bcfbbae)_gridLayout;
- (id)_cellLayoutOptionsForItem:(id)arg1;
- (void)_updateMaximumNumberOfItems;
- (void)_updateLayoutOptions;
- (void)_enqueueLayoutOptionsUpdate;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canDismissQuickControl;
- (id)preloadItemsForPossiblePresentation;
- (_Bool)_requiresUnlockToPerformActionForItem:(id)arg1;
- (id)dismissQuickControlAnimated:(_Bool)arg1 wasDismissed:(_Bool *)arg2;
@property(readonly, nonatomic) HUGridLayoutOptions *layoutOptions;
- (id)initWithItemType:(unsigned long long)arg1 designType:(unsigned long long)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) HUGridFlowLayout *collectionViewLayout; // @dynamic collectionViewLayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUCCGridItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

