//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)description;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setUpConstraints;
- (void)setUpSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

