//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface SKUICategoryTableViewCell : UITableViewCell
{
    UIView *_separatorView;
    struct CGSize _expectedImageSize;
    _Bool _layoutNeedsLayout;
}

@property(nonatomic) struct CGSize expectedImageSize; // @synthesize expectedImageSize=_expectedImageSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

