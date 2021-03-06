//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSARenderingExporter.h>

#import <iWorkImport/TSDCanvasDelegate-Protocol.h>

@class KNOffscreenController, KNPdfHyperlinkController, KNSlideNode, NSArray, NSMutableArray, NSOrderedSet, NSString;
@protocol TSDCanvasProxyDelegate;

__attribute__((visibility("hidden")))
@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate>
{
    KNSlideNode *mCurrentSlideNode;
    NSMutableArray *mCurrentSlidesOnPage;
    unsigned long long mCurrentBuildIndex;
    KNOffscreenController *mOffscreenController;
    KNPdfHyperlinkController *mHyperlinkController;
    long long mPrintLayout;
    _Bool mPrintingBuilds;
    _Bool mPrintingBackgrounds;
    _Bool mPrintingBorders;
    _Bool mPrintingSlideNumbers;
    _Bool mPrintingDate;
    _Bool mPrintingSkippedSlides;
    _Bool mPrintingSelectedSlides;
    _Bool mPrintingPageMargins;
    _Bool mPrintingDraftQuality;
    unsigned long long mSlidesPerPage;
    unsigned long long mCurrentPage;
    NSString *mPrintTitle;
    double mPageMargin;
    NSOrderedSet *mSelectedSlideNodes;
    id mPrintView;
}

@property(copy, nonatomic) NSOrderedSet *selectedSlideNodes; // @synthesize selectedSlideNodes=mSelectedSlideNodes;
@property(copy, nonatomic) NSString *printTitle; // @synthesize printTitle=mPrintTitle;
@property(nonatomic) id printView; // @synthesize printView=mPrintView;
@property(nonatomic) double pageMargin; // @synthesize pageMargin=mPageMargin;
@property(nonatomic, getter=isPrintingPageMargins) _Bool printingPageMargins; // @synthesize printingPageMargins=mPrintingPageMargins;
@property(nonatomic) unsigned long long slidesPerPage; // @synthesize slidesPerPage=mSlidesPerPage;
@property(nonatomic, getter=isPrintingSelectedSlides) _Bool printingSelectedSlides; // @synthesize printingSelectedSlides=mPrintingSelectedSlides;
@property(nonatomic, getter=isPrintingDraftQuality) _Bool printingDraftQuality; // @synthesize printingDraftQuality=mPrintingDraftQuality;
@property(nonatomic, getter=isPrintingSkippedSlides) _Bool printingSkippedSlides; // @synthesize printingSkippedSlides=mPrintingSkippedSlides;
@property(nonatomic, getter=isPrintingDate) _Bool printingDate; // @synthesize printingDate=mPrintingDate;
@property(nonatomic, getter=isPrintingSlideNumbers) _Bool printingSlideNumbers; // @synthesize printingSlideNumbers=mPrintingSlideNumbers;
@property(nonatomic, getter=isPrintingBorders) _Bool printingBorders; // @synthesize printingBorders=mPrintingBorders;
@property(nonatomic, getter=isPrintingBackgrounds) _Bool printingBackgrounds; // @synthesize printingBackgrounds=mPrintingBackgrounds;
@property(nonatomic, getter=isPrintingBuilds) _Bool printingBuilds; // @synthesize printingBuilds=mPrintingBuilds;
@property(nonatomic) long long printLayout; // @synthesize printLayout=mPrintLayout;
@property(readonly, nonatomic) unsigned long long currentBuildIndex; // @synthesize currentBuildIndex=mCurrentBuildIndex;
@property(retain, nonatomic) KNSlideNode *currentSlideNode; // @synthesize currentSlideNode=mCurrentSlideNode;
@property(retain, nonatomic) KNOffscreenController *offscreenController; // @synthesize offscreenController=mOffscreenController;
- (id)quickLookSlideNodes;
- (long long)pageIndexFromQuickLookSlideNode:(id)arg1;
- (void)enableRenderAllContent;
- (void)setOptions:(id)arg1;
- (void)drawInView:(id)arg1 rect:(struct CGRect)arg2;
@property(readonly, nonatomic) _Bool usesViewForDrawing;
@property(readonly, nonatomic) unsigned long long currentSlideNumber;
- (void)addAnchorPointForSlide:(id)arg1 context:(struct CGContext *)arg2;
- (_Bool)drawImageForSlideNode:(id)arg1 andEvent:(unsigned long long)arg2 slideSize:(struct CGSize)arg3 intoRect:(struct CGRect)arg4 context:(struct CGContext *)arg5 createPage:(_Bool)arg6;
- (void)drawSlideNumberForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(struct CGRect)arg3 context:(struct CGContext *)arg4 position:(long long)arg5;
- (void)drawNSStringDateForRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawDateForRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
@property(readonly, nonatomic) double spaceForSlideNumbers;
@property(readonly, nonatomic) double heightOfPrintedText;
- (double)progressForCurrentPage;
- (void)drawBorderForRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
@property(readonly, nonatomic) NSArray *slidesForPrinting;
- (id)slideIndexesToPrint;
@property(readonly, nonatomic) unsigned long long rangeEnd;
@property(readonly, nonatomic) unsigned long long rangeStart;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (unsigned long long)pageCount;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)currentInfos;
- (struct CGRect)boundsRect;
- (_Bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id *)arg4;
- (_Bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDocumentRoot:(id)arg1;
- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)isPrintingCanvas;
- (id)documentRoot;
- (id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2;
- (unsigned long long)p_slideNumberForSlideNode:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

