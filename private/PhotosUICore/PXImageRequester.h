//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableImageRequester-Protocol.h>

@class NSString, PXImageRequest, PXUIMediaProvider, UIImage;
@protocol PXDisplayAsset;

@interface PXImageRequester : PXObservable <PXMutableImageRequester>
{
    struct {
        _Bool targetSize;
        _Bool imageRequest;
        _Bool isInCloud;
    } _needsUpdateFlags;
    _Bool _hasFullQuality;
    _Bool _isInCloud;
    PXUIMediaProvider *_mediaProvider;
    id <PXDisplayAsset> _asset;
    double _scale;
    UIImage *_image;
    UIImage *_opportunisticImage;
    id <PXDisplayAsset> __currentImageSourceAsset;
    PXImageRequest *__currentRequest;
    struct CGSize _contentSize;
    struct CGSize _viewportSize;
    struct CGSize __targetSize;
    struct CGRect _desiredContentsRect;
    struct CGRect _contentsRect;
}

+ (id)defaultOptions;
@property(nonatomic, setter=_setTargetSize:) struct CGSize _targetSize; // @synthesize _targetSize=__targetSize;
@property(retain, nonatomic, setter=_setCurrentRequest:) PXImageRequest *_currentRequest; // @synthesize _currentRequest=__currentRequest;
@property(retain, nonatomic, setter=_setCurrentImageSourceAsset:) id <PXDisplayAsset> _currentImageSourceAsset; // @synthesize _currentImageSourceAsset=__currentImageSourceAsset;
@property(nonatomic, setter=_setIsInCloud:) _Bool isInCloud; // @synthesize isInCloud=_isInCloud;
@property(nonatomic, setter=_setHasFullQuality:) _Bool hasFullQuality; // @synthesize hasFullQuality=_hasFullQuality;
@property(readonly, nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(retain, nonatomic, setter=_setOpportunisticImage:) UIImage *opportunisticImage; // @synthesize opportunisticImage=_opportunisticImage;
@property(retain, nonatomic, setter=_setImage:) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property(readonly, nonatomic) struct CGRect desiredContentsRect; // @synthesize desiredContentsRect=_desiredContentsRect;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (void).cxx_destruct;
- (void)_cancelRequests;
@property(readonly, copy) NSString *description;
- (void)handlePreloadedImageRequester:(id)arg1;
- (void)handlePreloadedImage:(id)arg1;
- (void)setViewportSize:(struct CGSize)arg1;
- (void)setContentsRect:(struct CGRect)arg1;
- (void)setDesiredContentsRect:(struct CGRect)arg1;
- (void)setScale:(double)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setAsset:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)_updateIsInCloudIfNeeded;
- (void)_invalidateIsInCloud;
- (void)_handleResultOfImageRequest:(id)arg1 image:(id)arg2 info:(id)arg3;
- (void)_updateImageRequestIfNeeded;
- (void)_invalidateImageRequest;
- (void)_updateTargetSizeIfNeeded;
- (void)_invalidateTargetSize;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

