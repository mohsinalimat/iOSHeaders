//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView
{
    UILabel *_headlineLabel;
    UILabel *_explanationLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_explanationLabelFrameForBoundsWidth:(double)arg1 withHeadlineLabelFrame:(struct CGRect)arg2;
- (struct CGRect)_headlineLabelFrameForBoundsWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double contentMinY;
- (id)initWithReuseIdentifier:(id)arg1;

@end

