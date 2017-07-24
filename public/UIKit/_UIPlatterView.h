//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSValue, _DUIPreview, _UIPlatterShadowView, _UIPortalView, _UIShapeView;

@interface _UIPlatterView : UIView
{
    _Bool _constrainSize;
    _Bool _lifted;
    _Bool _backgroundVisible;
    _Bool _shadowVisible;
    _Bool _appliesOriginalRotation;
    _Bool _constrainSizeWhenNotLifted;
    _Bool _flipped;
    _Bool _precisionMode;
    _DUIPreview *_preview;
    double _orientationRotation;
    double _rotation;
    UIView *_componentView;
    double _stackRotation;
    NSValue *_anchorPointValueToAdjustToOnMoveToWindow;
    UIView *_backgroundView;
    _UIPlatterShadowView *_diffuseShadowView;
    _UIShapeView *_platterMaskView;
    _UIShapeView *_portalMaskView;
    _UIPortalView *_portalView;
    UIView *_portalWrapperView;
    _UIPlatterShadowView *_rimShadowView;
    struct CGPoint _offset;
    struct CGSize _overrideSize;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInsets;
    struct CGAffineTransform _additionalTransform;
    struct CGAffineTransform _containerCounterScaleTransform;
    struct CGAffineTransform _containerCounterRotationTransform;
}

@property(nonatomic) struct CGAffineTransform containerCounterRotationTransform; // @synthesize containerCounterRotationTransform=_containerCounterRotationTransform;
@property(nonatomic) struct CGAffineTransform containerCounterScaleTransform; // @synthesize containerCounterScaleTransform=_containerCounterScaleTransform;
@property(readonly, nonatomic) _UIPlatterShadowView *rimShadowView; // @synthesize rimShadowView=_rimShadowView;
@property(readonly, nonatomic) UIView *portalWrapperView; // @synthesize portalWrapperView=_portalWrapperView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(readonly, nonatomic) _UIShapeView *portalMaskView; // @synthesize portalMaskView=_portalMaskView;
@property(readonly, nonatomic) _UIShapeView *platterMaskView; // @synthesize platterMaskView=_platterMaskView;
@property(readonly, nonatomic) _UIPlatterShadowView *diffuseShadowView; // @synthesize diffuseShadowView=_diffuseShadowView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool precisionMode; // @synthesize precisionMode=_precisionMode;
@property(nonatomic, getter=isFlipped) _Bool flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGAffineTransform additionalTransform; // @synthesize additionalTransform=_additionalTransform;
@property(nonatomic) _Bool constrainSizeWhenNotLifted; // @synthesize constrainSizeWhenNotLifted=_constrainSizeWhenNotLifted;
@property(retain, nonatomic) NSValue *anchorPointValueToAdjustToOnMoveToWindow; // @synthesize anchorPointValueToAdjustToOnMoveToWindow=_anchorPointValueToAdjustToOnMoveToWindow;
@property(nonatomic) double stackRotation; // @synthesize stackRotation=_stackRotation;
@property(retain, nonatomic) UIView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) _Bool appliesOriginalRotation; // @synthesize appliesOriginalRotation=_appliesOriginalRotation;
@property(nonatomic) struct CGSize overrideSize; // @synthesize overrideSize=_overrideSize;
@property(nonatomic) double orientationRotation; // @synthesize orientationRotation=_orientationRotation;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic, getter=isShadowVisible) _Bool shadowVisible; // @synthesize shadowVisible=_shadowVisible;
@property(nonatomic, getter=isBackgroundVisible) _Bool backgroundVisible; // @synthesize backgroundVisible=_backgroundVisible;
@property(nonatomic, getter=isLifted) _Bool lifted; // @synthesize lifted=_lifted;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) _Bool constrainSize; // @synthesize constrainSize=_constrainSize;
@property(readonly, copy, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
- (void).cxx_destruct;
- (void)updateTransform;
- (void)didMoveToSuperview;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)takeCounterTransformsToAddToContainer:(id)arg1;
- (struct CATransform3D)targetTransform;
- (struct CATransform3D)scaleTransform;
@property(nonatomic) __weak UIView *sourceView;
- (double)scaleFactor;
- (void)setComponentViews:(id)arg1;
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) struct CGPoint badgeLocation;
- (id)initWithDUIPreview:(id)arg1;

@end

