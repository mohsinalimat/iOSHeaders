//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface SUTableHeaderView : UIView
{
    UIColor *_bottomBorderColor;
    struct UIEdgeInsets _edgeInsets;
    long long _index;
    long long _style;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *subtitleFont;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) UIColor *shadowColor;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

