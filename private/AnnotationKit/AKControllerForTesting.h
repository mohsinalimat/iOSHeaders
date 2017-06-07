//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKController.h>

@class AKActionController, AKAttributeController, AKIntelligentSketchController, AKMainEventHandler, AKModelController, AKSignatureModelController, AKToolController, AKUndoController, UIView;
@protocol AKControllerDelegateProtocol;

@interface AKControllerForTesting : AKController
{
    id <AKControllerDelegateProtocol> _testingDelegate;
    AKModelController *_testingModelController;
    AKActionController *_testingActionController;
    AKToolController *_testingToolController;
    AKAttributeController *_testingAttributeController;
    AKUndoController *_testingUndoController;
    AKMainEventHandler *_testingMainEventHandler;
    UIView *_testingToolbarView;
    UIView *_testingOverlayView;
    AKIntelligentSketchController *_testingIntelligentSketchController;
    AKSignatureModelController *_testingSignatureModelController;
}

+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
@property(retain) AKSignatureModelController *testingSignatureModelController; // @synthesize testingSignatureModelController=_testingSignatureModelController;
@property(retain) AKIntelligentSketchController *testingIntelligentSketchController; // @synthesize testingIntelligentSketchController=_testingIntelligentSketchController;
@property(retain) UIView *testingOverlayView; // @synthesize testingOverlayView=_testingOverlayView;
@property(retain) UIView *testingToolbarView; // @synthesize testingToolbarView=_testingToolbarView;
@property(retain) AKMainEventHandler *testingMainEventHandler; // @synthesize testingMainEventHandler=_testingMainEventHandler;
@property(retain) AKUndoController *testingUndoController; // @synthesize testingUndoController=_testingUndoController;
@property(retain) AKAttributeController *testingAttributeController; // @synthesize testingAttributeController=_testingAttributeController;
@property(retain) AKToolController *testingToolController; // @synthesize testingToolController=_testingToolController;
@property(retain) AKActionController *testingActionController; // @synthesize testingActionController=_testingActionController;
@property(retain) AKModelController *testingModelController; // @synthesize testingModelController=_testingModelController;
@property(retain) id <AKControllerDelegateProtocol> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
- (void).cxx_destruct;
- (id)signatureModelController;
- (id)intelligentSketchController;
- (id)mainEventHandler;
- (id)undoController;
- (id)attributeController;
- (id)toolController;
- (id)actionController;
- (id)overlayView;
- (id)toolbarView;
- (id)modelController;
- (id)delegate;
- (void)reloadVisibleToolbarItemIdentifiers;
- (_Bool)validateSender:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (void)setOverlayShouldPixelate:(_Bool)arg1;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (id)init;

@end

