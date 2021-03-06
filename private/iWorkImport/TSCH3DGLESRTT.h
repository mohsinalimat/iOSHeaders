//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCH3DGLBindable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable>
{
    unsigned int mTexture;
}

+ (_Bool)isTexturable;
+ (_Bool)isEqual:(id)arg1;
+ (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;
+ (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;
+ (id)bufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1 internalFormat:(unsigned int)arg2 format:(unsigned int)arg3 attachment:(unsigned int)arg4;
- (void)deactivateInContext:(id)arg1;
- (void)bindInSession:(id)arg1;
- (_Bool)valid;
- (void)destroyResourcesInContext:(id)arg1;
- (void)dealloc;
- (id)initWithGLTexture:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

