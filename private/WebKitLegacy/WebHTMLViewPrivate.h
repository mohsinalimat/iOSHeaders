//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer, WAKView, WebDataSource, WebEvent, WebPluginController;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject
{
    _Bool closed;
    _Bool ignoringMouseDraggedEvents;
    _Bool printing;
    _Bool paginateScreenContent;
    WAKView *layerHostingView;
    _Bool drawingIntoLayer;
    _Bool drawingIntoAcceleratedLayer;
    WebEvent *mouseDownEvent;
    _Bool handlingMouseDownEvent;
    WebEvent *keyDownEvent;
    _Bool exposeInputContext;
    struct CGPoint lastScrollPosition;
    _Bool inScrollPositionChanged;
    WebPluginController *pluginController;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    NSArray *pageRects;
    _Bool transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;
    WebDataSource *dataSource;
    SEL selectorForDoCommandBySelector;
}

+ (void)initialize;
- (void)clear;
- (void)dealloc;

@end

