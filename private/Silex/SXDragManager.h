//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/UIDragInteractionDelegate-Protocol.h>

@class NSString, UIDragInteraction;
@protocol SXDragManagerDataSource;

@interface SXDragManager : NSObject <UIDragInteractionDelegate>
{
    _Bool _enabled;
    id <SXDragManagerDataSource> _dataSource;
    unsigned long long _sharingPolicy;
    UIDragInteraction *_dragInteraction;
}

@property(readonly, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(readonly, nonatomic) unsigned long long sharingPolicy; // @synthesize sharingPolicy=_sharingPolicy;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <SXDragManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)dragSession:(id)arg1 containsDragItemWithIdentifier:(id)arg2;
- (id)dragItemForObject:(id)arg1 withSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)itemsForSession:(id)arg1 atLocation:(struct CGPoint)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)dealloc;
- (id)initWithSharingPolicy:(unsigned long long)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

