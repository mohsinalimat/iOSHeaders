//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PSSoftwareUpdateAnimatedIcon : UIView
{
    UIImageView *_innerGearView;
    UIImageView *_outerGearShadowView;
    UIImageView *_outerGearView;
    _Bool _animating;
}

- (void).cxx_destruct;
- (void)setAnimating:(_Bool)arg1;
@property(readonly, nonatomic) UIImageView *outerGearView;
@property(readonly, nonatomic) UIImageView *outerGearShadowView;
@property(readonly, nonatomic) UIImageView *innerGearView;
- (void)createConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

