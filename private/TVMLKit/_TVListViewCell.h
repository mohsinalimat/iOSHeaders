//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, _UIFloatingContentView;
@protocol _TVListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewCell : UICollectionViewCell
{
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    _Bool _disabled;
    _Bool _shouldAppearSelected;
    _UIFloatingContentView *_floatingView;
    id <_TVListViewCellDelegate> _delegate;
}

@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <_TVListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
- (void).cxx_destruct;
- (void)_updateSelectedBackgroundColor;
- (unsigned long long)_floatingViewControlState;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)_descendantsShouldHighlight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

