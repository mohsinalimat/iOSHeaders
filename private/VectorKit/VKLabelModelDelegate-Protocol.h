//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class VKLabelModel, VKMapTile, VKTile;

@protocol VKLabelModelDelegate
- (void)labelModelDidLayoutLabels:(VKLabelModel *)arg1;
- (void)labelModel:(VKLabelModel *)arg1 selectedLabelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)labelModel:(VKLabelModel *)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (VKMapTile *)labelModel:(VKLabelModel *)arg1 mapTileForTile:(VKTile *)arg2 layer:(unsigned long long)arg3;
@end

