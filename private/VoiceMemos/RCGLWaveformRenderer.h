//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/CAAnimationDelegate-Protocol.h>
#import <VoiceMemos/GLKViewDelegate-Protocol.h>
#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class CADisplayLink, CALayer, EAGLContext, NSString, NSTimer, RCUIConfiguration, RCWaveformDataSource, UIView;
@protocol RCGLWaveformRendererDelegate;

@interface RCGLWaveformRenderer : UIViewController <GLKViewDelegate, RCWaveformDataSourceObserver, CAAnimationDelegate>
{
    EAGLContext *_eaglContext;
    CADisplayLink *_displayLink;
    unsigned int _vertexBuffers[2];
    CDStruct_73a5d3ca _renderedTimeRange;
    _Bool _renderedTimeRangeIsApproximatedWaveform;
    CDStruct_73a5d3ca _highlightTimeRange;
    vector_ec52ae8c _waveformVertexData;
    unsigned long long _renderedWaveformVertices;
    unsigned int _shaderProgram;
    int _projectionUniform;
    int _modelviewUniform;
    int _foregroundColorUniform;
    int _highlightColorUniform;
    int _highlightColorTimelineRange;
    _Bool _buffersInitialized;
    _Bool _shadersInitialized;
    _Bool _preparedForRendering;
    _Bool _centerKeylineRendered;
    struct CGRect _lastViewportRect;
    double _cachedContentWidth;
    _Bool _contentWidthDirty;
    NSTimer *_displayLinkTerminationTimer;
    CALayer *_modelviewLayer;
    _Bool _isAnimatingModelview;
    _Bool _needsVisibleRangeRendering;
    _Bool _hasDisplayedPreGLContentCenterline;
    UIView *_preGLContentCenterline;
    _Bool _frequentUpdatesSegmentUpdatesExpectedHint;
    _Bool _paused;
    _Bool _activeDisplayLinkRequired;
    RCWaveformDataSource *_dataSource;
    id <RCGLWaveformRendererDelegate> _rendererDelegate;
    double _spacingWidth;
    double _dataPointWidth;
    RCUIConfiguration *_UIConfiguration;
    CDStruct_73a5d3ca _visibleTimeRange;
}

@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property(copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property(nonatomic) double dataPointWidth; // @synthesize dataPointWidth=_dataPointWidth;
@property(nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;
@property(nonatomic, getter=isActiveDisplayLinkRequired) _Bool activeDisplayLinkRequired; // @synthesize activeDisplayLinkRequired=_activeDisplayLinkRequired;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool frequentUpdatesSegmentUpdatesExpectedHint; // @synthesize frequentUpdatesSegmentUpdatesExpectedHint=_frequentUpdatesSegmentUpdatesExpectedHint;
@property(nonatomic) __weak id <RCGLWaveformRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property(retain, nonatomic) RCWaveformDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_teardownNotifications;
- (void)_setupNotifications;
- (unsigned int)_compileShaderOfType:(unsigned int)arg1 pathToSource:(id)arg2;
- (void)_performOrDispatchToMainThread:(CDUnknownBlockType)arg1;
- (id)_pathForShader:(id)arg1;
- (double)_timeForPixelOffset:(float)arg1;
- (double)_timeForPixelOffset:(float)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (float)_pixelOffsetForTime:(double)arg1;
- (float)_pixelsPerSecond;
- (float)_pixelsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_updateForegroundColor;
- (void)_updateClearColor;
- (void)_updateModelview;
- (void)_updateProjection;
- (_Bool)_currentViewportRequiresRenderingNewSegments;
- (CDStruct_73a5d3ca)_timeRangeToRenderForVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_renderCenterKeylineIfNeeded;
- (void)_renderVisibleTimeRangeImmediately;
- (void)_renderSegments:(id)arg1 timeRangeOfSegments:(CDStruct_73a5d3ca)arg2 isApproximatedWaveform:(_Bool)arg3;
- (void)_updateHighlightTimeRange;
- (CDStruct_73a5d3ca)_highlightTimeRange;
- (void)_clearRenderingState;
- (void)_draw:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_cancelScheduledTerminateDisplayLink;
- (void)_scheduleTerminateDisplayLink;
- (void)_performScheduledTerminateDisplayLink;
- (void)_stopRendering;
- (void)_startRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_setNeedsRendering;
- (void)_stopUpdating;
- (void)_startUpdating;
- (double)_nonCachedContentWidth;
- (void)_prepareForRendering;
- (void)_setupShaders;
- (void)_setupBuffers;
- (void)_setupGL;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)glkViewRenderingContextValidityDidChange:(id)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (id)rasterizeTimeRange:(CDStruct_73a5d3ca)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)timeAtHorizontalOffset:(double)arg1;
- (double)pointsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (double)horizontalOffsetAtTime:(double)arg1;
@property(readonly, nonatomic) double contentWidth;
- (void)setVisibleTimeRange:(CDStruct_73a5d3ca)arg1 withAnimationDuration:(double)arg2;
@property(nonatomic) CDStruct_73a5d3ca highlightTimeRange;
- (void)_stopShowingPreGLCenterLine;
- (void)_startTemporarilyShowingPreGLCenterLine;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

