//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class HFWallpaperSlice;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes
{
    HFWallpaperSlice *_blurredWallpaperSlice;
    struct CGRect _normalizedWallpaperRect;
}

@property(retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // @synthesize blurredWallpaperSlice=_blurredWallpaperSlice;
@property(nonatomic) struct CGRect normalizedWallpaperRect; // @synthesize normalizedWallpaperRect=_normalizedWallpaperRect;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

