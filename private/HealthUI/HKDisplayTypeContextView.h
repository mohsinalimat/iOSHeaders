//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/HKDisplayTypeContextCollectionViewCellDelegate-Protocol.h>
#import <HealthUI/UICollectionViewDataSource-Protocol.h>
#import <HealthUI/UICollectionViewDelegate-Protocol.h>

@class HKDisplayTypeContextItem, HKHorizontalFlowLayout, NSArray, NSLayoutConstraint, NSString, UICollectionView;
@protocol HKDisplayTypeContextViewDelegate;

@interface HKDisplayTypeContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextCollectionViewCellDelegate>
{
    UICollectionView *_collectionView;
    HKHorizontalFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionHeightConstraint;
    HKDisplayTypeContextItem *_selectedDisplayTypeContextItem;
    NSArray *_displayTypeContextItems;
    id <HKDisplayTypeContextViewDelegate> _delegate;
}

@property(nonatomic) __weak id <HKDisplayTypeContextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *displayTypeContextItems; // @synthesize displayTypeContextItems=_displayTypeContextItems;
- (void).cxx_destruct;
- (void)didTapOnInfoButtonForCollectionViewCell:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)selectedDisplayTypeContextItem;
- (struct CGSize)intrinsicContentSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

