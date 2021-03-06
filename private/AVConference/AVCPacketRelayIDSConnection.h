//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/AVCPacketRelayConnectionProtocol-Protocol.h>

@class AVCPacketFilter, IDSDatagramChannel, IDSService;

__attribute__((visibility("hidden")))
@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol>
{
    unsigned char _type;
    CDUnknownBlockType _readHandler;
    _Bool _isDemuxNeeded;
    _Bool _isResumed;
    IDSDatagramChannel *_datagramChannel;
    IDSService *_packetRelayService;
    AVCPacketFilter *_packetFilter;
}

@property(retain) AVCPacketFilter *packetFilter; // @synthesize packetFilter=_packetFilter;
@property _Bool isDemuxNeeded; // @synthesize isDemuxNeeded=_isDemuxNeeded;
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(readonly) unsigned char type; // @synthesize type=_type;
@property _Bool isResumed; // @synthesize isResumed=_isResumed;
- (void)dealloc;
- (_Bool)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;
- (void)readyToRead;
- (int)stop;
- (int)start;
- (id)initWithIDSDestination:(id)arg1;
- (id)initWithIDSSocketDescriptor:(unsigned short)arg1;

@end

