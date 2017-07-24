//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSOrderedSet, UIDragPreviewParameters, UITableViewCell, _UITableViewDropAnimationContainerView;
@protocol UIDragSession;

@protocol _UITableViewDragControllerDelegate <NSObject>
- (_Bool)_dragSessionIsRestrictedToDraggingApplication:(id <UIDragSession>)arg1;
- (_Bool)_dragSessionAllowsMoveOperation:(id <UIDragSession>)arg1;
- (void)_endAnimatingDropOfCell:(UITableViewCell *)arg1;
- (_UITableViewDropAnimationContainerView *)_beginAnimatingDropOfCell:(UITableViewCell *)arg1 isCanceling:(_Bool)arg2;
- (void)_dragSessionDidEnd:(id <UIDragSession>)arg1;
- (void)_dragSessionWillBegin:(id <UIDragSession>)arg1;
- (NSArray *)_itemsForAddingToDragSession:(id <UIDragSession>)arg1 atIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint)arg3;
- (NSArray *)_itemsForBeginningDragSession:(id <UIDragSession>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)_updateAppearanceOfVisibleRowsForDragState;
- (void)_animateDragCancelForCell:(UITableViewCell *)arg1;
- (void)_animateLiftOfRowsAtIndexPaths:(NSOrderedSet *)arg1;
- (void)_prepareToLiftRowsAtIndexPaths:(NSOrderedSet *)arg1;
- (UIDragPreviewParameters *)_dragPreviewParametersForIndexPath:(NSIndexPath *)arg1;
- (NSOrderedSet *)_rowsToIncludeInDragAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)_canBeginDragAtPoint:(struct CGPoint)arg1 indexPath:(NSIndexPath *)arg2;
@end

