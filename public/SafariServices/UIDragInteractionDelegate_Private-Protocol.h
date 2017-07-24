//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/UIDragInteractionDelegate-Protocol.h>

@class UIDragInteraction, UIDragItem, UIGestureRecognizer, UIView;
@protocol UIDragSession;

@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>

@optional
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForSession:(id <UIDragSession>)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 competingGestureRecognizerShouldDelayLift:(UIGestureRecognizer *)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 canExcludeCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 shouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)_dragInteraction:(UIDragInteraction *)arg1 liftAnimationDidChangeDirection:(long long)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 shouldCancelOnAppDeactivationWithDefault:(_Bool)arg2;
- (_Bool)_dragInteractionAllowsDragOverridingMasterSwitch:(UIDragInteraction *)arg1;
- (UIView *)_dragInteraction:(UIDragInteraction *)arg1 viewToSnapshotItem:(UIDragItem *)arg2;
@end

