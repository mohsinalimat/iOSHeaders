//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIItemState, SSLookupItemOffer, UIButton, UIControl, UIImage, UIImageView, UILabel;

@interface SKUIBannerView : UIView
{
    UILabel *_artistNameLabel;
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    UIButton *_closeButton;
    UIImageView *_iconImageView;
    SSLookupItemOffer *_itemOffer;
    UIButton *_itemOfferButton;
    SKUIItemState *_itemState;
    UILabel *_itemStateLabel;
    NSMutableArray *_screenshotImageViews;
    UIView *_separatorView;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingStarImageView;
}

@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(retain, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property(retain, nonatomic) SSLookupItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property(readonly, nonatomic) UIControl *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadItemState;
- (id)_newDefaultLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *iconImage;
@property(copy, nonatomic) NSArray *screenshotImages;
@property(copy, nonatomic) NSString *artistName;
@property(readonly, nonatomic) UIControl *itemOfferButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

