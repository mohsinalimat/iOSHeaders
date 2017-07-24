//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode
{
    unsigned long long _kernelSizeInFeatureChannels;
}

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
@property(nonatomic) unsigned long long kernelSizeInFeatureChannels; // @synthesize kernelSizeInFeatureChannels=_kernelSizeInFeatureChannels;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1;

@end
