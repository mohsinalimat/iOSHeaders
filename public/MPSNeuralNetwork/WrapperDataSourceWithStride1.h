//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource-Protocol.h>

@class NSString;
@protocol MPSCNNConvolutionDataSource;

@interface WrapperDataSourceWithStride1 : NSObject <MPSCNNConvolutionDataSource>
{
    id <MPSCNNConvolutionDataSource> _dataSource;
}

- (id)label;
- (void)purge;
- (_Bool)load;
- (float *)biasTerms;
- (void *)weights;
- (id)descriptor;
- (unsigned int)dataType;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

