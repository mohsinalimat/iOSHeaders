//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;
@protocol TSWPTextMagnifierRendererDelegate;

@interface TSWPTextMagnifierRenderer : UIView
{
    id <TSWPTextMagnifierRendererDelegate> _delegate;
    CALayer *_underlayLayer;
    CALayer *_canvasLayer;
    CALayer *_overlayLayer;
    int _autoscrollDirections;
}

@property(nonatomic) int autoscrollDirections; // @synthesize autoscrollDirections=_autoscrollDirections;
@property(nonatomic) id <TSWPTextMagnifierRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)p_createChildLayer;
- (void)setNeedsDisplay;
- (void)canvasNeedsDisplay;
- (void)tearDown;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

