//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKInkBehavior : NSObject
{
    vector_3aeccfac _radiusOutput;
    vector_3aeccfac _opacityOutput;
    vector_3aeccfac _edgeWidthOutput;
    vector_3aeccfac _aspectRatioOutput;
    vector_3aeccfac _brushOpacityOutput;
    double _baseRadiusStylus;
    double _baseRadiusTouchPad;
    double _baseRadiusTouchPhone;
    _Bool _rotateEachParticle;
    _Bool _randomRotation;
    _Bool _adjustEndCapParticleAlpha;
    _Bool _variableSnappedWidth;
    _Bool _usesAzimuth;
    _Bool _isEraser;
    _Bool _isObjectEraser;
    _Bool _immutableVelocity;
    _Bool _showBrushIndicator;
    _Bool _timeDependent;
    unsigned int _particleCount;
    NSString *_actionName;
    NSString *_textureName;
    NSString *_accessibilityToolName;
    NSString *_accessibilityToolSelectedString;
    NSString *_toolIcon;
    unsigned long long _type;
    unsigned long long _blendMode;
    double _baseAlpha;
    double _blendAlpha;
    double _targetMultiple;
    double _particleSpacing;
    double _dynamicStep;
    double _touchStartCapTime;
    double _touchStartCapFade;
    double _touchEndCapTime;
    double _touchEndCapFade;
    double _stylusSmoothing;
    double _touchSmoothing;
    double _velocitySmoothing;
    double _rulerOffsetScale;
    double _rulerOffsetConstant;
    struct CGSize _particleSize;
}

+ (id)plistDictionaryForInk:(id)arg1;
@property(nonatomic) _Bool timeDependent; // @synthesize timeDependent=_timeDependent;
@property(nonatomic) double rulerOffsetConstant; // @synthesize rulerOffsetConstant=_rulerOffsetConstant;
@property(nonatomic) double rulerOffsetScale; // @synthesize rulerOffsetScale=_rulerOffsetScale;
@property(nonatomic) _Bool showBrushIndicator; // @synthesize showBrushIndicator=_showBrushIndicator;
@property(nonatomic) _Bool immutableVelocity; // @synthesize immutableVelocity=_immutableVelocity;
@property(nonatomic) double velocitySmoothing; // @synthesize velocitySmoothing=_velocitySmoothing;
@property(nonatomic) double touchSmoothing; // @synthesize touchSmoothing=_touchSmoothing;
@property(nonatomic) double stylusSmoothing; // @synthesize stylusSmoothing=_stylusSmoothing;
@property(nonatomic) _Bool isObjectEraser; // @synthesize isObjectEraser=_isObjectEraser;
@property(nonatomic) _Bool isEraser; // @synthesize isEraser=_isEraser;
@property(nonatomic) _Bool usesAzimuth; // @synthesize usesAzimuth=_usesAzimuth;
@property(nonatomic) double touchEndCapFade; // @synthesize touchEndCapFade=_touchEndCapFade;
@property(nonatomic) double touchEndCapTime; // @synthesize touchEndCapTime=_touchEndCapTime;
@property(nonatomic) double touchStartCapFade; // @synthesize touchStartCapFade=_touchStartCapFade;
@property(nonatomic) double touchStartCapTime; // @synthesize touchStartCapTime=_touchStartCapTime;
@property(nonatomic) _Bool variableSnappedWidth; // @synthesize variableSnappedWidth=_variableSnappedWidth;
@property(nonatomic) _Bool adjustEndCapParticleAlpha; // @synthesize adjustEndCapParticleAlpha=_adjustEndCapParticleAlpha;
@property(nonatomic) _Bool randomRotation; // @synthesize randomRotation=_randomRotation;
@property(nonatomic) _Bool rotateEachParticle; // @synthesize rotateEachParticle=_rotateEachParticle;
@property(nonatomic) struct CGSize particleSize; // @synthesize particleSize=_particleSize;
@property(nonatomic) unsigned int particleCount; // @synthesize particleCount=_particleCount;
@property(nonatomic) double dynamicStep; // @synthesize dynamicStep=_dynamicStep;
@property(nonatomic) double particleSpacing; // @synthesize particleSpacing=_particleSpacing;
@property(nonatomic) double targetMultiple; // @synthesize targetMultiple=_targetMultiple;
@property(nonatomic) double blendAlpha; // @synthesize blendAlpha=_blendAlpha;
@property(nonatomic) double baseAlpha; // @synthesize baseAlpha=_baseAlpha;
@property(nonatomic) unsigned long long blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *toolIcon; // @synthesize toolIcon=_toolIcon;
@property(nonatomic) NSString *accessibilityToolSelectedString; // @synthesize accessibilityToolSelectedString=_accessibilityToolSelectedString;
@property(nonatomic) NSString *accessibilityToolName; // @synthesize accessibilityToolName=_accessibilityToolName;
@property(copy, nonatomic) NSString *textureName; // @synthesize textureName=_textureName;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)setupParticleShader:(id)arg1 resourceHandler:(id)arg2;
- (id)shaderFrom:(id)arg1;
- (unsigned int)particleTexture;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint)arg1 inputType:(long long)arg2 inputScale:(double)arg3;
- (double)baseRadiusForInputType:(long long)arg1;
- (double)solve:(vector_3aeccfac *)arg1 forPoint:(CDStruct_f17e9403)arg2 context:(CDStruct_5237edf5 *)arg3;
- (double)solveForTime:(vector_3aeccfac *)arg1 forTime:(double)arg2 stillChanging:(_Bool *)arg3;
- (struct _PKStrokePoint)outputTimePoint:(struct _PKStrokePoint)arg1 atTime:(double)arg2 stillChanging:(_Bool *)arg3;
- (struct _PKStrokePoint)outputForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (double)alphaForStroke:(id)arg1;
- (double)brushOpacityForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (unique_ptr_61416811)loadFunction:(id)arg1;
- (void)validatePiecewiseBezierFunction:(struct PKFunctionPiecewiseBezier *)arg1;
- (vector_3aeccfac)loadOutput:(id)arg1;
- (void)loadBaseRadius:(id)arg1;
- (void)verifyParameters;
- (void)loadInkWithDictionary:(id)arg1;
- (void)loadInkWithName:(id)arg1 version:(unsigned long long)arg2;
- (id)init;
- (id)initWithInk:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithInk:(id)arg1;

@end
