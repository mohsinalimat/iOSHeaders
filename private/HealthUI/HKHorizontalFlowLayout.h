//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout
{
    _Bool _snapsToItemBoundaries;
    _Bool _snapsToItemCenters;
}

+ (double)snapToBoundariesDecelerationRate;
@property(nonatomic) _Bool snapsToItemCenters; // @synthesize snapsToItemCenters=_snapsToItemCenters;
@property(nonatomic) _Bool snapsToItemBoundaries; // @synthesize snapsToItemBoundaries=_snapsToItemBoundaries;
@property(nonatomic) double trailingInset;
@property(nonatomic) double leadingInset;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)init;

@end

