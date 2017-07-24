//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioTime;

__attribute__((visibility("hidden")))
@interface AVAudioClock : NSObject
{
    void *_impl;
}

- (id)awaitIOCycle:(unsigned int *)arg1;
- (long long)currentIONumberFrames;
- (struct AudioTimeStamp)currentAudioTimeStamp;
@property(readonly, nonatomic) AVAudioTime *currentTime;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{AVAudioNodeImplBase=^^?^{AVAudioEngineImpl}@{vector<bool, std::__1::allocator<bool> >=^QQ{__compressed_pair<unsigned long, std::__1::allocator<unsigned long> >=Q}}B^{AVAudioMixingImpl}^{map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >}Bqd{atomic<double>=Ad}}16, name: initWithNode:
- (id)init;

@end

