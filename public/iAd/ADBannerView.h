//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <iAd/ADAdRecipient-Protocol.h>
#import <iAd/ADDimmerViewDelegate-Protocol.h>

@class ADAdSpace, ADDimmerView, ADPrivacyButton, NSDate, NSString, NSTimer, NSURL, UILabel, UIViewController;
@protocol ADBannerViewDelegate, ADBannerViewInternalDelegate;

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate>
{
    id <ADBannerViewDelegate> _weakDelegate;
    id <ADBannerViewInternalDelegate> _weakInternalDelegate;
    _Bool _displayed;
    _Bool _reUsed;
    _Bool _bannerLoaded;
    _Bool _bannerViewActionInProgress;
    _Bool _createdForIBInternal;
    _Bool _dimmed;
    _Bool _determiningConstraintBasedWidth;
    _Bool _inSecondConstraintsPass;
    _Bool _scrolling;
    _Bool _imageUpdateEnabled;
    _Bool _debugHighlightEnabled;
    _Bool _internalAdTypeCanChange;
    int _screenfuls;
    int _slotPosition;
    int _internalAdType;
    NSString *_adResponseId;
    long long _lastErrorCode;
    long long _options;
    long long _adType;
    NSString *_advertisingSection;
    UIView *_highlightClippedView;
    UIView *_highlightHittableView;
    UILabel *_idLbl;
    NSTimer *_highlightUpdateTimer;
    ADPrivacyButton *_privacyButton;
    NSString *_authenticationUserName;
    NSURL *_serverURL;
    ADAdSpace *_adSpace;
    ADDimmerView *_dimmerView;
    double _constraintBasedWidth;
    NSString *_originID;
    NSDate *_adDisplayDate;
    NSDate *_loadStartTime;
    NSDate *_webLoadStartTime;
    NSDate *_loadEndTime;
    double _adDataLoadTime;
    double _bannerLoadTime;
    struct CGSize _portraitSize;
    struct CGSize _landscapeSize;
}

