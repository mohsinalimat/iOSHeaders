//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARData-Protocol.h>

@class ARLightEstimate, ARPointCloud;

@protocol ARResultData <ARData>

@optional
-     // Error parsing type: @"NSArray"160@0:8{?=[4]}16{?=[4]}80@"NSArray"144@"NSMutableArray"152, name: anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:
- (ARPointCloud *)featurePoints;
- (ARLightEstimate *)lightEstimate;
-     // Error parsing type: {?=[4]}16@0:8, name: worldOriginTransform
- (CDStruct_fdd7a678)trackingState;
-     // Error parsing type: {?=[4]}16@0:8, name: cameraTransform
@end
