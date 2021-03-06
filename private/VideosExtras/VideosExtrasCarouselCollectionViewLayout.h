//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <VideosExtras/VideosExtrasCarouselCollectionViewLayout-Protocol.h>

@class NSDictionary;

@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout <VideosExtrasCarouselCollectionViewLayout>
{
    NSDictionary *_cachedLayoutAttributes;
    long long _indexOfVisibleItemForBoundsChange;
    struct CGSize _cachedCollectionViewContentSize;
}

@property(nonatomic) long long indexOfVisibleItemForBoundsChange; // @synthesize indexOfVisibleItemForBoundsChange=_indexOfVisibleItemForBoundsChange;
@property(nonatomic) struct CGSize cachedCollectionViewContentSize; // @synthesize cachedCollectionViewContentSize=_cachedCollectionViewContentSize;
@property(retain, nonatomic) NSDictionary *cachedLayoutAttributes; // @synthesize cachedLayoutAttributes=_cachedLayoutAttributes;
- (void).cxx_destruct;
- (double)_spaceBetweenItemsForCollectionViewBounds:(struct CGRect)arg1;
- (double)_spaceBetweenItems;
- (double)_neighboringItemVisibleWidth;
- (long long)_indexOfVisibleItemForContentOffset:(struct CGPoint)arg1 collectionViewBounds:(struct CGRect)arg2;
- (struct CGPoint)_contentOffsetForItemAtIndex:(long long)arg1 collectionViewBounds:(struct CGRect)arg2;
- (double)itemWidth;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1;
- (unsigned long long)indexOfVisibleItem;
- (void)finalizeAnimatedBoundsChange;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end

