//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSExternalPluginBase-Protocol.h>

@protocol MTLCommandBuffer, MTLComputeCommandEncoder, MTLTexture;

@protocol MPSExternalCNNUnary <MPSExternalPluginBase>
- (unsigned long long)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1 computeCommandEncoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 sourceTexture:(id <MTLTexture>)arg4 sourceInfo:(const CDStruct_15cf940b *)arg5 destinationTexture:(id <MTLTexture>)arg6 destinationInfo:(const CDStruct_3d604284 *)arg7;
@end

