//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNNeuronNode.h>

@class NSData;

@interface MPSCNNNeuronPReLUNode : MPSCNNNeuronNode
{
    NSData *_aData;
}

+ (id)nodeWithSource:(id)arg1 aData:(id)arg2;
- (struct FilterGraphNode *)newFilterNode;
- (void)dealloc;
- (id)initWithSource:(id)arg1 aData:(id)arg2;

@end

