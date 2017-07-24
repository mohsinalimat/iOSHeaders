//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UIView;

@interface CAMImageWell : UIButton <UIGestureRecognizerDelegate>
{
    _Bool _scaledForInteraction;
    _Bool _thumbnailImageHidden;
    long long _layoutStyle;
    long long _cameraOrientation;
    UIView *__containerView;
    UIImageView *__thumbnailImageView;
    NSMutableArray *__dimmingViewQueue;
    UIImage *__thumbnailImage;
    UIImage *__placeholderImage;
    NSString *__uuid;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property(retain, nonatomic, setter=_setUuid:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property(retain, nonatomic, setter=_setPlaceholderImage:) UIImage *_placeholderImage; // @synthesize _placeholderImage=__placeholderImage;
@property(retain, nonatomic, setter=_setThumbnailImage:) UIImage *_thumbnailImage; // @synthesize _thumbnailImage=__thumbnailImage;
@property(readonly, nonatomic) NSMutableArray *_dimmingViewQueue; // @synthesize _dimmingViewQueue=__dimmingViewQueue;
@property(readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic, getter=isThumbnailImageHidden) _Bool thumbnailImageHidden; // @synthesize thumbnailImageHidden=_thumbnailImageHidden;
@property(nonatomic, getter=isScaledForInteraction) _Bool scaledForInteraction; // @synthesize scaledForInteraction=_scaledForInteraction;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (double)_cornerRadiusForLayoutStyle:(long long)arg1;
- (id)_placeholderImageForLayoutStyle:(long long)arg1;
- (void)_updateForLayoutStyle;
- (void)_removeFirstDimmingView;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (struct CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (void)_updateThumbnailImageAnimated:(_Bool)arg1;
- (void)recoverFromFailedThumbnailUpdate;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(_Bool)arg3;
- (void)setThumbnailImage:(id)arg1 animated:(_Bool)arg2;
- (void)setCameraOrientation:(long long)arg1 animated:(_Bool)arg2;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 scaledForInteraction:(_Bool)arg2;
- (void)setScaledForInteraction:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMImageWellInitializationWithLayoutStyle:(long long)arg1;
@property(readonly, nonatomic) UIImage *thumbnailImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

