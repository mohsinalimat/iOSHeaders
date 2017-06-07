//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface GKBubbleView : UIView
{
    double _animationScale[9];
    _Bool _animationReversed[9];
    _Bool _animating;
    _Bool _touchAnimationRunning;
    _Bool _touchAnimationCanEnd;
    long long _bubbleType;
    UIImageView *_imageView;
    UIImageView *_highlightView;
    long long _numVertices;
    long long _numFaces;
    double _animationAngle;
    double _animationRadiansPerSecond;
    double _touchAnimationElapsed;
    double _touchAnimationAngle;
    double _moveAnimationAngle;
    double _moveAnimationRadiansPerSecond;
    double _moveAnimationScale;
}

@property(nonatomic) double moveAnimationScale; // @synthesize moveAnimationScale=_moveAnimationScale;
@property(nonatomic) double moveAnimationRadiansPerSecond; // @synthesize moveAnimationRadiansPerSecond=_moveAnimationRadiansPerSecond;
@property(nonatomic) double moveAnimationAngle; // @synthesize moveAnimationAngle=_moveAnimationAngle;
@property(nonatomic) double touchAnimationAngle; // @synthesize touchAnimationAngle=_touchAnimationAngle;
@property(nonatomic) double touchAnimationElapsed; // @synthesize touchAnimationElapsed=_touchAnimationElapsed;
@property(nonatomic) _Bool touchAnimationCanEnd; // @synthesize touchAnimationCanEnd=_touchAnimationCanEnd;
@property(nonatomic) _Bool touchAnimationRunning; // @synthesize touchAnimationRunning=_touchAnimationRunning;
@property(nonatomic) double animationRadiansPerSecond; // @synthesize animationRadiansPerSecond=_animationRadiansPerSecond;
@property(nonatomic) double animationAngle; // @synthesize animationAngle=_animationAngle;
@property(nonatomic) long long numFaces; // @synthesize numFaces=_numFaces;
@property(nonatomic) long long numVertices; // @synthesize numVertices=_numVertices;
@property(retain, nonatomic) UIImageView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long bubbleType; // @synthesize bubbleType=_bubbleType;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void)touchEnded;
- (void)touchBegan;
- (void)chooseMoveAnimation;
- (void)choosePointAnimations;
- (double)animationScaleForCurrentZ;
- (_Bool)randomBOOL;
- (float)randomFloatBetweenMin:(float)arg1 andMax:(float)arg2;
- (struct CGPoint)offsetForVertexAtIndex:(long long)arg1;
- (void)applyAnimationToVertices:(struct CAMeshVertex *)arg1;
- (void)setAnimationStateBasedOnBubble:(id)arg1;
- (void)setupVerticesAndFacesAnimated:(_Bool)arg1;
- (void)update:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

