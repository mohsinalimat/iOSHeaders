//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKInternalDrawingViewDelegate-Protocol.h>
#import <PencilKit/PKSelectionDelegate-Protocol.h>
#import <PencilKit/UIDropInteractionDelegate-Protocol.h>

@class CHVisualizationManager, NSString, PKController, PKDrawing, PKInk, PKInkPicker, PKInternalDrawingView, PKRecognitionOverlayView, PKRendererController, PKSelectionController, UIGestureRecognizer, UIImage;
@protocol PKCanvasViewDelegate, PKSelectionDelegate;

@interface PKCanvasView : UIView <PKInternalDrawingViewDelegate, PKSelectionDelegate, UIDropInteractionDelegate>
{
    _Bool _layerFixedPixelSize;
    _Bool _wantsThickerInks;
    _Bool __maintainsTransformsOnLayout;
    _Bool _visualizationsEnabled;
    double _fixedDrawingScale;
    id <PKCanvasViewDelegate> _delegate;
    PKInkPicker *_managedInkPicker;
    UIImage *_backgroundImage;
    PKRecognitionOverlayView *_overlayView;
    PKSelectionController *_selectionController;
    PKInternalDrawingView *_drawingView;
    id <PKSelectionDelegate> _selectionViewDelegate;
    struct CGSize _fixedPixelSize;
}

@property(nonatomic) __weak id <PKSelectionDelegate> selectionViewDelegate; // @synthesize selectionViewDelegate=_selectionViewDelegate;
@property(nonatomic) _Bool visualizationsEnabled; // @synthesize visualizationsEnabled=_visualizationsEnabled;
@property(retain, nonatomic) PKInternalDrawingView *drawingView; // @synthesize drawingView=_drawingView;
@property(nonatomic) _Bool _maintainsTransformsOnLayout; // @synthesize _maintainsTransformsOnLayout=__maintainsTransformsOnLayout;
@property(retain, nonatomic) PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) PKRecognitionOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) PKInkPicker *managedInkPicker; // @synthesize managedInkPicker=_managedInkPicker;
@property(nonatomic) __weak id <PKCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool wantsThickerInks; // @synthesize wantsThickerInks=_wantsThickerInks;
@property(readonly, nonatomic) _Bool _layerFixedPixelSize; // @synthesize _layerFixedPixelSize;
@property(readonly, nonatomic) double _fixedDrawingScale; // @synthesize _fixedDrawingScale;
@property(readonly, nonatomic) struct CGSize _fixedPixelSize; // @synthesize _fixedPixelSize;
- (void).cxx_destruct;
- (void)applyCommand:(id)arg1 toDrawing:(id)arg2;
- (void)resetSelectedStrokeStateForRenderer;
- (void)toggleSelectedStrokes:(id)arg1 hide:(_Bool)arg2 inDrawing:(id)arg3;
- (void)performUndo:(id)arg1;
- (struct CGAffineTransform)imageTransform;
- (id)keyCommands;
@property(readonly, nonatomic) _Bool hasCurrentSelection;
- (id)drawingForLiveAttachment;
- (_Bool)liveDrawingIsAtEndOfDocument;
- (struct CGPoint)closestPointForPastedSelectionRect:(struct CGRect)arg1 withDrawing:(id *)arg2;
- (id)drawingForSelectionRect:(struct CGRect)arg1;
- (_Bool)containsDrawingUUID:(id)arg1;
- (_Bool)isValidDropPointForStrokes:(struct CGPoint)arg1;
- (struct CGPoint)pointInStrokeSpace:(struct CGPoint)arg1 inDrawing:(id)arg2;
- (void)selectionRefreshWithChangeToDrawing:(id)arg1;
- (id)selectionTopView;
- (struct CGAffineTransform)selectionDrawingTransform;
- (struct CGPoint)selectionOffsetForDrawing:(id)arg1;
- (struct CGPoint)selectionOffsetForLiveDrawing;
@property(readonly, nonatomic) CHVisualizationManager *_recognitionVisualizationManager;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)simulateHIDPoints:(id)arg1;
- (_Bool)canBeginDrawingWithTouch:(id)arg1;
- (void)willBeginDrawingWithTouch:(id)arg1;
- (void)didFinishRenderingStroke:(id)arg1;
- (void)setIsDrawing:(_Bool)arg1;
- (void)renderingDidFinish;
- (void)drawingDidChange:(id)arg1;
- (void)_updateVisualizationSupport;
@property(nonatomic) SEL drawingUndoSelector;
@property(nonatomic) __weak id drawingUndoTarget;
- (void)setOpaque:(_Bool)arg1;
- (void)_drawingDisplay;
- (void)_setNeedsDrawingDisplay;
@property(readonly, nonatomic) PKRendererController *_rendererController;
@property(readonly, nonatomic) PKController *_drawingController;
- (void)imageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (struct CGImage *)image;
- (void)eraseAll;
- (void)drawStrokeWithPath:(struct CGPath *)arg1;
- (void)_setDrawing:(id)arg1 tiles:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setDrawing:(id)arg1 alreadyRenderedDrawing:(id)arg2 imageForAlreadyRenderedDrawing:(id)arg3 fullyRenderedCompletionBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) PKDrawing *drawing;
- (void)setHidden:(_Bool)arg1;
@property(copy, nonatomic) PKInk *ink;
- (double)layerContentScale;
@property(nonatomic) _Bool disableWideGamut;
@property(readonly, nonatomic) _Bool isDrawing;
@property(readonly, nonatomic) _Bool isRendering;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(nonatomic) struct CGAffineTransform strokeTransform;
@property(nonatomic) struct CGAffineTransform drawingTransform;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_setFixedPointSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)_setFixedPixelSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)windowDidResize:(id)arg1;
@property(readonly, nonatomic) UIView *selectionView;
@property(readonly, nonatomic, getter=_pinchGestureRecognizer) UIGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic, getter=_drawingGestureRecognizer) UIGestureRecognizer *drawingGestureRecognizer;
- (void)pickInk;
- (void)layoutSubviews;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)initDrawingView;
- (void)_setup;
- (struct CGSize)_drawingSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 fixedPixelSize:(struct CGSize)arg2 drawingScale:(double)arg3 layerFixedPixelSize:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 fixedPixelSize:(struct CGSize)arg2 drawingScale:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 selectionController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

