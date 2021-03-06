//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveML/NSObject-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class PMLDenseMatrix, PMLDenseVector, PMLModelWeights, PMLMutableDenseVector, PMLSparseMatrix, PMLSparseVector;

@protocol PMLNoiseStrategy <NSObject, PMLPlistAndChunksSerializableProtocol>
@property int maxIterations;
- (void)addNoiseToDenseVector:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToSparseMatrix:(PMLSparseMatrix *)arg1;
- (void)addNoiseToSparseVector:(PMLSparseVector *)arg1;
- (void)addNoiseToObjectiveFeatures:(PMLDenseVector *)arg1;
- (void)addNoiseToFeatureMatrix:(PMLDenseMatrix *)arg1;
- (void)addNoiseToGradient:(PMLDenseVector *)arg1;
- (void)addNoiseToWeights:(PMLModelWeights *)arg1;
@end

