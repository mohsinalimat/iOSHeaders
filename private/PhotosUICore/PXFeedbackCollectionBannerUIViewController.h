//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIDynamicAnimator, UIView;

@interface PXFeedbackCollectionBannerUIViewController : UIViewController <UIGestureRecognizerDelegate>
{
    UIView *_bannerContentView;
    double _bannerHeight;
    UIDynamicAnimator *_animator;
    _Bool _bounce;
    double _showBannerAnimationDuration;
    double _hideBannerAnimationDuration;
    unsigned long long _feedbackCollectionContext;
    _Bool _alreadyShowingBanner;
    _Bool _isMSGOnlyBanner;
    NSString *_bannerTitle;
    NSString *_bannerMessage;
    double _autoDismissDuration;
}

+ (id)sharedFeedbackCollectionBanner;
@property(nonatomic) unsigned long long feedbackCollectionContext; // @synthesize feedbackCollectionContext=_feedbackCollectionContext;
@property(nonatomic) double autoDismissDuration; // @synthesize autoDismissDuration=_autoDismissDuration;
@property(copy, nonatomic) NSString *bannerMessage; // @synthesize bannerMessage=_bannerMessage;
@property(copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
- (void).cxx_destruct;
- (void)setupUIIfNeeded;
- (void)autoDismissFeedbackBanner:(id)arg1;
- (void)upSwipe:(id)arg1;
- (void)showFeedbackCollectionUI;
- (void)handleTap:(id)arg1;
- (void)hideBanner:(_Bool)arg1;
- (void)hideBanner;
- (void)showBannerWithDelay:(double)arg1 forDuration:(double)arg2;
- (void)showBannerWithDelay:(double)arg1;
- (void)showBanner;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 msg:(id)arg2 inContext:(unsigned long long)arg3;
- (id)initWithTitle:(id)arg1 inContext:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

