//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFDocument, PDFPageBackgroundManager, PDFPageViewController, PDFRenderingProperties, PDFView, UIScrollView;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewControllerPrivate : NSObject
{
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    PDFPageViewController *activePageView;
    PDFPageBackgroundManager *pageBackgroundManager;
    double minScale;
    double maxScale;
    _Bool displaysRTL;
    UIScrollView *scrollView;
    _Bool showTextSelectionHandles;
}

- (void).cxx_destruct;

@end

