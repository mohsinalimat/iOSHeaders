//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOResourceManifestConfiguration, VKGGLTextureManager, VKIconManager, VKResourceManager, VKShieldManager;

__attribute__((visibility("hidden")))
@interface VKSharedResources : NSObject
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    struct _retain_ptr<VKIconManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKIconManager *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _iconManager;
    struct _retain_ptr<VKShieldManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKShieldManager *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _shieldManager;
    struct _retain_ptr<VKGGLTextureManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKGGLTextureManager *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _gglTextureManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKResourceManager *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _resourceManager;
    shared_ptr_dd2d1f5e _stylesheetVendor;
    struct unique_ptr<md::FontManager, std::__1::default_delete<md::FontManager>> _fontManager;
    struct unique_ptr<md::Device, std::__1::default_delete<md::Device>> _device;
    struct unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas>> _alphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _highInflationAlphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _isoAlphaAtlas;
    struct unique_ptr<ggl::DistanceAtlas, std::__1::default_delete<ggl::DistanceAtlas>> _distanceAtlas;
    shared_ptr_1ddd16cb _shaderLibrary;
    struct shared_ptr<ggl::CommonLibrary> _commonLibrary;
    unsigned int _referenceCount;
}

@property(readonly, nonatomic) shared_ptr_dd2d1f5e stylesheetVendor; // @synthesize stylesheetVendor=_stylesheetVendor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)purge;
- (_Bool)_hasResourceUsers;
- (void)_removeResourceUser;
- (void)_addResourceUser;
- (void)dealloc;
- (id)_initWithConfiguration:(id)arg1 device:(struct Device *)arg2 standardLibrary:(const shared_ptr_1ddd16cb *)arg3;
@property(readonly, nonatomic) const struct StandardLibrary *shaderLibrary;
@property(readonly, nonatomic) struct DistanceAtlas *distanceAtlas;
@property(readonly, nonatomic) struct IsoAlphaAtlas *isoAlphaAtlas;
@property(readonly, nonatomic) struct IsoAlphaAtlas *highInflationAlphaAtlas;
@property(readonly, nonatomic) struct AlphaAtlas *alphaAtlas;
@property(readonly, nonatomic) struct Device *gglDevice;
@property(readonly, nonatomic) struct Device *device;
@property(readonly, nonatomic) struct FontManager *fontManager;
@property(readonly, nonatomic) VKResourceManager *resourceManager;
@property(readonly, nonatomic) VKGGLTextureManager *gglTextureManager;
@property(readonly, nonatomic) VKShieldManager *shieldManager;
@property(readonly, nonatomic) VKIconManager *iconManager;

@end