+ (struct CGSize)_sizeThatFitsSize:(struct CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(_Bool)arg3;
+ (struct CGRect)_frameThatFits:(struct CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(_Bool)arg3;
+ (struct CGSize)_landscapeBannerSize;
+ (struct CGSize)_portraitBannerSize;
+ (struct CGRect)_adWindowBounds;
+ (struct CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1;
+ (void)setServerURL:(id)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) double bannerLoadTime; // @synthesize bannerLoadTime=_bannerLoadTime;
@property(nonatomic) double adDataLoadTime; // @synthesize adDataLoadTime=_adDataLoadTime;
@property(copy, nonatomic) NSDate *loadEndTime; // @synthesize loadEndTime=_loadEndTime;
@property(copy, nonatomic) NSDate *webLoadStartTime; // @synthesize webLoadStartTime=_webLoadStartTime;
@property(copy, nonatomic) NSDate *loadStartTime; // @synthesize loadStartTime=_loadStartTime;
@property(copy, nonatomic) NSDate *adDisplayDate; // @synthesize adDisplayDate=_adDisplayDate;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(nonatomic) _Bool internalAdTypeCanChange; // @synthesize internalAdTypeCanChange=_internalAdTypeCanChange;
@property(nonatomic) _Bool debugHighlightEnabled; // @synthesize debugHighlightEnabled=_debugHighlightEnabled;
@property(nonatomic) _Bool imageUpdateEnabled; // @synthesize imageUpdateEnabled=_imageUpdateEnabled;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) _Bool inSecondConstraintsPass; // @synthesize inSecondConstraintsPass=_inSecondConstraintsPass;
@property(nonatomic) double constraintBasedWidth; // @synthesize constraintBasedWidth=_constraintBasedWidth;
@property(nonatomic) _Bool determiningConstraintBasedWidth; // @synthesize determiningConstraintBasedWidth=_determiningConstraintBasedWidth;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) ADDimmerView *dimmerView; // @synthesize dimmerView=_dimmerView;
@property(retain, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
@property(readonly, nonatomic) _Bool createdForIBInternal; // @synthesize createdForIBInternal=_createdForIBInternal;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(retain, nonatomic) ADPrivacyButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(retain, nonatomic) NSTimer *highlightUpdateTimer; // @synthesize highlightUpdateTimer=_highlightUpdateTimer;
@property(retain, nonatomic) UILabel *idLbl; // @synthesize idLbl=_idLbl;
@property(retain, nonatomic) UIView *highlightHittableView; // @synthesize highlightHittableView=_highlightHittableView;
@property(retain, nonatomic) UIView *highlightClippedView; // @synthesize highlightClippedView=_highlightClippedView;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(nonatomic, getter=isBannerViewActionInProgress) _Bool bannerViewActionInProgress; // @synthesize bannerViewActionInProgress=_bannerViewActionInProgress;
@property(readonly, nonatomic, getter=isBannerLoaded) _Bool bannerLoaded; // @synthesize bannerLoaded=_bannerLoaded;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(nonatomic) struct CGSize landscapeSize; // @synthesize landscapeSize=_landscapeSize;
@property(nonatomic) struct CGSize portraitSize; // @synthesize portraitSize=_portraitSize;
@property(readonly, nonatomic) int internalAdType; // @synthesize internalAdType=_internalAdType;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) _Bool reUsed; // @synthesize reUsed=_reUsed;
@property(nonatomic) _Bool displayed; // @synthesize displayed=_displayed;
@property(nonatomic) int slotPosition; // @synthesize slotPosition=_slotPosition;
@property(nonatomic) int screenfuls; // @synthesize screenfuls=_screenfuls;
@property(copy, nonatomic) NSString *adResponseId; // @synthesize adResponseId=_adResponseId;
- (id)context;
- (void)setContext:(id)arg1;
- (id)publicImpressionAttributes;
- (void)scheduleAd;
- (void)cancelScheduledAd;
- (id)nativeMetadata;
- (void)bannerDidDisappear;
- (void)bannerDidAppear;
- (void)nextContentVideoStartedPlaying;
- (void)userDidSkipPreroll;
- (void)playbackFailed:(id)arg1;
- (void)playbackFinished:(id)arg1;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStartedForImpressionSource:(int)arg1;
- (void)playbackStarted;
- (id)videoAssets;
- (id)audioURL;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (_Bool)requiresMRAID;
- (_Bool)hasTransparencyDetails;
- (_Bool)hasAction;
- (int)action;
- (double)skipThreshold;
- (void)resumeImpressionCycling;
- (void)suspendImpressionCycling;
- (void)setInternalDelegate:(id)arg1;
- (id)internalDelegate;
- (void)_forwardErrorToDelegate:(id)arg1;
- (void)cancelBannerViewAction;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)currentContentSizeIdentifier;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (id)requiredContentSizeIdentifiers;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
@property(nonatomic) __weak id <ADBannerViewDelegate> delegate;
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)resumeBannerMedia;
- (void)pauseBannerMedia;
- (void)storyboardViewControllerDidPresent;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)_setAdPrivacyMarkPosition;
- (void)serverBannerViewWillLoad;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)setViewSizeInPortrait:(struct CGSize)arg1 inLandscape:(struct CGSize)arg2;
- (void)privacyButtonWasTapped;
- (void)_resetHighlightTimer;
- (void)_updateHighlight:(id)arg1;
- (void)layoutSubviews;
- (void)removeCreativeView;
- (void)displayCreativeView;
- (void)displayBannerView;
- (void)reportNativeClickEvent;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)beginAction;
- (_Bool)enableDimmerView:(id)arg1;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint)arg2;
- (void)didMoveToWindow;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)prerollDidStop;
- (void)prerollDidStart;
- (id)uniqueIdentifier;
- (void)setInternalAdType:(int)arg1;
- (void)cycleImpressionImmediately;
- (_Bool)hasImpressed;
- (_Bool)canReuseForContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_accessibilityUserTestingElementAttributes;
@property(readonly, nonatomic) UIView *adSpaceView;
- (void)_commonInit;
- (id)initFromIBWithFrame:(struct CGRect)arg1 adType:(long long)arg2;
- (id)initFromIBWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithInternalAdType:(int)arg1 options:(long long)arg2;
- (id)initWithAdType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

