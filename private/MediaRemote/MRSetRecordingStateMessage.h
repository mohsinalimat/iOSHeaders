//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetRecordingStateMessage : MRProtocolMessage
{
}

@property(readonly, nonatomic) unsigned int state;
- (unsigned long long)type;
- (id)initWithRecordingState:(unsigned int)arg1;

@end

