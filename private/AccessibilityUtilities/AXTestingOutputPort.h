//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioSessionPortDescription.h>

@class NSArray, NSString;

@interface AXTestingOutputPort : AVAudioSessionPortDescription
{
    NSString *portType;
    NSString *portName;
    NSString *UID;
    NSArray *_ttsChannels;
}

@property(retain) NSArray *ttsChannels; // @synthesize ttsChannels=_ttsChannels;
@property(retain) NSString *UID; // @synthesize UID;
@property(retain) NSString *portName; // @synthesize portName;
@property(retain) NSString *portType; // @synthesize portType;
- (id)channels;
- (void)dealloc;

@end

