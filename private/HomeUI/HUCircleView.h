//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HUCircleView : UIView
{
    _Bool _backgroundColorFollowsTintColor;
    _Bool _borderColorFollowsTintColor;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool borderColorFollowsTintColor; // @synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor;
@property(nonatomic) _Bool backgroundColorFollowsTintColor; // @synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

