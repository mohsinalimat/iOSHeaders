//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <UserNotificationsUIKit/UIPreviewInteractionDelegate-Protocol.h>

@class NSString, UIPreviewInteraction;

@interface NCPreviewInteractionGestureRecognizer : UIGestureRecognizer <UIPreviewInteractionDelegate>
{
    UIPreviewInteraction *_previewInteraction;
    struct CGPoint _initialLocation;
    double _transitionProgress;
}

@property(readonly, nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
- (void).cxx_destruct;
- (void)_cancelPreviewInteraction;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setState:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

