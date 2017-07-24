//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import <PDFKit/PDFPageBackgroundManagerDelegate-Protocol.h>
#import <PDFKit/UIPageViewControllerDataSource-Protocol.h>
#import <PDFKit/UIPageViewControllerDelegate-Protocol.h>
#import <PDFKit/UIScrollViewDelegate-Protocol.h>

@class NSString, PDFDocumentViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewController : UIPageViewController <PDFPageBackgroundManagerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>
{
    PDFDocumentViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3;
- (id)backgroundImageForPage:(id)arg1 withQuality:(int *)arg2;
- (void)_updateCurrentPageViewController:(id)arg1;
- (id)findPageViewControllerForPageIndex:(long long)arg1;
- (id)_pageViewControllerCreate:(int)arg1;
- (id)_pageViewController:(id)arg1 nextViewController:(int)arg2 forViewController:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)hasBackgroundImage;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)document;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (id)pageForPoint:(struct CGPoint)arg1 nearest:(_Bool)arg2;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (void)willForceUpdate;
- (void)updateScrollViews;
- (id)scrollView;
- (void)setScrollViewScrollEnabled:(_Bool)arg1;
- (void)setDisplaysRTL:(_Bool)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (double)maxScaleFactor;
- (double)minScaleFactor;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;
- (double)autoScaleFactor;
- (void)setAutoScales:(_Bool)arg1;
- (id)currentPage;
- (void)goToPage:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3;
- (id)pageViews;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1 andNavigationOrientation:(long long)arg2 withRenderingProperties:(id)arg3 andOptions:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

