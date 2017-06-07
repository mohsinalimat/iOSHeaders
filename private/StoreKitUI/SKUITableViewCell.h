//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell
{
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    double _titlePaddingLeft;
    struct UIEdgeInsets _textLabelInsets;
    double _borderPaddingLeft;
}

@property(nonatomic) struct UIEdgeInsets textLabelInsets; // @synthesize textLabelInsets=_textLabelInsets;
@property(nonatomic) double borderPaddingLeft; // @synthesize borderPaddingLeft=_borderPaddingLeft;
- (void).cxx_destruct;
- (void)_reloadBorderVisibility;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
@property(copy, nonatomic) UIColor *topBorderColor;
@property(copy, nonatomic) UIColor *bottomBorderColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

