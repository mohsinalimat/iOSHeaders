//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCSessionParticipant.h>

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote : VCSessionParticipant
{
}

- (void)setFrequencyMeteringEnabled:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (_Bool)setupStreamsFromMediaBlobWithIDSDestination:(id)arg1;
- (_Bool)setupParticipantStreamInfoWithAudioSettings:(id)arg1 multiwayStream:(id)arg2 idsDestination:(id)arg3;
- (id)setupAudioStreamRTP:(id)arg1;
- (_Bool)setupStreamConfiguration:(id)arg1 audioRules:(id)arg2;
- (id)newStreamConfigurationForRemoteSSRC:(unsigned int)arg1;
- (_Bool)processParticipantInfo;
- (id)initWithIDSDestination:(id)arg1 opaqueData:(id)arg2 delegate:(id)arg3 processId:(int)arg4;

@end
