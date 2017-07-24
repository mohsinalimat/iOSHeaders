//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/_NUAbstractBufferStorage.h>

#import <NeutrinoCore/NUBuffer-Protocol.h>
#import <NeutrinoCore/NUMutableBuffer-Protocol.h>
#import <NeutrinoCore/NUPurgeableStorage-Protocol.h>

@class NSString, NUPixelFormat, NURegion;

@interface NUBufferStorage : _NUAbstractBufferStorage <NUBuffer, NUMutableBuffer, NUPurgeableStorage>
{
    long long _purgeLevel;
    long long _length;
    long long _rowBytes;
    void *_bytes;
    _Bool _purgeable;
}

@property(readonly, nonatomic) long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly, copy) NSString *description;
- (id)newRenderDestination;
@property(readonly, nonatomic) void *mutableBytes;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)makeNonPurgeable;
- (void)makePurgeable;
- (void)adjustPurgeLevel:(long long)arg1;
- (long long)purgeLevel;
- (int)_purgeLevelToOSValue:(long long)arg1;
- (id)_purgeStateDescription;
- (int)_fetchPurgeState:(int *)arg1;
- (_Bool)isPurgeable;
- (_Bool)isPurged;
- (void)_deallocateMemory;
- (void *)_allocateMemory:(long long)arg1;
@property(readonly) long long sizeInBytes;
- (void)dealloc;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NUPixelFormat *format;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
@property(readonly) Class superclass;
@property(readonly) NURegion *validRegion;

@end

