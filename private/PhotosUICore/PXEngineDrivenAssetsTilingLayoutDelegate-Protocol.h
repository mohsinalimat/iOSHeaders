//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXEngineDrivenAssetsTilingLayout;

@protocol PXEngineDrivenAssetsTilingLayoutDelegate <NSObject>

@optional
- (struct CGSize)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 contentTileSize:(struct CGSize)arg3;
- (struct CGRect)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (double)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 zPositionForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (double)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)engineDrivenLayoutReferenceSizeDidChange:(PXEngineDrivenAssetsTilingLayout *)arg1;
@end
