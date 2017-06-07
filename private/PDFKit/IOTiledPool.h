//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOTiledPoolPrivate;

@interface IOTiledPool : NSObject
{
    IOTiledPoolPrivate *_private;
}

+ (id)sharedPool;
- (void).cxx_destruct;
- (void)queryUsedTiles:(int *)arg1 andFreeTiles:(int *)arg2;
- (void)releaseIOTile:(id)arg1 shouldRecycle:(_Bool)arg2;
- (void)renderIOTileForRequest:(id)arg1;
- (void)requestIOTileForTarget:(id)arg1 forPage:(id)arg2 inPDFView:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect)arg5 transform:(struct CGAffineTransform)arg6 shouldAntiAlias:(_Bool)arg7;
- (void)_releaseTiles;
- (_Bool)saveBitmapFiles;
- (void)setSaveBitmapFiles:(_Bool)arg1;
- (_Bool)drawTileEdges;
- (void)setDrawTileEdges:(_Bool)arg1;
- (int)tileRenderType;
- (void)setTileRenderType:(int)arg1;
- (void)dealloc;
- (id)init;

@end

