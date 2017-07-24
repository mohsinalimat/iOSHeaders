//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextDraggable-Protocol.h>

@protocol UITextDragSupporting <UITextDraggable>
- (void)draggingFinished;
- (void)draggingStarted;
- (_Bool)allowsDraggingAttachments;
- (_Bool)allowsEditingTextAttributes;

@optional
- (_Bool)_shouldObscureInput;
- (void)performCancelAnimations;
- (void)didGenerateCancelPreview:(id)arg1;
- (id)willGenerateCancelPreview;
@end

