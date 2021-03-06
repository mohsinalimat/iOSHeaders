//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class CADisplayLink, NSDictionary, NSIndexPath;
@protocol CKBrowserSelectionFlowLayoutDelegate;

@interface CKBrowserSelectionFlowLayout : UICollectionViewFlowLayout
{
    _Bool _inDisplayLinkAnimation;
    _Bool _insideDisplayLinkCallback;
    unsigned long long _numberOfItemsPerRow;
    unsigned long long _numberOfColumns;
    NSDictionary *_layoutInfo;
    CADisplayLink *_displayLink;
    NSIndexPath *_indexPathToDelete;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSIndexPath *indexPathToDelete; // @synthesize indexPathToDelete=_indexPathToDelete;
@property(nonatomic) _Bool insideDisplayLinkCallback; // @synthesize insideDisplayLinkCallback=_insideDisplayLinkCallback;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSDictionary *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic, getter=isInDisplayLinkAnimation) _Bool inDisplayLinkAnimation; // @synthesize inDisplayLinkAnimation=_inDisplayLinkAnimation;
@property(nonatomic) unsigned long long numberOfItemsPerRow; // @synthesize numberOfItemsPerRow=_numberOfItemsPerRow;
- (void).cxx_destruct;
- (_Bool)canDeletePluginAtIndexPath:(id)arg1;
- (_Bool)iconShouldJitterAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)displayLinkFired:(id)arg1;
- (void)prepareScrollViewForShowAnimation:(id)arg1;
- (void)scrollView:(id)arg1 didScrollByDeltaX:(double)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (struct CGRect)frameForCellAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateLayout;
- (double)flowLayoutHeight;
- (struct CGSize)_layoutContentSize;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (void)updateMarginsAndInsetsForTraitCollection:(id)arg1;
- (_Bool)_itemsFitsInBounds:(struct CGRect)arg1 inset:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)_sectionInsetsForPhone:(id)arg1;
@property(readonly, nonatomic) id <CKBrowserSelectionFlowLayoutDelegate> delegate;
- (void)stopDisplayLink;
- (void)startDisplayLink;

@end

