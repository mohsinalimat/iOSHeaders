//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters
{
    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;
}

+ (id)audioMixInputParameters;
+ (id)audioMixInputParametersWithTrack:(id)arg1;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
@property(retain, nonatomic) const struct opaqueMTAudioProcessingTap *audioTapProcessor;
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(nonatomic) int trackID;

@end
