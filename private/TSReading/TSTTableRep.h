//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPTextHostRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>
#import <TSReading/UITextFieldDelegate-Protocol.h>

@class CALayer, CAShapeLayer, NSMutableArray, NSSet, NSString, TSDCanvasView, TSDEditorController, TSDKnobTracker, TSDTilingLayer, TSTAnimation, TSTCellRegion, TSTEditingState, TSTLayout, TSTMasterLayout, TSTSearchReference, TSTSelectionDragController, TSTTableCellTextEditingRep, TSTTableInfo, TSTTableModel, TSTTableReferences, TSTTableSelection, TSWPHyperlinkField, TSWPStorage, TSWPTextEditing;
@protocol TSTCanvasReferenceController, TSTTableAnimationController, TSTTableChromeProvider, TSTTableKnobTrackerVisitorProtocol, TSTTableRepDelegate;

@interface TSTTableRep : TSWPTextHostRep <TSDTilingLayerDelegate, UITextFieldDelegate>
{
    struct CGRect mCanvasVisibleRect;
    struct CGRect mSearchSelectionBounds;
    TSDTilingLayer *mOverlayTableName;
    TSDTilingLayer *mOverlayFrozenHeaderCorner;
    TSDTilingLayer *mOverlayFrozenHeaderRows;
    TSDTilingLayer *mOverlayFrozenHeaderColumns;
    CALayer *mOverlayFrozenHeaderRowsMask;
    CALayer *mOverlayFrozenHeaderColumnsMask;
    CALayer *mOverlayFrozenHeaderTableBodyMask;
    CALayer *mOverlayFrozenHeaderTableNameMask;
    double mCurrentScreenScale;
    CDStruct_5f1f7aa9 mDirtyCellRange;
    _Bool mRecursivelyDrawingInContext;
    NSMutableArray *mAnimationStack;
    id <TSTTableAnimationController> mAnimationController;
    TSTTableCellTextEditingRep *mContainedTextEditingRep;
    TSWPTextEditing *mTableNameTextEditing;
    CDStruct_0441cfb5 mControlCellID;
    CDStruct_0441cfb5 mRatingsDragCellID;
    id <TSTTableChromeProvider> mTableChrome;
    TSTTableReferences *mReferences;
    CAShapeLayer *mHighlightedHyperlinkLayer;
    _Bool mIsAspectOperationInProgress;
    _Bool mIsZoomOperationInProgress;
    _Bool mIsZoomToEditOperationInProgress;
    CDStruct_5f1f7aa9 mZoomToEditVisibleCellRange;
    CAShapeLayer *mFindSelectionHighlightLayer;
    TSTTableSelection *mSourceFillSelection;
    TSTTableSelection *mTargetFillSelection;
    _Bool mWPEndedTableNameEditing;
    _Bool _settingSelection;
    TSTSelectionDragController *mCellDragController;
    _Bool mDragByHandleOnly;
    _Bool mSelectionUsesBezierPath;
    _Bool mSelectsCellOnInitialTap;
    _Bool mUsesWholeChromeResizer;
    id <TSTCanvasReferenceController> mCanvasReferenceController;
    id <TSTTableRepDelegate> mDelegate;
    TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *mVisitorKnobTracker;
    NSSet *mVisibleFillKnobs;
    CDStruct_0441cfb5 mEditingHyperlinkCellID;
    TSWPStorage *mHyperlinkParentStorage;
    _Bool mHyperlinkModified;
    _Bool mInspectingHyperlinkInEditingStorage;
    TSWPHyperlinkField *mHyperlinkField;
    CAShapeLayer *mCellEditingMaskLayer;
}

