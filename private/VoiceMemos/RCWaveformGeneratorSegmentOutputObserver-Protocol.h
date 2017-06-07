//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class NSError, RCWaveformGenerator, RCWaveformSegment;

@protocol RCWaveformGeneratorSegmentOutputObserver <NSObject>
- (void)waveformGenerator:(RCWaveformGenerator *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformGeneratorDidFinishLoading:(RCWaveformGenerator *)arg1 error:(NSError *)arg2;
- (void)waveformGeneratorWillBeginLoading:(RCWaveformGenerator *)arg1;
@end

