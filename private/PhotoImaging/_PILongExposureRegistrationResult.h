//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PILongExposureRegistrationResult-Protocol.h>

@class NSString, VNImageHomographicAlignmentObservation;
@protocol NURenderStatistics;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult>
{
    VNImageHomographicAlignmentObservation *_observation;
    CDStruct_996ac03c _extent;
}

@property(nonatomic) CDStruct_996ac03c extent; // @synthesize extent=_extent;
@property(copy, nonatomic) VNImageHomographicAlignmentObservation *observation; // @synthesize observation=_observation;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
