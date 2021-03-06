//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFPageSelectionLayerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageSelectionLayer : CALayer
{
    PDFPageSelectionLayerPrivate *_private;
}

- (void).cxx_destruct;
- (id)_createSelectionLollipop:(double)arg1 isLeftSide:(_Bool)arg2;
- (void)_generateSelectionIsFirstPage:(_Bool)arg1 isLastPage:(_Bool)arg2;
- (void)_updateHandleGraphics;
- (void)_updateGraphics;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (id)_hashRectTransformPair:(CDStruct_b93daf5b *)arg1;
- (id)_inactiveColor;
- (id)_activeColor;
- (void)_generateRects;
- (void)updateRotation;
- (id)selection;
- (void)setSelection:(id)arg1;
- (void)setDisplayBox:(long long)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

