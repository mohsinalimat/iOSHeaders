//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKRenderingExporter-Protocol.h>

@class NSString, TSADocumentRoot, TSDBitmapRenderingQualityInfo, TSDImager, TSUProgressContext;
@protocol OS_dispatch_queue, TSARenderingExporterDelegate;

__attribute__((visibility("hidden")))
@interface TSARenderingExporter : NSObject <TSKRenderingExporter>
{
    TSADocumentRoot *mDocumentRoot;
    TSDImager *mImager;
    NSObject<OS_dispatch_queue> *mImagerAccessLock;
    NSObject<TSARenderingExporterDelegate> *mRenderingExporterDelegate;
    _Bool mIsCancelled;
    _Bool mIsQuit;
    _Bool mPaginate;
    _Bool mDoesDrawAllPages;
    TSUProgressContext *mProgressContext;
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
}

@property(retain) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (_Bool)paginate;
- (void)setPaginate:(_Bool)arg1;
- (unsigned long long)pageCount;
- (double)progressForCurrentPage;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;
- (id)bitmapRenderingQualityInfo;
- (void)performBlockWithImager:(CDUnknownBlockType)arg1;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)setInfosToCurrentPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (_Bool)incrementPage;
- (void)teardown;
- (void)setup;
- (_Bool)isQuit;
- (void)quit;
- (_Bool)isCancelled;
- (void)cancel;
- (_Bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id *)arg4;
- (_Bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (_Bool)p_exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id *)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(_Bool *)arg2;
- (void)drawAllPagesWithContext:(struct CGContext *)arg1 returnSuccess:(_Bool *)arg2;
- (void)waitForRecalcToFinish;
- (void)p_drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(_Bool *)arg2 createPage:(_Bool)arg3;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 imager:(id)arg2;
- (id)p_renderingExporterDelegate;
- (id)documentRoot;
- (double)totalProgess;
- (void)finalizeContext:(struct CGContext *)arg1;
- (id)currentInfos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

