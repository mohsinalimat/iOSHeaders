//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXCollectionsDataSource;

@interface PXCollectionsDataSourceManager : PXSectionedDataSourceManager
{
}

- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;

// Remaining properties
@property(readonly, nonatomic) PXCollectionsDataSource *dataSource; // @dynamic dataSource;

@end

