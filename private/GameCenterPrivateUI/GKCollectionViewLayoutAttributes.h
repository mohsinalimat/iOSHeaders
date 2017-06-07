//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class GKSectionMetrics, GKSupplementaryViewMetrics;
@protocol UICollectionViewDataSource;

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _allSectionItemsVisible;
    _Bool _isPinned;
    _Bool _isPartOfGlobalPinningGroup;
    _Bool _doesAbutLeftOfCollectionView;
    double _unpinnedY;
    id <UICollectionViewDataSource> _dataSource;
    GKSectionMetrics *_sectionMetrics;
    GKSupplementaryViewMetrics *_supplementaryMetrics;
    unsigned long long _currentVisibleItemCount;
    unsigned long long _currentTotalItemCount;
    unsigned long long _maxTotalItemCount;
    double _leadingMargin;
    double _trailingMargin;
    unsigned long long _gridLayoutLocation;
}

@property(nonatomic) _Bool doesAbutLeftOfCollectionView; // @synthesize doesAbutLeftOfCollectionView=_doesAbutLeftOfCollectionView;
@property(nonatomic) unsigned long long gridLayoutLocation; // @synthesize gridLayoutLocation=_gridLayoutLocation;
@property(nonatomic) _Bool isPartOfGlobalPinningGroup; // @synthesize isPartOfGlobalPinningGroup=_isPartOfGlobalPinningGroup;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) unsigned long long maxTotalItemCount; // @synthesize maxTotalItemCount=_maxTotalItemCount;
@property(nonatomic) unsigned long long currentTotalItemCount; // @synthesize currentTotalItemCount=_currentTotalItemCount;
@property(nonatomic) unsigned long long currentVisibleItemCount; // @synthesize currentVisibleItemCount=_currentVisibleItemCount;
@property(retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics; // @synthesize supplementaryMetrics=_supplementaryMetrics;
@property(retain, nonatomic) GKSectionMetrics *sectionMetrics; // @synthesize sectionMetrics=_sectionMetrics;
@property(retain, nonatomic) id <UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double unpinnedY; // @synthesize unpinnedY=_unpinnedY;
@property(nonatomic) _Bool isPinned; // @synthesize isPinned=_isPinned;
@property(nonatomic) _Bool allSectionItemsVisible; // @synthesize allSectionItemsVisible=_allSectionItemsVisible;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

