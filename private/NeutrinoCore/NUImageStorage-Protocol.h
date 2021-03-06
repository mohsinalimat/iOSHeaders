//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NSDictionary, NUPixelFormat, NURegion;
@protocol NUImageStorage, NURenderer;

@protocol NUImageStorage <NSObject>
@property(readonly) NURegion *validRegion;
@property(readonly) NUPixelFormat *format;
@property(readonly) long long sizeInBytes;
@property(readonly) CDStruct_912cb5d2 size;
- (long long)useAsCIRenderDestinationWithRenderer:(id <NURenderer>)arg1 block:(_Bool (^)(CIRenderDestination *))arg2;
- (long long)useAsCIImageWithOptions:(NSDictionary *)arg1 renderer:(id <NURenderer>)arg2 block:(void (^)(CIImage *))arg3;
- (long long)fillBufferWithPattern4:(unsigned int)arg1;
- (long long)writeBufferInRegion:(NURegion *)arg1 block:(void (^)(id <NUMutableBuffer>))arg2;
- (long long)readBufferInRegion:(NURegion *)arg1 block:(void (^)(id <NUBuffer>))arg2;
- (long long)copyFromStorage:(id <NUImageStorage>)arg1 region:(NURegion *)arg2;
- (void)assertIsValidInRegion:(NURegion *)arg1;
- (void)assertIsValidInRect:(CDStruct_996ac03c)arg1;
- (_Bool)isValidInRegion:(NURegion *)arg1;
- (_Bool)isValidInRect:(CDStruct_996ac03c)arg1;
- (void)invalidate;
- (void)validateRegion:(NURegion *)arg1;
- (void)validateRect:(CDStruct_996ac03c)arg1;
@end

