//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface HKIDRegisteredReviewCell : UITableViewCell
{
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
}

@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bodyText;
@property(retain, nonatomic) NSString *titleText;
@property(retain, nonatomic) UIImage *logoImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

