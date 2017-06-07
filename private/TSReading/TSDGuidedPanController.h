//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDCanvasLayer, TSDCanvasView, TSDInteractiveCanvasController, UIScrollView;
@protocol TSDPanGuide;

@interface TSDGuidedPanController : NSObject
{
    TSDInteractiveCanvasController *_interactiveCanvasController;
    TSDCanvasView *_canvasView;
    TSDCanvasLayer *_canvasLayer;
    UIScrollView *_canvasScrollView;
    id <TSDPanGuide> _guide;
    struct CGPoint _startPoint;
    struct CGPoint _movement;
    struct CGPoint _velocity;
}

@property(retain, nonatomic) id <TSDPanGuide> guide; // @synthesize guide=_guide;
@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(nonatomic) struct CGPoint movement; // @synthesize movement=_movement;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) UIScrollView *canvasScrollView; // @synthesize canvasScrollView=_canvasScrollView;
@property(nonatomic) TSDCanvasLayer *canvasLayer; // @synthesize canvasLayer=_canvasLayer;
@property(nonatomic) TSDCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (void)p_didEnd;
- (void)p_willBegin;
- (id)p_convertContentLocation:(id)arg1 fromPlacement:(CDStruct_499be82c)arg2 toPlacement:(CDStruct_499be82c)arg3;
- (void)p_scrollToContentLocation:(id)arg1 placement:(CDStruct_499be82c)arg2;
- (struct CATransform3D)p_transformForContentLocation:(id)arg1 placement:(CDStruct_499be82c)arg2;
- (struct CGPoint)p_boundsOffsetForContentLocation:(id)arg1 placement:(CDStruct_499be82c)arg2;
- (id)p_currentContentLocationWithPlacement:(CDStruct_499be82c)arg1;
@property(readonly, nonatomic) CDStruct_499be82c centerPlusMovementContentPlacement;
@property(readonly, nonatomic) CDStruct_499be82c touchContentPlacement;
- (id)convertContentLocation:(id)arg1 fromPlacement:(CDStruct_499be82c)arg2 toPlacement:(CDStruct_499be82c)arg3;
- (void)handlePanGesture:(id)arg1;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

