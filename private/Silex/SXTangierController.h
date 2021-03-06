//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/STTextTangierInteractiveCanvasControllerDataSource-Protocol.h>
#import <Silex/STTextTangierInteractiveCanvasControllerDelegate-Protocol.h>
#import <Silex/SXTextComponentLayoutHosting-Protocol.h>
#import <Silex/SXTextSelecting-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableSet, NSString, STScrollView, STTangierRepDirectLayerHostProvider, STTangierTextRenderCollector, STTextTangierCanvasViewController, STTextTangierDocumentRoot, STTextTangierInteractiveCanvasController, SXViewport, TSKDocumentRoot, TSWPSelection, UIView;
@protocol OS_dispatch_semaphore, SXTangierControllerDelegate;

@interface SXTangierController : NSObject <STTextTangierInteractiveCanvasControllerDelegate, STTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, SXTextComponentLayoutHosting, SXTextSelecting>
{
    STTextTangierDocumentRoot *_documentRoot;
    _Bool _enclosingCanvasScrolling;
    _Bool _rebuildFlows;
    _Bool _preventScrollViewDidScrollReentrance;
    _Bool _disableClippingForTiles;
    _Bool _performedInitialLayoutAndRender;
    id <SXTangierControllerDelegate> _delegate;
    STTextTangierCanvasViewController *_cvc;
    STTextTangierInteractiveCanvasController *_icc;
    SXViewport *_viewport;
    STScrollView *_scrollView;
    unsigned long long _initialSubviewCount;
    STTangierTextRenderCollector *_textRenderCollector;
    STTangierRepDirectLayerHostProvider *_directLayerHostProvider;
    UIView *_underRepsHost;
    UIView *_aboveRepsHost;
    UIView *_overlayRepsHost;
    TSWPSelection *_storedSelection;
    NSMutableSet *_presentedTextViews;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSMutableSet *presentedTextViews; // @synthesize presentedTextViews=_presentedTextViews;
@property(nonatomic) _Bool performedInitialLayoutAndRender; // @synthesize performedInitialLayoutAndRender=_performedInitialLayoutAndRender;
@property(retain, nonatomic) TSWPSelection *storedSelection; // @synthesize storedSelection=_storedSelection;
@property(nonatomic) _Bool disableClippingForTiles; // @synthesize disableClippingForTiles=_disableClippingForTiles;
@property(nonatomic) _Bool preventScrollViewDidScrollReentrance; // @synthesize preventScrollViewDidScrollReentrance=_preventScrollViewDidScrollReentrance;
@property(readonly, nonatomic) UIView *overlayRepsHost; // @synthesize overlayRepsHost=_overlayRepsHost;
@property(readonly, nonatomic) UIView *aboveRepsHost; // @synthesize aboveRepsHost=_aboveRepsHost;
@property(readonly, nonatomic) UIView *underRepsHost; // @synthesize underRepsHost=_underRepsHost;
@property(readonly, nonatomic) STTangierRepDirectLayerHostProvider *directLayerHostProvider; // @synthesize directLayerHostProvider=_directLayerHostProvider;
@property(readonly, nonatomic) STTangierTextRenderCollector *textRenderCollector; // @synthesize textRenderCollector=_textRenderCollector;
@property(nonatomic) unsigned long long initialSubviewCount; // @synthesize initialSubviewCount=_initialSubviewCount;
@property(nonatomic) _Bool rebuildFlows; // @synthesize rebuildFlows=_rebuildFlows;
@property(retain, nonatomic) STScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) STTextTangierInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property(readonly, nonatomic) STTextTangierCanvasViewController *cvc; // @synthesize cvc=_cvc;
@property(nonatomic) __weak id <SXTangierControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnclosingCanvasScrolling) _Bool enclosingCanvasScrolling; // @synthesize enclosingCanvasScrolling=_enclosingCanvasScrolling;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (id)layoutDescriptionForComponent:(id)arg1;
- (void)endSelection;
@property(readonly, nonatomic) _Bool shouldClipToScrollViewBoundsInVisibleBounds;
- (id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3;
- (_Bool)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1;
- (void)didTransitionToPresented;
- (void)willTransitionToPresented;
- (id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(struct CGRect)arg2;
- (void)updateInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
@property(readonly, nonatomic) _Bool isCanvasInteractive;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1;
- (void)interactiveCanvasControllerWillStartInteraction:(id)arg1;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)_fixLayoutOffsets;
- (void)interactiveCanvasControllerDidStopScrolling:(id)arg1;
- (void)interactiveCanvasControllerDidScroll:(id)arg1;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(_Bool)arg6;
- (struct CGRect)visibleBounds;
- (id)stringForLookupItemForInteractiveCanvasController:(id)arg1;
- (id)topLevelLayersForInteractiveCanvasController:(id)arg1;
- (id)topLevelRepsForInteractiveCanvasController:(id)arg1;
- (void)updateHUD;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGPoint)pointForCharacterAtIndex:(unsigned long long)arg1 inComponentWithIndetifier:(id)arg2;
- (id)scrollPositionForVisibleRectWithComponentRect:(struct CGRect)arg1;
- (void)setUnscaledCanvasRect:(struct CGRect)arg1;
- (void)updateCanvasSize:(struct CGSize)arg1 forComponentViews:(id)arg2;
- (void)clearSelection;
- (void)didStopPresentingTextView:(id)arg1;
- (void)didStartPresentingTextView:(id)arg1;
- (void)dealloc;
- (void)teardown;
- (void)updatePresentationState;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowEditMenuToAppear;
@property(readonly, nonatomic) _Bool allowTextEditingToBegin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool interactiveCanvasControllerAllowsHyperlinkInteraction;
@property(readonly, nonatomic) _Bool isPrintingCanvas;
@property(readonly, nonatomic) _Bool shouldPopKnobsOutsideEnclosingScrollView;
@property(readonly, nonatomic) _Bool shouldResizeCanvasToScrollView;
@property(readonly, nonatomic) _Bool shouldShowInstructionalText;
@property(readonly, nonatomic) _Bool shouldShowTextOverflowGlyphs;
@property(readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property(readonly, nonatomic) _Bool spellCheckingSupported;
@property(readonly, nonatomic) _Bool spellCheckingSuppressed;
@property(readonly) Class superclass;

@end

