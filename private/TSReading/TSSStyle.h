//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSKModel-Protocol.h>
#import <TSReading/TSKTransformableObject-Protocol.h>
#import <TSReading/TSSPropertySource-Protocol.h>
#import <TSReading/TSSPropertyValueValidator-Protocol.h>
#import <TSReading/TSSStyleClient-Protocol.h>
#import <TSReading/TSSStyleObject-Protocol.h>
#import <TSReading/TSSThemeAsset-Protocol.h>

@class NSSet, NSString, TSSPropertyMap, TSSStylesheet;

@interface TSSStyle : TSPObject <NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSThemeAsset, TSSPropertySource, TSSStyleClient, TSKModel, TSKTransformableObject>
{
    TSSPropertyMap *mOverridePropertyMap;
    NSString *mName;
    NSString *mStyleIdentifier;
    TSSStyle *mParent;
    _Bool mIsVariation;
    TSSStylesheet *mStylesheet;
}

+ (double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2;
+ (_Bool)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+ (_Bool)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
+ (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (_Bool)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
+ (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (id)description;
+ (id)properties;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
@property(readonly, nonatomic) _Bool isVariation; // @synthesize isVariation=mIsVariation;
@property(readonly, nonatomic) TSSStyle *parent; // @synthesize parent=mParent;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (_Bool)transformsFontSizes;
- (SEL)mapThemeAssetSelector;
- (_Bool)isThemeEquivalent:(id)arg1;
- (_Bool)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (_Bool)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
- (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
- (_Bool)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
- (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2;
- (_Bool)isAncestorOf:(id)arg1;
- (_Bool)isDescendentOf:(id)arg1;
- (_Bool)isParentOf:(id)arg1;
- (_Bool)isChildOf:(id)arg1;
@property(readonly, nonatomic) NSSet *children;
- (void)setParent:(id)arg1;
@property(readonly, nonatomic) TSSStyle *rootIdentifiedAncestor;
@property(readonly, nonatomic) TSSStyle *firstIdentifiedAncestor;
@property(readonly, nonatomic) TSSStyle *baseStyleForVariation;
@property(readonly, nonatomic) TSSStyle *rootAncestor;
- (_Bool)overridePropertyMapIsEqualTo:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
@property(readonly, nonatomic) TSSPropertyMap *overridePropertyMap;
- (_Bool)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (_Bool)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (_Bool)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (_Bool)hasEqualPropertyValues:(id)arg1;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(_Bool)arg3;
- (id)fullPropertyMap;
- (id)copyPropertyMap;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (id)propertyMap;
- (double)overrideCGFloatValueForProperty:(int)arg1;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (id)overrideValueForProperty:(int)arg1;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (unsigned long long)overrideCount;
- (id)overriddenProperties;
- (_Bool)overridesAnyProperty;
- (_Bool)overridesProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (_Bool)definesProperty:(int)arg1;
@property(readonly, nonatomic) _Bool isIdentified;
@property(readonly, nonatomic) _Bool isNamed;
- (void)removeAllValues;
- (void)removeValueForProperty:(int)arg1;
- (void)setValuesForProperties:(id)arg1;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)valuesForProperties:(id)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)valueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)copyFlattenedWithContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;
- (void)setStylesheet:(id)arg1;
- (void)setStyleIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *styleIdentifier;
@property(copy, nonatomic) NSString *name;
- (id)constrainShapeStyleForContext:(id)arg1;
- (void)constrainStrokeForSwatchGeneration;
- (void)constrainShadowForSwatchGeneration;
- (void)fadeReflectionForSwatchGeneration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

