//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FMFLocation, NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface FMFTitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_titleBottomConstraint;
    FMFLocation *_location;
}

@property(retain, nonatomic) FMFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSLayoutConstraint *titleBottomConstraint; // @synthesize titleBottomConstraint=_titleBottomConstraint;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_updateLabels:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)initFromNib;

@end

