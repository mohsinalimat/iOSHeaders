//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
{
    _Bool _usesIOSurface;
    struct CGSize _framebufferSize;
    struct __C3DFramebuffer *_framebuffer;
}

- (void)_unbindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_bindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_buildMipmaps:(struct __C3DEngineContext *)arg1;
-     // Error parsing type: ^{__C3DTexture=}52@0:8{CGSize=dd}16^{__C3DEngineContext=}32^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}40B48, name: __prepareFramebufferWithSize:withEngineContext:textureSampler:needsStencil:
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg1 size:(struct CGSize)arg2;
-     // Error parsing type: v24@0:8^{__C3DRendererContext={__CFRuntimeBase=QAQ}iIIIIfI^{__C3DTexture}^{__C3DStack}^vBBBBBB^{__CFDictionary}I^{__CFDictionary}^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DEngineStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[8I]Ii^{__C3DBlendStates}I^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^vii}{?=[2I][5i][12{?=iII}][12I]^?^?^?^?^?^?^?^?^?}[2{VolatileObject=^{__C3DArray}II^{__CFArray}}]^{__C3DArray}I^{__CFDictionary}}16, name: cleanup:
-     // Error parsing type: 16@0:8, name: textureSize

@end

