//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/PXPeopleStripCollectionViewCellDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, PXPeopleDataSource, PXPeopleStripCollectionViewCell;
@protocol PXPeopleStripCollectionViewControllerDelegate;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching, PXPeopleStripCollectionViewCellDataSource>
{
    id <PXPeopleStripCollectionViewControllerDelegate> _delegate;
    PXPeopleDataSource *_dataSource;
    PXPeopleStripCollectionViewCell *_preloadedCell;
}

@property(retain, nonatomic) PXPeopleStripCollectionViewCell *preloadedCell; // @synthesize preloadedCell=_preloadedCell;
@property(nonatomic) __weak PXPeopleDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXPeopleStripCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)nameStringForPeople:(id)arg1 withWidth:(double)arg2;
- (id)currentLabelFont;
- (double)verticalSpacingForFaceAndText;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)contentWidthChanged;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

