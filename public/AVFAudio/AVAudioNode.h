//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class AUAudioUnit, AVAudioEngine, AVAudioTime, NSString;

@interface AVAudioNode : NSObject <AVAudioMixing>
{
    void *_impl;
}

- (float)occlusion;
- (void)setOcclusion:(float)arg1;
- (float)obstruction;
- (void)setObstruction:(float)arg1;
- (struct AVAudio3DPoint)position;
- (void)setPosition:(struct AVAudio3DPoint)arg1;
- (float)reverbBlend;
- (void)setReverbBlend:(float)arg1;
- (float)rate;
- (void)setRate:(float)arg1;
- (long long)renderingAlgorithm;
- (void)setRenderingAlgorithm:(long long)arg1;
- (float)pan;
- (void)setPan:(float)arg1;
@property(nonatomic) float volume;
- (id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;
@property(readonly, nonatomic) AUAudioUnit *AUAudioUnit;
- (struct OpaqueAudioComponentInstance *)audioUnit;
// Error parsing type for property impl:
// Property attributes: T^{AVAudioNodeImplBase=^^?^{AVAudioEngineImpl}@{vector<bool, std::__1::allocator<bool> >=^QQ{__compressed_pair<unsigned long, std::__1::allocator<unsigned long> >=Q}}B^{AVAudioMixingImpl}^{map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >}Bqd{atomic<double>=Ad}},R,N

- (void)removeTapOnBus:(unsigned long long)arg1;
- (void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setNumberOfInputs:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long numberOfOutputs;
@property(readonly, nonatomic) unsigned long long numberOfInputs;
@property(readonly, nonatomic) AVAudioEngine *engine;
@property(readonly, nonatomic) double outputPresentationLatency;
@property(readonly, nonatomic) double latency;
@property(readonly, nonatomic) AVAudioTime *lastRenderTime;
- (id)clock;
- (void)reset;
- (id)nameForOutputBus:(unsigned long long)arg1;
- (id)nameForInputBus:(unsigned long long)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (void)didAttachToEngine:(id)arg1;
- (_Bool)setInputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (id)inputFormatForBus:(unsigned long long)arg1;
- (_Bool)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (id)outputFormatForBus:(unsigned long long)arg1;
- (void)dealloc;
-     // Error parsing type: B24@0:8^{AVAudioNodeImplBase=^^?^{AVAudioEngineImpl}@{vector<bool, std::__1::allocator<bool> >=^QQ{__compressed_pair<unsigned long, std::__1::allocator<unsigned long> >=Q}}B^{AVAudioMixingImpl}^{map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >}Bqd{atomic<double>=Ad}}16, name: resetImpl:
- (id)init;
-     // Error parsing type: @24@0:8^{AVAudioNodeImplBase=^^?^{AVAudioEngineImpl}@{vector<bool, std::__1::allocator<bool> >=^QQ{__compressed_pair<unsigned long, std::__1::allocator<unsigned long> >=Q}}B^{AVAudioMixingImpl}^{map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >}Bqd{atomic<double>=Ad}}16, name: initWithImpl:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
