//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDragAnimating-Protocol.h>

@class NSIndexPath, NSString, UIDragItem, UIDragPreviewTarget, _UIDropAnimationHandlers;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDropCoordinatorItem : NSObject <UIDragAnimating>
{
    _Bool _shouldRemainInHierarchy;
    int _kind;
    NSIndexPath *_destinationIndexPath;
    UIDragItem *_dragItem;
    UIDragPreviewTarget *_target;
    _UIDropAnimationHandlers *_animationHandlers;
    CDUnknownBlockType _previewParametersProvider;
}

@property(copy, nonatomic) CDUnknownBlockType previewParametersProvider; // @synthesize previewParametersProvider=_previewParametersProvider;
@property(retain, nonatomic) _UIDropAnimationHandlers *animationHandlers; // @synthesize animationHandlers=_animationHandlers;
@property(copy, nonatomic) UIDragPreviewTarget *target; // @synthesize target=_target;
@property(nonatomic) int kind; // @synthesize kind=_kind;
@property(nonatomic) __weak UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property(nonatomic) _Bool shouldRemainInHierarchy; // @synthesize shouldRemainInHierarchy=_shouldRemainInHierarchy;
@property(retain, nonatomic) NSIndexPath *destinationIndexPath; // @synthesize destinationIndexPath=_destinationIndexPath;
- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2 placeholderConfiguration:(id)arg3;
- (id)initWithDragItem:(id)arg1 target:(id)arg2;
- (id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

