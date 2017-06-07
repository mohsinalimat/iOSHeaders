//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKStrokedAnnotationProtocol-Protocol.h>

@class NSString, UIColor;

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol>
{
    _Bool _dashed;
    _Bool _hasShadow;
    double _strokeWidth;
    UIColor *_strokeColor;
    long long _brushStyle;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property(getter=isDashed) _Bool dashed; // @synthesize dashed=_dashed;
@property(retain) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

