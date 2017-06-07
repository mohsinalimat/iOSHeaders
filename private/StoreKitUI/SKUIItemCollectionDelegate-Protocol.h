//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIItem, SKUIItemCellLayout, SKUIItemCollectionController, SKUIScreenshot, UIImage;

@protocol SKUIItemCollectionDelegate <NSObject>
- (struct _NSRange)visibleItemRangeForItemCollectionController:(SKUIItemCollectionController *)arg1;
- (struct _NSRange)itemCollectionController:(SKUIItemCollectionController *)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (SKUIItemCellLayout *)itemCollectionController:(SKUIItemCollectionController *)arg1 cellLayoutForItemIndex:(long long)arg2;

@optional
- (_Bool)shouldCacheAheadWhenIdleForItemCollectionController:(SKUIItemCollectionController *)arg1;
- (SKUIScreenshot *)itemCollectionController:(SKUIItemCollectionController *)arg1 screenshotForItem:(SKUIItem *)arg2;
- (void)itemCollectionController:(SKUIItemCollectionController *)arg1 applyScreenshotImage:(UIImage *)arg2 toCellLayout:(SKUIItemCellLayout *)arg3;
@end

