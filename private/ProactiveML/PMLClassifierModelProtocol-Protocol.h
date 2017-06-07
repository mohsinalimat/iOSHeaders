//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveML/NSObject-Protocol.h>

@class PMLModelCovariates, PMLModelRegressor, PMLModelWeights;

@protocol PMLClassifierModelProtocol <NSObject>
- (PMLModelWeights *)updateForCovariates:(PMLModelCovariates *)arg1 andOutcome:(PMLModelRegressor *)arg2;
- (PMLModelWeights *)fitForCovariates:(PMLModelCovariates *)arg1 andOutcome:(PMLModelRegressor *)arg2;
- (_Bool)classify:(PMLModelCovariates *)arg1;
@end

