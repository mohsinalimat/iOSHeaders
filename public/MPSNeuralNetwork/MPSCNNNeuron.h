//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNNeuron : MPSCNNKernel
{
    float _a;
    float _b;
    int _type;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 a:(float)arg2 b:(float)arg3 type:(int)arg4;
- (void)initializeWithNeuronType:(int)arg1 neuronParameterA:(float)arg2 neuronParameterB:(float)arg3;
- (id)initWithDevice:(id)arg1;

@end

