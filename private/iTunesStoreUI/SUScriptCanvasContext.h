//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptColor;

@interface SUScriptCanvasContext : SUScriptObject
{
    struct CGContext *_context;
    struct CGPath *_contextPath;
    id _fillStyle;
    long long _fillStyleType;
    double _height;
    double _scale;
    double _shadowBlur;
    SUScriptColor *_shadowColor;
    double _shadowOffsetX;
    double _shadowOffsetY;
    id _strokeStyle;
    long long _strokeStyleType;
    double _width;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_ntsApplyShadow;
@property(readonly) double width;
@property(retain) id strokeStyle;
@property double shadowOffsetY;
@property double shadowOffsetX;
@property(retain) id shadowColor;
@property double shadowBlur;
@property double miterLimit;
@property double lineWidth;
@property(retain) id lineJoin;
@property(retain) id lineCap;
@property(retain) NSString *globalCompositeOperation;
@property double globalAlpha;
@property(retain) id fillStyle;
@property(readonly) double height;
- (id)_className;
- (void)strokeRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)stroke;
- (void)translateWithX:(double)arg1 y:(double)arg2;
- (void)transformWithM11:(double)arg1 m12:(double)arg2 m21:(double)arg3 m22:(double)arg4 dx:(double)arg5 dy:(double)arg6;
- (void)setTransformWithM11:(double)arg1 m12:(double)arg2 m21:(double)arg3 m22:(double)arg4 dx:(double)arg5 dy:(double)arg6;
- (void)scaleWithX:(double)arg1 y:(double)arg2;
- (void)saveState;
- (void)rotateWithAngle:(double)arg1;
- (void)restoreState;
- (void)quadraticCurveToCPX:(double)arg1 cpy:(double)arg2 x:(double)arg3 y:(double)arg4;
- (void)moveToX:(double)arg1 y:(double)arg2;
- (id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (void)lineToX:(double)arg1 y:(double)arg2;
- (_Bool)isPointInPathWithX:(double)arg1 y:(double)arg2;
- (void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)fill;
- (void)closePath;
- (void)clip;
- (void)clearRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (struct CGPath *)copyCanvasPath;
- (id)copyCanvasImage;
- (void)bezierCurveToCP1X:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
- (void)beginPath;
- (void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 antiClockwise:(_Bool)arg6;
- (void)arcToX1:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 radius:(double)arg5;
- (void)dealloc;
- (id)initWithWidth:(double)arg1 height:(double)arg2;

@end

