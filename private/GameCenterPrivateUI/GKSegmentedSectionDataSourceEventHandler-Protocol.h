//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GKSegmentedSectionDataSource, GKSegmentedSectionHeaderView;

@protocol GKSegmentedSectionDataSourceEventHandler
- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;

@optional
- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 segmentedHeaderDidLoad:(GKSegmentedSectionHeaderView *)arg2;
@end

