//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@class NSString, SFUDataRepresentation;
@protocol OS_dispatch_queue, SFUInputStream;

__attribute__((visibility("hidden")))
@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel>
{
    SFUDataRepresentation *_representation;
    id <SFUInputStream> _inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
}

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

