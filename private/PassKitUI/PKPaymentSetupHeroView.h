//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPaymentHeroImageControllerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PKPaymentHeroImageController, UIImageView, UILabel;
@protocol PKHeroImageView;

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate>
{
    long long _context;
    struct CGSize _aspectSize;
    _Bool _isAnimating;
    UIView *_backgroundView;
    UIView<PKHeroImageView> *_heroImageView;
    NSMutableArray *_cardViews;
    UIImageView *_presentedCard;
    unsigned long long _animationContext;
    UILabel *_instructionLabel;
    PKPaymentHeroImageController *_heroImageController;
    NSMutableDictionary *_networkImageViewsMap;
}

- (void).cxx_destruct;
- (void)_promptTapToRadarWithTitle:(id)arg1 description:(id)arg2;
- (_Bool)_isSmallPhone;
- (double)_instructionFontSizeForContext:(long long)arg1;
- (struct CGRect)_frameForCardView:(id)arg1;
- (struct CGRect)_frameForInstructionLabel;
- (unsigned long long)_indexOfNextObject:(id)arg1 withArray:(id)arg2;
- (void)_finishedTransitionToCard:(id)arg1;
- (void)_transitionFromCardToCard:(id)arg1;
- (id)_resizeImage:(id)arg1;
- (id)_imageWithData:(id)arg1;
- (void)_setCardViews:(id)arg1 networks:(id)arg2;
- (void)_createCardViewsWithImages:(id)arg1;
- (void)_createSubviews;
- (void)heroImageController:(id)arg1 didFinishDownloadingImageData:(id)arg2 forNetwork:(id)arg3 error:(id)arg4;
- (void)stopAnimation;
- (void)startAnimation;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithContext:(long long)arg1 heroImageController:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pk_childrenForAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

