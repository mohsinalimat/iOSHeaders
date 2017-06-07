//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFServiceNameComponents, NSString, UIColor, UIFont;

@interface HUGridServiceCellTextView : UIView
{
    _Bool _textColorFollowsTintColor;
    double _lineHeight;
    HFServiceNameComponents *_serviceNameComponents;
    NSString *_descriptionText;
    UIColor *_textColor;
    double _descriptionTextColorDimmingFactor;
    UIFont *_font;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double descriptionTextColorDimmingFactor; // @synthesize descriptionTextColorDimmingFactor=_descriptionTextColorDimmingFactor;
@property(nonatomic) _Bool textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) HFServiceNameComponents *serviceNameComponents; // @synthesize serviceNameComponents=_serviceNameComponents;
- (void).cxx_destruct;
- (id)_effectiveTextColor;
- (void)_drawDescriptionLabel;
- (void)_drawSeperateLabels;
- (void)_drawCombinedLabel;
- (id)_commonTextAttributesWithLineBreakMode:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_updateMode;
@property(readonly, nonatomic) double lastBaselineToBottomDistance;
@property(readonly, nonatomic) double topToFirstBaselineDistance;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

