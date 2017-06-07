//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIMediaPlayerObserver-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSString, SKUIImageViewElement, SKUIPlayButton;

@interface SKUIAdornedImageViewReuseView : SKUIViewReuseView <SKUIViewElementView, SKUIMediaPlayerObserver>
{
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUIImageViewElement *_imageViewElement;
    SKUIPlayButton *_playButton;
    unsigned long long _playButtonPosition;
    NSMapTable *_viewElementViews;
}

+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(readonly, nonatomic) SKUIPlayButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)frameForView:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

