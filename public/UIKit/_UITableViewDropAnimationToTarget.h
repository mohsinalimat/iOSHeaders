//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITableViewDropAnimation.h>

@class UIDragPreviewTarget, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation
{
    _Bool _didSearchForCell;
    UIDragPreviewTarget *_target;
    UITableViewCell *_cell;
}

@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool didSearchForCell; // @synthesize didSearchForCell=_didSearchForCell;
@property(retain, nonatomic) UIDragPreviewTarget *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)cellForTargetContainerInTableView:(id)arg1;
- (id)initWithDragItem:(id)arg1 target:(id)arg2;

@end

