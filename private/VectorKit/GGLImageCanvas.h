//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/MDRenderTarget-Protocol.h>

@class NSString;
@protocol GGLRenderQueueSource;

__attribute__((visibility("hidden")))
@interface GGLImageCanvas : NSObject <MDRenderTarget>
{
    struct RenderTargetFormat _resolvedRenderTargetFormat;
    struct CGSize _size;
    double _contentScale;
    struct CGRect _bounds;
    _Bool _canMakeImage;
    _Bool _recreateRenderTarget;
    _Bool _allowAlpha;
    id <GGLRenderQueueSource> _renderSource;
    struct RenderTargetFormat _format;
    shared_ptr_807ec9ac _device;
    struct Renderer {
        CDUnknownFunctionPointerType *;
        struct Device *;
        unsigned long long;
        unsigned long long;
        unsigned long long;
        _Bool;
        float;
        struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer>>>;
        struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue>>;
        struct shared_ptr<ggl::CommonLibrary>;
        struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences>>;
        struct Texture2D *;
        struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer>>;
    } *_renderer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture>> _colorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    _Bool _useMultisampling;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture>> _msaaResolveBuffer;
}

@property(readonly, nonatomic) struct RenderTargetFormat resolvedRenderTargetFormat; // @synthesize resolvedRenderTargetFormat=_resolvedRenderTargetFormat;
@property(nonatomic) _Bool allowAlpha; // @synthesize allowAlpha=_allowAlpha;
@property(readonly, nonatomic) _Bool multiSample; // @synthesize multiSample=_useMultisampling;
@property(nonatomic) id <GGLRenderQueueSource> renderSource; // @synthesize renderSource=_renderSource;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didDrawView;
- (void)willDrawView;
- (void)renderWithTimestamp:(double)arg1 completion:(function_30b369b8)arg2;
- (void)destroyRenderTarget;
- (void)createRenderTarget;
@property(readonly, nonatomic) struct Renderer *renderer;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
- (shared_ptr_fa6aa836)bitmapData:(struct Texture *)arg1;
@property(readonly, nonatomic) struct Texture2D *imageTexture;
@property(readonly, nonatomic) _Bool shouldRasterize;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMultisampling:(_Bool)arg3 device:(struct Device *)arg4;
@property(readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
- (struct Texture *)finalSurface;
@property(readonly, nonatomic) struct RenderTarget *renderTarget;

// Remaining properties
@property(readonly, nonatomic) float averageFPS;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

