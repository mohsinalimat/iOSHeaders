//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>
#import <StoreKitUI/SKUIPerspectiveView-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSHashTable, NSMapTable, NSString, SKUILockupViewElement, SKUISizeValue, UIView;

@interface SKUIVerticalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIViewElementView>
{
    NSHashTable *_artworkRelatedChildViewElementViews;
    struct UIEdgeInsets _contentInset;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSMapTable *_lineSpacings;
    SKUILockupViewElement *_lockupElement;
    double _productImageAdjustedWidth;
    SKUISizeValue *_productImageBoundingSize;
    UIView *_productImageView;
    struct CGAffineTransform _productImageViewOriginalTransform;
    long long _sizingStyle;
    NSMapTable *_topInsets;
    NSMapTable *_viewElementViews;
    double _opacityOfViewsOtherThanProductImageView;
    double _zoomingImageAlpha;
    double _zoomingImageWidth;
}

+ (double)_topInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)_bottomInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
@property(nonatomic) double zoomingImageWidth; // @synthesize zoomingImageWidth=_zoomingImageWidth;
@property(nonatomic) double zoomingImageAlpha; // @synthesize zoomingImageAlpha=_zoomingImageAlpha;
@property(nonatomic) double opacityOfViewsOtherThanProductImageView; // @synthesize opacityOfViewsOtherThanProductImageView=_opacityOfViewsOtherThanProductImageView;
@property(nonatomic) long long sizingStyle; // @synthesize sizingStyle=_sizingStyle;
- (void).cxx_destruct;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

