//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKitUI/NSObject-Protocol.h>

@class TVCarouselView, UICollectionViewCell;

@protocol TVCarouselViewDataSource <NSObject>
- (UICollectionViewCell *)carouselView:(TVCarouselView *)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(TVCarouselView *)arg1;
@end

