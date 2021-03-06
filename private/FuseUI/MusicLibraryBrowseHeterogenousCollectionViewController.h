//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseCollectionViewController.h>

@class MusicEntityValueContext, MusicLibraryBrowseHeterogenousCollectionViewConfiguration, MusicSectionEntityValueContext, NSMutableDictionary;

@interface MusicLibraryBrowseHeterogenousCollectionViewController : MusicLibraryBrowseCollectionViewController
{
    MusicEntityValueContext *_itemEntityValueContext;
    NSMutableDictionary *_layoutMetricsPerSection;
    MusicSectionEntityValueContext *_sectionEntityValueContext;
}

- (void).cxx_destruct;
- (id)_sectionEntityValueContextForIndex:(unsigned long long)arg1;
- (id)_layoutMetricsForCollectionViewContentDescriptor:(id)arg1;
- (void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (id)_entityValueContextAtIndexPath:(id)arg1;
- (id)layoutMetricsForSection:(unsigned long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionViewTintColorDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectAddButtonForCell:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_invalidateLayoutMetrics;
- (id)_layoutMetrics;
- (id)initWithLibraryViewConfiguration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MusicLibraryBrowseHeterogenousCollectionViewConfiguration *libraryViewConfiguration; // @dynamic libraryViewConfiguration;

@end

