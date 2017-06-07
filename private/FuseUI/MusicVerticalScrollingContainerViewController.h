//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerCollectionViewCellDelegate-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerCollectionViewDelegate-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerItemContextDelegate-Protocol.h>
#import <FuseUI/SKUIProxyScrollViewDelegate-Protocol.h>
#import <FuseUI/UICollectionViewDataSource-Protocol.h>
#import <FuseUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class MusicClientContext, MusicVerticalScrollingContainerCollectionView, NSArray, NSMapTable, NSString, SKUIClientContext, SKUIProxyScrollView, UICollectionView;
@protocol MusicVerticalScrollingContainerViewControllerDelegate;

@interface MusicVerticalScrollingContainerViewController : UIViewController <MusicVerticalScrollingContainerCollectionViewCellDelegate, MusicVerticalScrollingContainerCollectionViewDelegate, MusicVerticalScrollingContainerItemContextDelegate, SKUIProxyScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MusicClientContextConsuming>
{
    MusicVerticalScrollingContainerCollectionView *_containerCollectionView;
    _Bool _contentOffsetHasAdjustedForTuck;
    _Bool _isPerformingLayout;
    NSMapTable *_itemToItemContext;
    unsigned long long _numberOfRunningAnimatedInvalidations;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdditions;
    _Bool _shouldUpdateLayoutOfVisibleCollectionViewCellsUponCompletingAnimatedInvalidations;
    struct {
        unsigned int contentOffsetProxyingPolicyForItem:1;
        unsigned int didLayoutSubviews:1;
        unsigned int didScroll:1;
        unsigned int contentSizeDidChange:1;
        unsigned int willEndDraggingWithVelocity:1;
    } _delegateRespondsToSelector;
    _Bool _shouldTuckTopVerticalScrollingContainerItem;
    MusicClientContext *_clientContext;
    id <MusicVerticalScrollingContainerViewControllerDelegate> _delegate;
    long long _keyboardDismissMode;
    NSArray *_verticalScrollingContainerItems;
}

@property(nonatomic) _Bool shouldTuckTopVerticalScrollingContainerItem; // @synthesize shouldTuckTopVerticalScrollingContainerItem=_shouldTuckTopVerticalScrollingContainerItem;
@property(copy, nonatomic) NSArray *verticalScrollingContainerItems; // @synthesize verticalScrollingContainerItems=_verticalScrollingContainerItems;
@property(nonatomic) long long keyboardDismissMode; // @synthesize keyboardDismissMode=_keyboardDismissMode;
@property(nonatomic) __weak id <MusicVerticalScrollingContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_willBeginAnimatedInvalidation;
- (void)_updateLayoutOfVisibleCollectionViewCells;
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;
- (void)_updateContentOffsetForTucking;
- (id)_parentCellForItem:(id)arg1;
- (void)_notifyDidLayoutSubviewsIfReady;
- (void)_didFinishAnimatedInvalidation;
- (_Bool)isOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1;
- (void)endOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (struct CGPoint)contentOffsetForVerticalScrollingContainerItem:(id)arg1;
- (void)beginOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1 toValue:(double)arg2;
@property(readonly, nonatomic, getter=isPerformingLayout) _Bool performingLayout;
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) UICollectionView *containerCollectionView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)verticalScrollingContainerItemContextRequestsContentSizeUpdate:(id)arg1;
- (long long)contentOffsetProxyingPolicyForVerticalScrollingContainerItemContext:(id)arg1;
- (void)verticalScrollingContainerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)verticalScrollingContainerCollectionViewContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerCollectionViewCell:(id)arg1 didUpdateBounds:(struct CGRect)arg2 withPreviousBounds:(struct CGRect)arg3;
- (id)contentScrollView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
