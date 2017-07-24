//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/UIDropInteractionDelegate-Protocol.h>

@class NSSet, NSString, UIDropInteraction, UIView;
@protocol MFDropTargetDelegate;

@interface MFDropTarget : NSObject <UIDropInteractionDelegate>
{
    struct {
        unsigned int respondsToCanDropDraggedItemsAtPoint;
        unsigned int respondsToDragEntered;
        unsigned int respondsToDragExited;
        unsigned int respondsToDragDidMoveToPoint;
        unsigned int respondsToDidDropItemsAtPoint;
    } _delegateFlags;
    NSSet *_acceptableUTIs;
    UIView *_targetView;
    id <MFDropTargetDelegate> _delegate;
    UIDropInteraction *_dropInteraction;
}

@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) __weak id <MFDropTargetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(copy, nonatomic) NSSet *acceptableUTIs; // @synthesize acceptableUTIs=_acceptableUTIs;
- (void).cxx_destruct;
- (void)_animateDropWithDropSession:(id)arg1;
- (void)_dropSessionEnded;
- (_Bool)_delegateCanDropItemsWithDropSession:(id)arg1;
- (_Bool)_delegateHandlesDrops;
- (void)_delegateDidDropItemsWithDropSession:(id)arg1;
- (_Bool)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)_updateDelegateFlags;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

