//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UITableViewPlaceholderContext-Protocol.h>

@class NSString, NSUUID, UIDragItem;
@protocol UIDragAnimating, _UITableViewPlaceholderContextDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDropPlaceholderContextImpl : NSObject <_UITableViewPlaceholderContext>
{
    NSString *_reuseIdentifier;
    double _rowHeight;
    CDUnknownBlockType _cellUpdateHandler;
    id <UIDragAnimating> _animator;
    NSUUID *_shadowUpdateIdentifier;
    id <_UITableViewPlaceholderContextDelegate> _delegate;
    UIDragItem *_dragItem;
}

@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property(nonatomic) __weak id <_UITableViewPlaceholderContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_shadowUpdateIdentifier, setter=_setShadowUpdateIdentifier:) NSUUID *shadowUpdateIdentifier; // @synthesize shadowUpdateIdentifier=_shadowUpdateIdentifier;
@property(retain, nonatomic, getter=_animator, setter=_setAnimator:) id <UIDragAnimating> animator; // @synthesize animator=_animator;
@property(copy, nonatomic) CDUnknownBlockType cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (_Bool)deletePlaceholder;
- (_Bool)commitInsertionWithDataSourceUpdates:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

