//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARMarkerTrackingTechnique : ARTechnique
{
    NSArray *_markers;
    struct MarkerDetector *_detector;
    struct shared_ptr<acv::math::PinholeCamera> _camera;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct map<int, acv::vision::marker::DetectedMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::DetectedMarker>>> _detectedMarkers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (void)dealloc;
- (id)initWithIDMarkers:(id)arg1;
- (id)initWithIDMarker:(id)arg1;

@end

