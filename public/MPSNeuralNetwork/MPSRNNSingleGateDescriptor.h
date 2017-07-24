//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;

@interface MPSRNNSingleGateDescriptor : MPSRNNDescriptor
{
    id <MPSCNNConvolutionDataSource> _inputWeights;
    id <MPSCNNConvolutionDataSource> _recurrentWeights;
}

+ (id)createRNNSingleGateDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> recurrentWeights; // @synthesize recurrentWeights=_recurrentWeights;
@property(retain, nonatomic) id <MPSCNNConvolutionDataSource> inputWeights; // @synthesize inputWeights=_inputWeights;
- (void)dealloc;
- (id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;
- (id)init;

@end