+ (Class)tableRepDelegateClass;
@property(readonly, nonatomic) _Bool isZoomToEditOperationInProgress; // @synthesize isZoomToEditOperationInProgress=mIsZoomToEditOperationInProgress;
@property(readonly, nonatomic) TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *visitorKnobTracker; // @synthesize visitorKnobTracker=mVisitorKnobTracker;
@property(nonatomic) CDStruct_0441cfb5 ratingsDragCellID; // @synthesize ratingsDragCellID=mRatingsDragCellID;
@property(nonatomic) TSTSelectionDragController *cellDragController; // @synthesize cellDragController=mCellDragController;
@property(readonly, nonatomic) id <TSTTableRepDelegate> delegate; // @synthesize delegate=mDelegate;
@property(readonly, nonatomic) id <TSTTableChromeProvider> tableChrome; // @synthesize tableChrome=mTableChrome;
@property(nonatomic) id <TSTTableAnimationController> animationController; // @synthesize animationController=mAnimationController;
@property(readonly, nonatomic) id <TSTCanvasReferenceController> canvasReferenceController; // @synthesize canvasReferenceController=mCanvasReferenceController;
@property(readonly, copy) NSString *description;
- (struct CGRect)boundsForResizeGuideUI;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (void)p_editingDidEnd;
- (void)p_hideSelectionLayers;
- (struct CGPath *)p_newPathForSearchReference:(id)arg1;
- (id)p_textImageForPath:(struct CGPath *)arg1 shouldPulsate:(_Bool)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (int)tilingMode;
- (_Bool)canDrawInParallel;
- (_Bool)mustDrawOnMainThreadForInteractiveCanvas;
- (_Bool)canDrawInBackgroundDuringScroll;
- (void)endDragInsertFromPalette;
- (void)beginDragInsertFromPalette;
- (_Bool)canDrawTilingLayerInBackground:(id)arg1;
- (void)invalidateFrozenHeaders;
- (void)validateFrozenHeaderTableBodyMask;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderCorner;
- (struct CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)p_frozenHeaderOverlayLayers;
- (void)validateTableName;
- (id)p_tableNameOverlayLayers;
- (id)additionalLayersUnderLayer;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
@property(readonly, nonatomic) TSTAnimation *currentAnimation;
- (void)orientationDidChange:(id)arg1;
- (void)invalidateComments;
- (void)invalidateAnnotationColor;
- (void)p_invalidateCellCommentBadges;
- (void)dirtyCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)setNeedsDisplayInCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)invalidateTableName;
- (void)invalidateCellRange:(CDStruct_5f1f7aa9)arg1 fittingRange:(CDStruct_5f1f7aa9)arg2 invalidateSize:(_Bool)arg3;
- (void)invalidateCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)invalidateSelection;
- (void)updateDynamicModeForEditingSpillText;
- (void)screenScaleDidChange;
- (void)viewScaleDidChange;
- (_Bool)isFullyVisibleWithBorder:(int)arg1;
- (void)validateVisibleRect;
- (void)validateStrokesInEditingSpillingTextRange;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)updateFromLayout;
- (id)editorSelection;
- (void)contentsRectForCellRangeAcrossSpaces:(CDStruct_5f1f7aa9)arg1 contentsCenterInfo:(CDStruct_7bd98050 *)arg2 canvasFrame:(struct CGRect *)arg3 contentsRect:(struct CGRect *)arg4;
- (struct CGRect)boundsForCellSelection:(CDStruct_0441cfb5)arg1;
- (struct CGRect)canvasBoundsForCellRange:(CDStruct_5f1f7aa9)arg1;
- (struct CGRect)deviceBoundsForCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)isDraggable;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;
- (void)invalidateEditingCell;
- (void)asyncPostTextChangedInRange:(CDStruct_5f1f7aa9)arg1 strokeRange:(CDStruct_5f1f7aa9)arg2;
- (_Bool)handlesEditMenu;
- (_Bool)shouldCommitPendingTextEdit;
- (_Bool)shouldRestartTextEditing;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)dealloc;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (struct CGRect)layerFrameInScaledCanvas;
- (id)repForDragging;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSTCellRegion *selectionRegion;
@property(readonly, nonatomic) CALayer *layerForRep;
@property(readonly, nonatomic) struct CGRect canvasVisibleRect;
@property(readonly, nonatomic) struct CGAffineTransform transformFromCanvas;
@property(readonly, nonatomic) struct CGAffineTransform transformToCanvas;
@property(readonly, nonatomic) TSDEditorController *editorController;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
@property(readonly, nonatomic) TSTLayout *tableLayout;
@property(readonly, nonatomic) TSTEditingState *editingState;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;

// Remaining properties
@property(retain, nonatomic) TSTSearchReference *activeSearchReference; // @dynamic activeSearchReference;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

