//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarView : UIView
{
    UIView *_indicatorView;
    double _preferredIndicatorWidth;
    double _preferredLabelFontSize;
    NSMutableArray *_backgroundLabels;
    NSMutableArray *_foregroundLabels;
    UIView *_foregroundWrapperView;
    UIView *_foregroundMaskView;
    long long _deflectedIndex;
    double _deflectionAmount;
    NSArray *_entries;
    long long _focusProminence;
    long long _style;
    struct CGPoint _minimumContentOffset;
    struct CGPoint _maximumContentOffset;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct CGPoint maximumContentOffset; // @synthesize maximumContentOffset=_maximumContentOffset;
@property(nonatomic) struct CGPoint minimumContentOffset; // @synthesize minimumContentOffset=_minimumContentOffset;
@property(nonatomic) long long focusProminence; // @synthesize focusProminence=_focusProminence;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (id)_backgroundLabelTextColor;
- (_Bool)_shouldUseDarkAppearance;
- (id)_indicatorShadowPath;
- (id)_backgroundFont;
- (id)_foregroundFont;
- (void)_determinePreferredSizes;
- (void)_updateColors;
- (void)_createLabels;
- (void)_showReducedFocusProminence;
- (void)_showNormalFocusProminence;
- (void)layoutSubviews;
- (void)resetDeflection:(_Bool)arg1;
- (void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2;
- (id)_lowerEntryForOffset:(double)arg1;
- (id)_upperEntryForOffset:(double)arg1;
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint)arg1;
- (void)updateForContentOffset:(struct CGPoint)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

