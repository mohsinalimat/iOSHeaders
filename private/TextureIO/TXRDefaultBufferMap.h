//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRBufferMap-Protocol.h>

@class NSString, TXRDefaultBuffer;

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap>
{
    void *_bytes;
    TXRDefaultBuffer *_buffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) void *bytes;
- (id)initForBuffer:(id)arg1 withBytes:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

