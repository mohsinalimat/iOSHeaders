//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class CATextLayer;

@interface PXPlacesMapCircleAnnotationView : MKAnnotationView
{
    double _circleAnnotationSize;
    CATextLayer *_textLayer;
}

+ (struct CGColor *)colorForCircle;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(nonatomic) double circleAnnotationSize; // @synthesize circleAnnotationSize=_circleAnnotationSize;
- (void).cxx_destruct;
- (id)renderTextLayerWithSize:(struct CGSize)arg1 usingFontName:(id)arg2 fontSize:(long long)arg3 text:(id)arg4;
- (id)renderCircleWithRadius:(double)arg1;
- (void)setCircleText:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

