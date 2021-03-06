//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKPlaceHeaderBackgroundViewDelegate-Protocol.h>
#import <MapKit/MKPlaceHeaderViewCinematics-Protocol.h>
#import <MapKit/MKStackingViewControllerSizableView-Protocol.h>

@class MKMapItem, MKPlaceHeaderBackgroundView, MKStarRatingAndLabelView, MKTransitInfoLabelView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFont, UILayoutGuide, _MKEnvironmentLabel;
@protocol MKPlaceHeaderViewDelegate;

@interface MKPlaceHeaderView : UIView <MKStackingViewControllerSizableView, MKPlaceHeaderViewCinematics, MKPlaceHeaderBackgroundViewDelegate>
{
    MKPlaceHeaderBackgroundView *_background;
    MKPlaceHeaderBackgroundView *_oldBackground;
    UIView *_screen;
    _Bool _compressedMode;
    _Bool _isTranitLine;
    NSMutableArray *_viewsToAnimate;
    MKStarRatingAndLabelView *_ratingView;
    struct _MKUILabel *_titleLabel;
    struct _MKUILabel *_distanceToPlaceLabel;
    MKTransitInfoLabelView *_transitInfoView;
    _MKEnvironmentLabel *_environmentLabel;
    NSArray *_environmentsLabelConstraints;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_reviewsFont;
    UIFont *_transitFont;
    UILayoutGuide *_centeringLayoutGuide_Top;
    UILayoutGuide *_centeringLayoutGuide_Bottom;
    NSLayoutConstraint *_topSpacerToTitleConstraint;
    NSLayoutConstraint *_titleToBottomConstraint;
    NSLayoutConstraint *_topBottomDifferenceConstraint;
    NSLayoutConstraint *_distanceLabelToBottomConstraint;
    NSLayoutConstraint *_distanceLabelToTitleConstraint;
    NSLayoutConstraint *_topToTransitViewConstraint_Text;
    NSLayoutConstraint *_topToTransitViewConstraint_Shield;
    NSLayoutConstraint *_transitViewToTitleConstraint_Text;
    NSLayoutConstraint *_transitViewToDistanceLabelConstraint_Text;
    NSLayoutConstraint *_transitViewToBottomConstraint_Text;
    NSLayoutConstraint *_transitViewToTitleConstraint_Shield;
    NSLayoutConstraint *_transitViewToDistanceLabelConstraint_Shield;
    NSLayoutConstraint *_transitViewToBottomConstraint_Shield;
    NSLayoutConstraint *_ratingViewToTitleConstraint;
    NSLayoutConstraint *_ratingViewToDistanceLabelConstraint;
    NSLayoutConstraint *_ratingViewToBottomConstraint;
    struct {
        unsigned int isPresenting;
    } _headerViewFlags;
    _Bool _needsToUpdateTitleLabel;
    _Bool _needsToUpdateTransitLabel;
    MKMapItem *_mapItem;
    long long _backgroundTypeOverride;
    id <MKPlaceHeaderViewDelegate> _delegate;
    NSArray *_labelWidthConstraints;
    NSMutableArray *_viewDidAppearBlocks;
}

@property(retain, nonatomic) NSMutableArray *viewDidAppearBlocks; // @synthesize viewDidAppearBlocks=_viewDidAppearBlocks;
@property(retain, nonatomic) NSArray *labelWidthConstraints; // @synthesize labelWidthConstraints=_labelWidthConstraints;
@property(nonatomic) _Bool needsToUpdateTransitLabel; // @synthesize needsToUpdateTransitLabel=_needsToUpdateTransitLabel;
@property(nonatomic) _Bool needsToUpdateTitleLabel; // @synthesize needsToUpdateTitleLabel=_needsToUpdateTitleLabel;
@property(nonatomic) __weak id <MKPlaceHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long backgroundTypeOverride; // @synthesize backgroundTypeOverride=_backgroundTypeOverride;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)updateHiddenAttributeForLabels;
- (void)presentAnimated:(_Bool)arg1;
- (void)present;
- (void)prepareForPresentation;
- (id)viewsForPresentation;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *transitLabelItems;
- (void)_didAppearAfterSettingMapItemAnimated:(_Bool)arg1;
- (void)refreshContent;
- (void)headerViewBackgroundDidFinishLoading:(id)arg1;
- (void)presentBackgroundIfNeeded;
- (void)resetAnimations;
- (void)restartAnimations;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)addConstraints;
- (void)_updateFontBasedConstraints;
- (void)_updateFonts;
- (void)addContent;
- (void)_configureLabelForHeader:(id)arg1;
- (struct _MKUILabel *)_newInfoLabel;
- (struct CATransform3D)perspectiveTransform;
@property(nonatomic) double rating;
@property(copy, nonatomic) NSString *reviewsSourceName;
@property(nonatomic) unsigned long long numberOfReviews;
@property(readonly, nonatomic) UIFont *subtitleFont;
@property(copy, nonatomic) NSString *subTitle;
@property(copy, nonatomic) NSString *title;
- (void)updateTransitLabel;
- (void)updateTitleLabel;
- (void)_updateCurrentEnvironmentName;
- (void)resetViewDidAppear;
- (void)_performWhenViewHasAppeared:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)setBackgroundViewTransform:(struct CATransform3D)arg1;
- (void)setShowInlineMapInHeader:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withCompressedMode:(_Bool)arg2 isTransitLine:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

