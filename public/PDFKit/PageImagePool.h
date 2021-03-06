//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/PDFPageDrawProgressCallback-Protocol.h>

@class PageImagePoolPrivate;

__attribute__((visibility("hidden")))
@interface PageImagePool : NSObject <PDFPageDrawProgressCallback>
{
    PageImagePoolPrivate *_private;
}

- (void).cxx_destruct;
- (_Bool)drawProgressCallback;
- (_Bool)_hasAnyImageAtPageIndex:(unsigned long long)arg1;
- (void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(_Bool)arg2;
- (int)_imageCount;
- (int)_inclusivePageRangeForQuality:(int)arg1;
- (int)_maxPageRange;
- (id)_pageImagesForQuality:(int)arg1;
- (void)_cleanup;
- (void)_drawPageImage:(int)arg1 forQuality:(int)arg2;
- (int)_expectedQualityAtPageIndex:(int)arg1;
- (_Bool)_findPageIndexNeedingUpdate:(int *)arg1 forQuality:(int *)arg2;
- (_Bool)_pageAtIndex:(int)arg1 isOfQuality:(int)arg2;
- (_Bool)_pagesInActiveRange:(int)arg1 areOfQuality:(int)arg2;
- (_Bool)_hasWork;
- (void)_update;
- (void)forceWebKitMainThread:(_Bool)arg1;
- (void)cancelPageImagePool;
- (void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (void)didRemovePageAtIndex:(unsigned long long)arg1;
- (void)didInsertPageAtIndex:(unsigned long long)arg1;
- (id)backgroundImageForPageIndex:(int)arg1;
- (void)forceUpdateWithDuration:(double)arg1 forActivePageIndex:(int)arg2;
- (void)forceUpdateWithDuration:(double)arg1;
- (void)setWillForceUpdateWithDuration;
- (void)updateActivePageIndex:(int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

