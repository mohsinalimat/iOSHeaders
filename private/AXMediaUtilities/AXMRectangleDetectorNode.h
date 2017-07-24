//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@interface AXMRectangleDetectorNode : AXMEvaluationNode
{
    double _cameraPixelFocalLength;
    double _minimumAspectRatio;
    double _maximumAspectRatio;
    double _quadratureTolerance;
    double _minimumSize;
    long long _maximumNumberOfRects;
    struct CGPoint _cameraOpticalOrigin;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long maximumNumberOfRects; // @synthesize maximumNumberOfRects=_maximumNumberOfRects;
@property(nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) double quadratureTolerance; // @synthesize quadratureTolerance=_quadratureTolerance;
@property(nonatomic) double maximumAspectRatio; // @synthesize maximumAspectRatio=_maximumAspectRatio;
@property(nonatomic) double minimumAspectRatio; // @synthesize minimumAspectRatio=_minimumAspectRatio;
@property(nonatomic) struct CGPoint cameraOpticalOrigin; // @synthesize cameraOpticalOrigin=_cameraOpticalOrigin;
@property(nonatomic) double cameraPixelFocalLength; // @synthesize cameraPixelFocalLength=_cameraPixelFocalLength;
- (void)evaluate:(id)arg1;
- (id)_prepareRectangleRequestOptions;
- (_Bool)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;

@end

