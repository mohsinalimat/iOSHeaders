//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLRenderPassDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor
{
    struct MTLRenderPassDescriptorPrivate _private;
}

+ (id)renderPassDescriptor;
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;
- (_Bool)validate:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (_Bool)openGLModeEnabled;
- (void)setOpenGLModeEnabled:(_Bool)arg1;
- (_Bool)isDitherEnabled;
- (void)setDitherEnabled:(_Bool)arg1;
- (_Bool)fineGrainedBackgroundVisibilityEnabled;
- (void)setFineGrainedBackgroundVisibilityEnabled:(_Bool)arg1;
- (unsigned long long)renderTargetHeight;
- (void)setRenderTargetHeight:(unsigned long long)arg1;
- (unsigned long long)renderTargetWidth;
- (void)setRenderTargetWidth:(unsigned long long)arg1;
- (id)visibilityResultBuffer;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)stencilAttachment;
- (void)setStencilAttachment:(id)arg1;
- (id)depthAttachment;
- (void)setDepthAttachment:(id)arg1;
- (id)colorAttachments;
- (id)init;

@end

