//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSMutableArray, NSUUID, NSUndoManager, PKDrawing, PKInternalDrawingView, PKModifyStrokesCommand, UIView;

@protocol PKSelectionDelegate
- (void)resetSelectedStrokeStateForRenderer;
- (void)applyCommand:(PKModifyStrokesCommand *)arg1 toDrawing:(PKDrawing *)arg2;
- (PKInternalDrawingView *)drawingView;
- (PKDrawing *)drawingForLiveAttachment;
- (_Bool)liveDrawingIsAtEndOfDocument;
- (void)didBeginDraggingSelection;
- (_Bool)isValidDropPointForStrokes:(struct CGPoint)arg1;
- (struct CGPoint)closestPointForPastedSelectionRect:(struct CGRect)arg1 withDrawing:(id *)arg2;
- (PKDrawing *)drawingForSelectionRect:(struct CGRect)arg1;
- (PKDrawing *)drawingForUUID:(NSUUID *)arg1;
- (_Bool)containsDrawingUUID:(NSUUID *)arg1;
- (struct CGPoint)pointInStrokeSpace:(struct CGPoint)arg1 inDrawing:(PKDrawing *)arg2;
- (void)selectionRefreshWithChangeToDrawings:(NSMutableArray *)arg1;
- (UIView *)selectionTopView;
- (void)scrollContent:(struct CGPoint)arg1;
- (void)toggleSelectedStrokes:(NSArray *)arg1 hide:(_Bool)arg2 inDrawing:(PKDrawing *)arg3;
- (SEL)drawingUndoSelector;
- (id)drawingUndoTarget;
- (NSUndoManager *)undoManager;
- (struct CGAffineTransform)imageTransform;
- (struct CGAffineTransform)selectionDrawingTransform;
- (struct CGPoint)selectionOffsetForDrawing:(PKDrawing *)arg1;
@end

