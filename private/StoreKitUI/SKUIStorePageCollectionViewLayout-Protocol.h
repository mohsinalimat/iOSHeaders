//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionViewLayoutAttributes;

@protocol SKUIStorePageCollectionViewLayout <NSObject>
@property(nonatomic) _Bool rendersWithPerspective;
@property(nonatomic) _Bool rendersWithParallax;
@property(copy, nonatomic) NSArray *indexPathsForGradientItems;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property(copy, nonatomic) NSString *backdropGroupName;
- (NSArray *)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForUnpinnedItemAtIndexPath:(NSIndexPath *)arg1;
@end

