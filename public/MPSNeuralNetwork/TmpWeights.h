//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource-Protocol.h>

@class MPSCNNConvolutionDescriptor, NSString;
@protocol MPSCNNConvolutionDataSource;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource>
{
    id <MPSCNNConvolutionDataSource> _parentObj;
    MPSCNNConvolutionDescriptor *_convDesc;
    _Bool _hasBias;
}

- (void)dealloc;
- (void)purge;
- (_Bool)load;
- (float *)biasTerms;
- (void *)weights;
- (id)descriptor;
- (unsigned int)dataType;
- (id)label;
- (id)initWithWeights:(id)arg1 useBias:(_Bool)arg2 desc:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
