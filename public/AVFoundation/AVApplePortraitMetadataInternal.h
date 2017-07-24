//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSIndexSet;

@interface AVApplePortraitMetadataInternal : NSObject
{
    int version;
    float apertureFocalRatio;
    float luminanceNoiseAmplitude;
    int faceOrientation;
    NSData *faceObservationsData;
    NSIndexSet *indexesOfShallowDepthOfFieldObservations;
    struct CGRect focusRectangle;
}

@property(nonatomic) struct CGRect focusRectangle; // @synthesize focusRectangle;
@property(retain, nonatomic) NSIndexSet *indexesOfShallowDepthOfFieldObservations; // @synthesize indexesOfShallowDepthOfFieldObservations;
@property(retain, nonatomic) NSData *faceObservationsData; // @synthesize faceObservationsData;
@property(nonatomic) int faceOrientation; // @synthesize faceOrientation;
@property(nonatomic) float luminanceNoiseAmplitude; // @synthesize luminanceNoiseAmplitude;
@property(nonatomic) float apertureFocalRatio; // @synthesize apertureFocalRatio;
@property(nonatomic) int version; // @synthesize version;
- (void)dealloc;
- (id)init;

@end

