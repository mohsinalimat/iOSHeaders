//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioNode.h>

@interface AVAudioIONode : AVAudioNode
{
}

- (void)didDetachFromEngine:(id)arg1;
- (void)didAttachToEngine:(id)arg1;
@property(readonly, nonatomic) struct OpaqueAudioComponentInstance *audioUnit;
@property(readonly, nonatomic) double presentationLatency;

@end
