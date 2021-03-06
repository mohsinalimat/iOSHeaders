//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLModelRegressor, PMLSparseMatrix;

@interface PMLTrainingStoredSessionBatch : NSObject
{
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_outcomes;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) PMLModelRegressor *outcomes; // @synthesize outcomes=_outcomes;
@property(readonly, nonatomic) PMLSparseMatrix *covariates; // @synthesize covariates=_covariates;
- (void).cxx_destruct;
- (id)minibatchStats;
- (id)minibatchStatsForPositiveLabel:(unsigned long long)arg1;
- (id)initWithCovariates:(id)arg1 outcomes:(id)arg2;

@end

