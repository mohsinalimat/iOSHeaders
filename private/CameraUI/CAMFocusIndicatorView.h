//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMExposureBiasSlider, CAMFocusIndicatorRectView;
@protocol CAMFocusIndicatorViewDelegate;

@interface CAMFocusIndicatorView : UIView
{
    _Bool _inactive;
    _Bool _showExposureBias;
    float _exposureBiasMaximum;
    float _exposureBiasMinimum;
    float _exposureBiasValue;
    int __exposureBiasSide;
    long long _style;
    id <CAMFocusIndicatorViewDelegate> _delegate;
    CAMFocusIndicatorRectView *__rectView;
    CAMExposureBiasSlider *__exposureBiasSlider;
}

@property(nonatomic) int _exposureBiasSide; // @synthesize _exposureBiasSide=__exposureBiasSide;
@property(readonly, nonatomic) CAMExposureBiasSlider *_exposureBiasSlider; // @synthesize _exposureBiasSlider=__exposureBiasSlider;
@property(readonly, nonatomic) CAMFocusIndicatorRectView *_rectView; // @synthesize _rectView=__rectView;
@property(nonatomic) float exposureBiasValue; // @synthesize exposureBiasValue=_exposureBiasValue;
@property(nonatomic) float exposureBiasMinimum; // @synthesize exposureBiasMinimum=_exposureBiasMinimum;
@property(nonatomic) float exposureBiasMaximum; // @synthesize exposureBiasMaximum=_exposureBiasMaximum;
@property(nonatomic) _Bool showExposureBias; // @synthesize showExposureBias=_showExposureBias;
@property(nonatomic, getter=isInactive) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) __weak id <CAMFocusIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_layoutExposureBiasSlider;
- (void)setExposureBiasSide:(int)arg1 animated:(_Bool)arg2;
- (void)_createExposureBiasSlider;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;
@property(nonatomic, getter=isPulsing) _Bool pulsing;
- (void)_updateTintColor;
- (void)setCenter:(struct CGPoint)arg1;
- (void)_layoutRectView:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_createRectViewAndUpdateBounds;
- (id)initWithStyle:(long long)arg1;
- (void)_commonCAMFocusIndicatorViewInitialization;

@end

