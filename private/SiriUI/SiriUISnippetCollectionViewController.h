//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUISnippetViewController.h>

#import <SiriUI/UICollectionViewDataSource-Protocol.h>
#import <SiriUI/UICollectionViewDelegate-Protocol.h>

@class NSString, UICollectionView, UICollectionViewLayout;

@interface SiriUISnippetCollectionViewController : SiriUISnippetViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    struct CGRect _previousBounds;
    _Bool _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
    UICollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
