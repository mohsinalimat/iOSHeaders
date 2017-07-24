//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PKDrawing, PKRendererController, PKStrokeGenerator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, PKControllerDelegate;

@interface PKController : NSObject
{
    NSObject<OS_dispatch_queue> *_previewQueue;
    _Bool _cachedImageValid;
    struct CGImage *_cachedImage;
    _Bool _imageNeedsSave;
    _Bool _liveInteraction;
    _Bool _isSuspended;
    _Bool _previewsSuspended;
    _Bool _liveDrawing;
    NSObject<PKControllerDelegate> *_delegate;
    NSMutableArray *_renderedStrokes;
    PKRendererController *_rendererController;
    NSArray *_additionalStrokes;
    NSArray *_hideAdditionalStrokes;
    PKDrawing *_drawing;
    NSObject<OS_dispatch_semaphore> *_drawingSemaphore;
    NSObject<OS_dispatch_semaphore> *_interactSemaphore;
    NSObject<OS_dispatch_queue> *_interactQueue;
    NSObject<OS_dispatch_queue> *_suspendQueue;
    struct CGSize _pixelSize;
    struct CGSize _actualSize;
}

+ (void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id *)arg3 redrawAllInRect:(struct CGRect *)arg4;
@property _Bool liveDrawing; // @synthesize liveDrawing=_liveDrawing;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suspendQueue; // @synthesize suspendQueue=_suspendQueue;
@property(nonatomic) _Bool previewsSuspended; // @synthesize previewsSuspended=_previewsSuspended;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *interactQueue; // @synthesize interactQueue=_interactQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *interactSemaphore; // @synthesize interactSemaphore=_interactSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *drawingSemaphore; // @synthesize drawingSemaphore=_drawingSemaphore;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) NSArray *hideAdditionalStrokes; // @synthesize hideAdditionalStrokes=_hideAdditionalStrokes;
@property(retain, nonatomic) NSArray *additionalStrokes; // @synthesize additionalStrokes=_additionalStrokes;
@property(readonly, nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property _Bool liveInteraction; // @synthesize liveInteraction=_liveInteraction;
@property(nonatomic) _Bool imageNeedsSave; // @synthesize imageNeedsSave=_imageNeedsSave;
@property(retain, nonatomic) PKRendererController *rendererController; // @synthesize rendererController=_rendererController;
@property(retain, nonatomic) NSMutableArray *renderedStrokes; // @synthesize renderedStrokes=_renderedStrokes;
@property(retain, nonatomic) NSObject<PKControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(CDUnknownBlockType)arg2;
- (void)saveImageImmediatelyIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveImageIfNeeded;
- (struct CGImage *)_image;
- (struct CGImage *)image;
- (void)imageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect)arg1 selectedStrokes:(id)arg2 hideSelected:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawingChanged;
- (void)_drawingChanged;
- (void)_didRenderStrokes:(id)arg1;
- (void)_renderStrokes:(id)arg1 renderIntermediateSteps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderStrokes:(id)arg1 intoTile:(id)arg2;
- (void)renderTilesIntoTiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderTiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderStrokes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(struct CGRect)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeStrokesInRect:(struct CGRect)arg1 from:(id)arg2;
- (void)applyCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setStrokes:(id)arg1 hidden:(_Bool)arg2 applyTransform:(struct CGAffineTransform)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setStrokes:(id)arg1 hidden:(_Bool)arg2 applyTransform:(struct CGAffineTransform)arg3;
- (void)setStrokes:(id)arg1 hidden:(_Bool)arg2;
- (void)_setStrokes:(id)arg1 hidden:(_Bool)arg2 applyTransform:(struct CGAffineTransform)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_applyCommand:(id)arg1 interactCompletion:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_saveAndUpdateFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDrawingFrom:(id)arg1;
- (void)updateDrawing;
- (void)_saveImageWithState:(long long)arg1;
- (void)_saveImage;
- (void)_restoreValidStateCompletion:(CDUnknownBlockType)arg1;
- (void)updateOrientation:(long long)arg1;
- (void)setTransientOrientation:(long long)arg1;
- (void)performAsyncInteractBlock:(CDUnknownBlockType)arg1;
- (void)_renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (_Bool)_updateFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearCachedImage;
- (void)_setCachedImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)_getImages;
- (void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setDrawing:(id)arg1 tiles:(id)arg2 setupComplete:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)_loadInitialDrawing:(id)arg1 withImage:(struct CGImage *)arg2 andMask:(struct CGImage *)arg3;
- (void)resumeDrawing;
- (void)suspendDrawingImmediately:(_Bool)arg1;
- (void)suspendDrawing;
- (void)resumePreviews;
- (void)suspendPreviews;
- (void)renderPreviewDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didEndLiveInteraction;
- (void)didStartLiveInteractionWith:(id)arg1;
- (void)releaseLiveDrawingClaimForDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)claimLiveDrawingForDelegate:(id)arg1;
@property(readonly, nonatomic) PKStrokeGenerator *inputController;
- (void)teardown;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;
- (id)init;

@end

