//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKCanvasViewDelegate-Protocol.h>
#import <PencilKit/PKSelectionDelegate-Protocol.h>
#import <PencilKit/UIDropInteractionDelegate_Private-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/UIScrollViewDelegate-Protocol.h>
#import <PencilKit/_UIScrollViewLayoutObserver-Protocol.h>
#import <PencilKit/_UIScrollViewScrollObserver-Protocol.h>

@class NSArray, NSString, PKCanvasView, PKDrawing, PKInk, PKInlineInkPicker, PKLinedPaper, PKSelectionController, UIButton, UIDropInteraction, UIScrollView, UITouch, _UITextAttachmentDrawingView;

@interface PKTiledView : UIView <UIScrollViewDelegate, PKCanvasViewDelegate, _UIScrollViewScrollObserver, _UIScrollViewLayoutObserver, PKSelectionDelegate, UIDropInteractionDelegate_Private, UIGestureRecognizerDelegate>
{
    UIDropInteraction *_dropInteraction;
    PKDrawing *_dirtyDrawing;
    _Bool _fingerDrawingEnabled;
    _Bool _isLayingOut;
    PKLinedPaper *_linedPaper;
    UIScrollView *_scrollView;
    PKCanvasView *_canvasView;
    double _tileWidth;
    double _tileHeight;
    long long _tileLevel;
    UIView *_gestureView;
    PKInlineInkPicker *_inkPicker;
    _UITextAttachmentDrawingView *_liveAttachment;
    PKDrawing *_isRenderingDrawing;
    UITouch *_drawingTouchThatHitNothing;
    PKDrawing *_createdDrawingForTouchThatHitNothing;
    _UITextAttachmentDrawingView *_standInEndAttachmentView;
    UIButton *_tapToRadarButton;
    PKSelectionController *_selectionController;
    NSArray *_additionalStrokes;
    NSArray *_hideAdditionalStrokes;
    struct CGPoint _lastContentOffset;
}

