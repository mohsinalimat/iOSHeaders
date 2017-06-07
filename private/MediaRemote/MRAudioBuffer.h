//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject
{
    AVAudioCompressedBuffer *_buffer;
    NSDictionary *_formatSettings;
}

@property(readonly, nonatomic) NSDictionary *formatSettings; // @synthesize formatSettings=_formatSettings;
@property(readonly, nonatomic) AVAudioCompressedBuffer *buffer; // @synthesize buffer=_buffer;
- (void)dealloc;
- (id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3;

@end

