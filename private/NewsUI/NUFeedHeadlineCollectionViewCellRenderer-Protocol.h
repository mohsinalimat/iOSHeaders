//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/NUFeedCollectionViewCellRenderer-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewCell;
@protocol FCHeadlineProviding;

@protocol NUFeedHeadlineCollectionViewCellRenderer <NUFeedCollectionViewCellRenderer>
- (UICollectionViewCell *)renderCollectionView:(UICollectionView *)arg1 renderedCellForHeadline:(id <FCHeadlineProviding>)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

