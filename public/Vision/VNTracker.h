//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VNTracker : NSObject
{
    struct shared_ptr<vision::mod::ObjectTrackerAbstract> mTrackerImpl;
    long long _trackedFrameNumber;
    NSUUID *_key;
    NSString *_level;
    struct CGRect _lastTrackedBBox;
}

+ (long long)VNTrackerOptionToTrackerType:(id)arg1;
@property(readonly) NSString *level; // @synthesize level=_level;
@property(readonly) NSUUID *key; // @synthesize key=_key;
@property struct CGRect lastTrackedBBox; // @synthesize lastTrackedBBox=_lastTrackedBBox;
@property long long trackedFrameNumber; // @synthesize trackedFrameNumber=_trackedFrameNumber;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_updateTrackerWithModifiedBBoxForImageBuffer:(id)arg1 error:(id *)arg2;
- (_Bool)_visionBBoxToTrackerBBox:(id)arg1 trackedObjects:(vector_41a7cb1a *)arg2 imageSize:(struct CGSize)arg3 results:(id)arg4 error:(id *)arg5;
- (id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id *)arg3;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;
@property(readonly) _Bool isTracking;
- (_Bool)reset:(id *)arg1;
- (id)trackInFrame:(id)arg1 error:(id *)arg2;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (struct ObjectTrackerAbstract *)_createTrackerWithLevel:(id)arg1 options:(struct ObjectTrackerOptions *)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

