//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKAnnotationPointOfInterestHelper : NSObject
{
}

+ (Class)_poiHelperClassForAnnotation:(id)arg1;
+ (_Bool)_point:(struct CGPoint)arg1 isInCircleWithRadius:(double)arg2 atPoint:(struct CGPoint)arg3;
+ (_Bool)_point:(struct CGPoint)arg1 isInRectWithSize:(double)arg2 atPoint:(struct CGPoint)arg3;
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint)validatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (unsigned long long)_concreteDraggableAreaForPoint:(struct CGPoint)arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (double)draggableAreaScaleFactorForScaleFactor:(double)arg1;
+ (unsigned long long)draggableAreaForPoint:(struct CGPoint)arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint)pointForDraggableArea:(unsigned long long)arg1 onAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3;
+ (void)pointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;

@end

