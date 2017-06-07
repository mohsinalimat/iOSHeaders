//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MPUFoundation/CAAnimationDelegate-Protocol.h>

@class NSArray, NSPointerArray, NSString, NSUUID;
@protocol MPUMarqueeViewDelegate;

@interface MPUMarqueeView : UIView <CAAnimationDelegate>
{
    NSUUID *_currentAnimationID;
    long long _options;
    NSPointerArray *_coordinatedMarqueeViews;
    MPUMarqueeView *_primaryMarqueeView;
    _Bool _marqueeEnabled;
    double _contentGap;
    UIView *_contentView;
    id <MPUMarqueeViewDelegate> _delegate;
    double _marqueeDelay;
    double _marqueeScrollRate;
    UIView *_viewForContentSize;
    long long _animationDirection;
    struct CGSize _contentSize;
    struct UIEdgeInsets _fadeEdgeInsets;
}

@property(nonatomic) long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(retain, nonatomic) UIView *viewForContentSize; // @synthesize viewForContentSize=_viewForContentSize;
@property(nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property(nonatomic) double marqueeScrollRate; // @synthesize marqueeScrollRate=_marqueeScrollRate;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic) __weak id <MPUMarqueeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets fadeEdgeInsets; // @synthesize fadeEdgeInsets=_fadeEdgeInsets;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double contentGap; // @synthesize contentGap=_contentGap;
- (void).cxx_destruct;
- (double)_duration;
- (void)_tearDownMarqueeAnimation;
- (void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)arg1 beginTime:(double)arg2;
- (void)_createMarqueeAnimationIfNeeded;
- (void)_applyMarqueeFade;
- (void)resetMarqueePosition;
@property(readonly, nonatomic) NSArray *coordinatedMarqueeViews;
- (void)addCoordinatedMarqueeView:(id)arg1;
- (void)setMarqueeEnabled:(_Bool)arg1 withOptions:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

