//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@protocol SKUIScrollingSegmentedControllerCollectionViewDelegate;

@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView
{
    _Bool _performingLayout;
}

@property(readonly, nonatomic, getter=isPerformingLayout) _Bool performingLayout; // @synthesize performingLayout=_performingLayout;
- (void)layoutSubviews;

// Remaining properties
@property(nonatomic) id <SKUIScrollingSegmentedControllerCollectionViewDelegate> delegate; // @dynamic delegate;

@end

