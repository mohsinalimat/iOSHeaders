//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView, UIViewPropertyAnimator, _UIInternalDraggingItem, _UIPortalView;
@protocol _UIDraggingItemVisualTarget;

__attribute__((visibility("hidden")))
@interface _UIDragSetDownAnimationItem : NSObject
{
    _Bool _hasStartedSpringAnimation;
    _Bool _reachedTarget;
    _Bool _done;
    _Bool _fastAnimation;
    _Bool _shouldDrivePropertyAnimator;
    _Bool _ignoreRetargeting;
    _Bool _requiresDefaultAnimation;
    _Bool _midwayToTarget;
    _Bool _almostToTarget;
    _Bool _portalHidden;
    int _animationCount;
    _UIInternalDraggingItem *_item;
    unsigned long long _droppedItemIndex;
    UIView *_retargetingContainerView;
    _UIPortalView *_retargetingContainerPortalView;
    UIView *_view;
    UIView *_componentsView;
    double _initialDistanceFromTargetFrame;
    id <_UIDraggingItemVisualTarget> _visualTarget;
    UIViewPropertyAnimator *_propertyAnimator;
    UIViewPropertyAnimator *_systemDefaultPropertyAnimator;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _targetUpdateHandler;
    CDUnknownBlockType _midpointHandler;
    CDUnknownBlockType _nearCompletionHandler;
    CDUnknownBlockType _updatedDroppedItemHandler;
    struct CGPoint _center;
    struct CGPoint _initialVelocity;
    struct CGPoint _initialTargetVelocity;
    struct CGRect _targetFrame;
}

@property(nonatomic, getter=isPortalHidden) _Bool portalHidden; // @synthesize portalHidden=_portalHidden;
@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) _Bool almostToTarget; // @synthesize almostToTarget=_almostToTarget;
@property(nonatomic) _Bool midwayToTarget; // @synthesize midwayToTarget=_midwayToTarget;
@property(nonatomic) _Bool requiresDefaultAnimation; // @synthesize requiresDefaultAnimation=_requiresDefaultAnimation;
@property(nonatomic) _Bool ignoreRetargeting; // @synthesize ignoreRetargeting=_ignoreRetargeting;
@property(nonatomic) _Bool shouldDrivePropertyAnimator; // @synthesize shouldDrivePropertyAnimator=_shouldDrivePropertyAnimator;
@property(nonatomic) _Bool fastAnimation; // @synthesize fastAnimation=_fastAnimation;
@property(nonatomic) struct CGPoint initialTargetVelocity; // @synthesize initialTargetVelocity=_initialTargetVelocity;
@property(nonatomic) struct CGPoint initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(copy, nonatomic) CDUnknownBlockType updatedDroppedItemHandler; // @synthesize updatedDroppedItemHandler=_updatedDroppedItemHandler;
@property(copy, nonatomic) CDUnknownBlockType nearCompletionHandler; // @synthesize nearCompletionHandler=_nearCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType midpointHandler; // @synthesize midpointHandler=_midpointHandler;
@property(copy, nonatomic) CDUnknownBlockType targetUpdateHandler; // @synthesize targetUpdateHandler=_targetUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIViewPropertyAnimator *systemDefaultPropertyAnimator; // @synthesize systemDefaultPropertyAnimator=_systemDefaultPropertyAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property(retain, nonatomic) id <_UIDraggingItemVisualTarget> visualTarget; // @synthesize visualTarget=_visualTarget;
@property(nonatomic) _Bool done; // @synthesize done=_done;
@property(nonatomic) _Bool reachedTarget; // @synthesize reachedTarget=_reachedTarget;
@property(nonatomic) _Bool hasStartedSpringAnimation; // @synthesize hasStartedSpringAnimation=_hasStartedSpringAnimation;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) double initialDistanceFromTargetFrame; // @synthesize initialDistanceFromTargetFrame=_initialDistanceFromTargetFrame;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic) UIView *componentsView; // @synthesize componentsView=_componentsView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) _UIPortalView *retargetingContainerPortalView; // @synthesize retargetingContainerPortalView=_retargetingContainerPortalView;
@property(retain, nonatomic) UIView *retargetingContainerView; // @synthesize retargetingContainerView=_retargetingContainerView;
@property(nonatomic) unsigned long long droppedItemIndex; // @synthesize droppedItemIndex=_droppedItemIndex;
@property(retain, nonatomic) _UIInternalDraggingItem *item; // @synthesize item=_item;
- (void).cxx_destruct;

@end