+ (id)newInlineDrawing;
+ (_Bool)showDebugOutlines;
@property(readonly, nonatomic) NSArray *hideAdditionalStrokes; // @synthesize hideAdditionalStrokes=_hideAdditionalStrokes;
@property(readonly, nonatomic) NSArray *additionalStrokes; // @synthesize additionalStrokes=_additionalStrokes;
@property(retain, nonatomic) PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) _Bool isLayingOut; // @synthesize isLayingOut=_isLayingOut;
@property(retain, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;
@property(retain, nonatomic) _UITextAttachmentDrawingView *standInEndAttachmentView; // @synthesize standInEndAttachmentView=_standInEndAttachmentView;
@property(retain, nonatomic) PKDrawing *createdDrawingForTouchThatHitNothing; // @synthesize createdDrawingForTouchThatHitNothing=_createdDrawingForTouchThatHitNothing;
@property(retain, nonatomic) UITouch *drawingTouchThatHitNothing; // @synthesize drawingTouchThatHitNothing=_drawingTouchThatHitNothing;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) __weak PKDrawing *isRenderingDrawing; // @synthesize isRenderingDrawing=_isRenderingDrawing;
@property(retain, nonatomic) _UITextAttachmentDrawingView *liveAttachment; // @synthesize liveAttachment=_liveAttachment;
@property(retain, nonatomic) PKInlineInkPicker *inkPicker; // @synthesize inkPicker=_inkPicker;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(nonatomic) long long tileLevel; // @synthesize tileLevel=_tileLevel;
@property(nonatomic) double tileHeight; // @synthesize tileHeight=_tileHeight;
@property(nonatomic) double tileWidth; // @synthesize tileWidth=_tileWidth;
@property(nonatomic, getter=isFingerDrawingEnabled) _Bool fingerDrawingEnabled; // @synthesize fingerDrawingEnabled=_fingerDrawingEnabled;
@property(retain, nonatomic) PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
- (void).cxx_destruct;
- (id)saveTempData:(id)arg1 name:(id)arg2;
- (void)appendPath:(id)arg1 attachmentString:(id)arg2;
- (void)_tapToRadarButtonTapped:(id)arg1;
- (void)_setupTapToRadarButton;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)_clearSelectionIfNecessary;
- (void)resetSelectedStrokeStateForRenderer;
- (void)toggleSelectedStrokes:(id)arg1 hide:(_Bool)arg2 inDrawing:(id)arg3;
- (void)applyCommand:(id)arg1 toDrawing:(id)arg2;
- (void)didBeginDraggingSelection;
- (void)scrollContent:(struct CGPoint)arg1;
- (id)drawingView;
- (id)drawingForLiveAttachment;
- (_Bool)liveDrawingIsAtEndOfDocument;
- (struct CGAffineTransform)imageTransform;
- (id)drawingForSelectionRect:(struct CGRect)arg1;
- (struct CGPoint)closestPointForPastedSelectionRect:(struct CGRect)arg1 withDrawing:(id *)arg2;
- (id)_attachmentForSelectionRect:(struct CGRect)arg1;
- (_Bool)containsDrawingUUID:(id)arg1;
- (_Bool)isValidDropPointForStrokes:(struct CGPoint)arg1;
- (struct CGPoint)pointInStrokeSpace:(struct CGPoint)arg1 inDrawing:(id)arg2;
- (void)_updateAttachmentHeightIfNecessaryForDrawing:(id)arg1;
- (void)selectionRefreshWithChangeToDrawing:(id)arg1;
- (id)selectionTopView;
- (struct CGAffineTransform)selectionDrawingTransform;
- (struct CGPoint)selectionOffsetForDrawing:(id)arg1;
- (struct CGPoint)selectionOffsetForLiveDrawing;
@property(readonly, nonatomic) _Bool hasSelection;
- (void)_updateHeightOfAttachmentIfNecessary:(id)arg1;
- (void)generateTile:(long long)arg1 inAttachment:(id)arg2 rendering:(_Bool)arg3;
- (id)tileForOffset:(long long)arg1 inAttachment:(id)arg2;
- (void)blitOldTilesIntoNewTiles;
- (void)updateTilesForVisibleRectRendering:(_Bool)arg1;
- (void)updateTilesForVisibleRect;
- (void)resizeTiles;
- (void)cancelTileGeneration;
- (void)_copyFromCanvas:(id)arg1 intoAttachment:(id)arg2 hideCanvas:(_Bool)arg3;
- (void)renderAttachment:(id)arg1 intoCanvas:(id)arg2 showing:(_Bool)arg3;
- (id)_visibleTilesForAttachment:(id)arg1 includePartiallyVisible:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)insertAttachmentIfAtEndOfDocument:(struct CGPoint)arg1;
- (struct CGRect)frameOfEndAttachment;
- (_Bool)hasEndAttachment;
- (id)hitAttachment:(struct CGPoint)arg1 includeEndAttachment:(_Bool)arg2;
- (id)hitAttachment:(struct CGPoint)arg1;
- (void)getDrawingTransform:(struct CGAffineTransform *)arg1 strokeTransform:(struct CGAffineTransform *)arg2 paperTransform:(struct CGAffineTransform *)arg3;
- (void)updateEndAttachment;
- (void)_layoutSubviews;
- (void)_didAddDrawingAttachmentView;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (double)drawingScale;
- (void)_hideCanvas;
- (id)_drawingForUUID:(id)arg1;
- (void)performUndoSelectionCommand:(id)arg1;
- (void)performUndoModifyStrokesCommand:(id)arg1;
- (void)performUndo:(id)arg1;
- (void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
- (void)_canvasView:(id)arg1 didFinishRenderingStrokeOnRenderQueue:(id)arg2 inDrawing:(id)arg3;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
- (id)attachmentForUUID:(id)arg1;
- (id)attachments;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)canBecomeFirstResponder;
@property(copy, nonatomic) PKInk *ink;
- (SEL)drawingUndoSelector;
- (id)drawingUndoTarget;
- (void)newCanvasView;
- (void)pickInk;
- (void)createInkPicker;
- (void)dealloc;
- (id)initInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

