//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDragInteractionDelegate_Private-Protocol.h>
#import <UIKit/UIDropInteractionDelegate-Protocol.h>
#import <UIKit/UITextDragDropSupport-Protocol.h>
#import <UIKit/UITextPasteSessionDelegate-Protocol.h>
#import <UIKit/_UITextPasteProgressSupport-Protocol.h>

@class NSArray, NSMapTable, NSString, UIDragInteraction, UIDragItem, UIDropInteraction, UITargetedDragPreview, UITextDraggableGeometrySameViewDropOperationResult, UITextDropProposal, UITextPasteController, UITextPosition, UITextRange, UIView, _UITextDragCaretView;
@protocol UIDragSession, UIDropSession, UITextDragSupporting><UITextDropSupporting, UITextDraggableGeometry, UITextDraggableGeometrySameViewDropOperation, UITextPasteSession;

__attribute__((visibility("hidden")))
@interface UITextDragAssistant : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate, _UITextPasteProgressSupport, UITextPasteSessionDelegate, UITextDragDropSupport>
{
    struct {
        unsigned int viewSupportsGhostedRanges:1;
        unsigned int shouldRestoreFirstResponder:1;
        unsigned int draggingOngoing:1;
        unsigned int handledCancelAnimation:1;
        unsigned int restoreNonEditableAfterDrop:1;
        unsigned int forceEditable:1;
        unsigned int delegateSupportsProposalForDrop:1;
        unsigned int delegateSupportsSessionDidUpdate:1;
        unsigned int dropPerformed:1;
    } _flags;
    id <UITextDraggableGeometry> _geometry;
    id <UIDragSession> _currentDragSession;
    UIDragInteraction *_currentDragInteraction;
    NSArray *_draggedTextRanges;
    UITextRange *_initialDragSelectedRange;
    NSArray *_movedItemsInView;
    NSMapTable *_targetedPreviewProviders;
    NSMapTable *_previewProviders;
    id <UIDropSession> _currentDropSession;
    _UITextDragCaretView *_dropCaret;
    UITextPosition *_currentDropPosition;
    UIDragItem *_topmostDropItem;
    UITargetedDragPreview *_topmostDropPreview;
    UITextDropProposal *_currentDropProposal;
    UITextRange *_preDropSelectionRange;
    id <UITextDraggableGeometrySameViewDropOperation> _sameViewDropOperation;
    UITextDraggableGeometrySameViewDropOperationResult *_sameViewDropOperationResult;
    UITextPasteController *_dropPasteController;
    id <UITextPasteSession> _dropPasteSession;
    UIView<UITextDragSupporting><UITextDropSupporting> *_view;
    UIDragInteraction *_dragInteraction;
    UIDropInteraction *_dropInteraction;
}

@property(readonly, nonatomic) __weak UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(readonly, nonatomic) __weak UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(readonly, nonatomic) __weak UIView<UITextDragSupporting><UITextDropSupporting> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)_shrinkingPreview:(id)arg1 toPosition:(id)arg2;
- (id)_previewForTopmostItem:(id)arg1 withDefault:(id)arg2;
- (id)_previewForIrrelevantItemFromPreview:(id)arg1;
- (void)_applyOptionsToGeometry;
@property(readonly, nonatomic) id <UITextDraggableGeometry> geometry;
- (id)_closestPositionToPoint:(struct CGPoint)arg1;
- (id)_textPasteSelectableRangeForResult:(id)arg1 fromRange:(id)arg2;
- (long long)_textPasteRangeBehavior;
- (_Bool)_textPasteShouldBlockPasting;
- (double)_textPasteBlockingTimeout;
- (void)_performDropToPosition:(id)arg1 inSession:(id)arg2;
- (_Bool)_supportsSameViewDropOperations;
- (void)_performSameViewOperation:(id)arg1;
- (void)_prepareSameViewOperation:(unsigned long long)arg1 forItems:(id)arg2 toRange:(id)arg3;
- (id)_dropRangeForPosition:(id)arg1;
- (void)_cleanupDrop;
- (id)_suggestedProposalForPosition:(id)arg1 inSession:(id)arg2 allowCancel:(_Bool)arg3;
- (void)_updateDropCaretToPosition:(id)arg1;
- (id)_dropRequestWithPosition:(id)arg1 inSession:(id)arg2;
- (void)_viewBecomeFirstResponderIfNeededAfterDrop;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)_ghostDraggedTextRanges:(_Bool)arg1;
- (void)_clearDraggedTextRanges;
- (void)_forDraggedTextRangesDo:(CDUnknownBlockType)arg1;
- (void)_addDraggedTextRangeForItems:(id)arg1 defaultRange:(id)arg2;
- (_Bool)_hasDraggedTextRange:(id)arg1;
- (id)_containerViewForDropPreviews;
- (id)_containerViewForLiftPreviews;
- (id)_itemsForDraggedRange:(id)arg1;
- (void)_restoreResponderIfNeededForOperation:(unsigned long long)arg1;
- (void)_initializeDragSession:(id)arg1 withInteraction:(id)arg2;
- (id)_textRangeForDraggingFromPoint:(struct CGPoint)arg1;
- (id)_accessibilityDraggableRanges;
- (void)notifyTextInteraction;
- (_Bool)accessibilityCanDrag;
- (_Bool)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
@property(readonly, nonatomic, getter=isDropActive) _Bool dropActive;
@property(readonly, nonatomic, getter=isDragActive) _Bool dragActive;
- (void)installDropInteractionIfNeeded;
- (void)installDragInteractionIfNeeded;
- (id)initWithView:(id)arg1 geometry:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)initWithDraggableOnlyView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
