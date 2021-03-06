//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreInterest/NSObject-Protocol.h>

@class IFCentroidModelParameters, IFCentroidScoringParameters, IFFeatureVector, NSArray;
@protocol IFCentroidModel, IFCentroidStore;

@protocol IFCentroidModel <NSObject>
+ (id <IFCentroidModel>)modelWithStore:(id <IFCentroidStore>)arg1 parameters:(IFCentroidModelParameters *)arg2;
@property(readonly) NSArray *centroid;
@property(readonly) id <IFCentroidStore> store;
@property(readonly) IFCentroidModelParameters *parameters;
- (double)scoreForFeatureVector:(IFFeatureVector *)arg1 scoringParameters:(IFCentroidScoringParameters *)arg2;
- (_Bool)update;
@end

