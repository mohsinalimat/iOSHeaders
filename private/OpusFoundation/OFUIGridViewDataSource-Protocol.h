//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/NSObject-Protocol.h>

@class OFUIGridView, OFUIGridViewCell;

@protocol OFUIGridViewDataSource <NSObject>
- (OFUIGridViewCell *)gridView:(OFUIGridView *)arg1 cellAtIndex:(unsigned long long)arg2;
- (long long)numberOfCellsInGridView:(OFUIGridView *)arg1;

@optional
- (void)gridView:(OFUIGridView *)arg1 didRecycleCell:(OFUIGridViewCell *)arg2 atIndex:(unsigned long long)arg3;
- (void)gridView:(OFUIGridView *)arg1 willDisplayCell:(OFUIGridViewCell *)arg2 atIndex:(unsigned long long)arg3;
@end

