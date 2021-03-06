//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMapTable, NSMutableOrderedSet;

@interface PKFreeTransformGestureRecognizer : UIGestureRecognizer
{
    _Bool _allowSingleTouchDrag;
    _Bool _axisAligned;
    _Bool _canBegin;
    _Bool _isScaling;
    _Bool _isPanning;
    double _startThreshold;
    double _scaleThreshold;
    double _cancelThreshold;
    unsigned long long _allowedPanEdges;
    double _minScale;
    double _maxScale;
    double _scaleDamping;
    double _previousScale;
    NSMutableOrderedSet *_touches;
    double _deltaScale;
    NSMapTable *_touchStartLocations;
    NSMapTable *_actualTouchStartLocations;
    struct CGAffineTransform _accumulatedTransform;
}

@property(retain, nonatomic) NSMapTable *actualTouchStartLocations; // @synthesize actualTouchStartLocations=_actualTouchStartLocations;
@property(retain, nonatomic) NSMapTable *touchStartLocations; // @synthesize touchStartLocations=_touchStartLocations;
@property(nonatomic) struct CGAffineTransform accumulatedTransform; // @synthesize accumulatedTransform=_accumulatedTransform;
@property(nonatomic) double deltaScale; // @synthesize deltaScale=_deltaScale;
@property(nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(nonatomic) _Bool isScaling; // @synthesize isScaling=_isScaling;
@property(nonatomic) _Bool canBegin; // @synthesize canBegin=_canBegin;
@property(readonly, nonatomic) NSMutableOrderedSet *touches; // @synthesize touches=_touches;
@property(nonatomic) double previousScale; // @synthesize previousScale=_previousScale;
@property(nonatomic) double scaleDamping; // @synthesize scaleDamping=_scaleDamping;
@property(nonatomic) double maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) double minScale; // @synthesize minScale=_minScale;
@property(nonatomic) _Bool axisAligned; // @synthesize axisAligned=_axisAligned;
@property(nonatomic) _Bool allowSingleTouchDrag; // @synthesize allowSingleTouchDrag=_allowSingleTouchDrag;
@property(nonatomic) unsigned long long allowedPanEdges; // @synthesize allowedPanEdges=_allowedPanEdges;
@property(nonatomic) double cancelThreshold; // @synthesize cancelThreshold=_cancelThreshold;
@property(nonatomic) double scaleThreshold; // @synthesize scaleThreshold=_scaleThreshold;
@property(nonatomic) double startThreshold; // @synthesize startThreshold=_startThreshold;
- (void).cxx_destruct;
- (void)clearTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesMovedPastScaleThreshold:(double)arg1;
- (_Bool)touchesMovedPastThreshold:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 rejectExcessTouches:(_Bool)arg3;
- (void)resetAndAccumulateTransform;
- (void)reset;
- (void)resetStartingTouches;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, nonatomic) struct CGAffineTransform unscaledFreeTransform;
@property(readonly, nonatomic) struct CGAffineTransform freeTransform;
- (struct CGAffineTransform)clampTransform:(struct CGAffineTransform)arg1 minScale:(double)arg2 maxScale:(double)arg3;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) _Bool scaleIsShrinking;
@property(readonly, nonatomic) _Bool scaleIsGrowing;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

