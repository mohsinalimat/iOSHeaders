//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKThoughtBubbleAnnotationRenderer : AKAnnotationRenderer
{
}

+ (struct CGPath *)_newPathTransformedFromUnitToModelSpace:(struct CGPath *)arg1 forAnnotation:(id)arg2;
+ (struct CGPath *)_newCloudPathScaledToModelSpaceForAnnotation:(id)arg1;
+ (struct CGPath *)_newSmallBubblePathForAnnotation:(id)arg1 atCenter:(struct CGPoint)arg2 withSize:(struct CGSize)arg3;
+ (struct CGPath *)_newLargestBubblePathScaledToModelSpaceForAnnotation:(id)arg1;
+ (struct CGPath *)_newSmallestBubblePathScaledToModelSpaceForAnnotation:(id)arg1;
+ (double)_templateToUnitPointyPointScaleForAnnotation:(id)arg1;
+ (struct CGPoint)_templatePointyPointToCircleIntersect;
+ (double)_unitCloudRadius;
+ (struct CGPoint)_unitCloudCenter;
+ (struct CGPoint)_unitAnnotationPointyPointForAnnotation:(id)arg1;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (void)_fillAndStrokePath:(struct CGPath *)arg1 forAnnotation:(id)arg2 inContext:(struct CGContext *)arg3;
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;

@end

