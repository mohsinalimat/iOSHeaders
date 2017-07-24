//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;
@protocol HKCurrentTimeViewDelegate;

@interface HKCurrentTimeView : UIView
{
    UIButton *_currentTimeButton;
    UIButton *_previousTimeIndexButton;
    UIButton *_nextTimeIndexButton;
    _Bool _disableControls;
    _Bool _currentTimeButtonEnabled;
    NSString *_currentTimeString;
    id <HKCurrentTimeViewDelegate> _delegate;
}

@property(nonatomic) _Bool currentTimeButtonEnabled; // @synthesize currentTimeButtonEnabled=_currentTimeButtonEnabled;
@property(nonatomic) _Bool disableControls; // @synthesize disableControls=_disableControls;
@property(nonatomic) __weak id <HKCurrentTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentTimeString; // @synthesize currentTimeString=_currentTimeString;
- (void).cxx_destruct;
- (double)_backgroundAlpha:(_Bool)arg1;
- (double)_foregroundAlpha:(_Bool)arg1;
- (id)_backgroundColor:(_Bool)arg1;
- (id)_foregroundColor:(_Bool)arg1;
- (id)_tintColor:(_Bool)arg1;
- (id)_colorIfForeground:(_Bool)arg1 enabled:(_Bool)arg2;
- (double)_currentTimeButtonBaselineToBottom;
- (double)_currentTimeButtonBaselineToTop;
- (id)_currentTimeButtonFont;
- (void)nextTimeIndexButtonTapped:(id)arg1;
- (void)previousTimeIndexButtonTapped:(id)arg1;
- (void)currentTimeButtonTapped:(id)arg1;
@property(nonatomic) _Bool nextTimeButtonEnabled;
@property(nonatomic) _Bool previousTimeButtonEnabled;
- (void)setupViewWithWideHorizontalMargin:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWideHorizontalMargin:(_Bool)arg1;

@end

