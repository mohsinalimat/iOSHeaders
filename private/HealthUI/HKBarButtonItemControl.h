//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIBarButtonItem, UIToolbar;

@interface HKBarButtonItemControl : UIControl
{
    _Bool _collapseHeight;
    long long _preferredHeight;
    double _horizontalMargin;
    UIToolbar *_toolbar;
    UIBarButtonItem *_barButtonItem;
    UIControl *_barButtonItemControl;
}

@property(readonly, nonatomic) UIControl *barButtonItemControl; // @synthesize barButtonItemControl=_barButtonItemControl;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) _Bool collapseHeight; // @synthesize collapseHeight=_collapseHeight;
@property(nonatomic) long long preferredHeight; // @synthesize preferredHeight=_preferredHeight;
- (void).cxx_destruct;
- (void)_barButtonAction:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setTintColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithSystemItem:(long long)arg1 preferredHeight:(double)arg2 collapseHeight:(_Bool)arg3;

@end
