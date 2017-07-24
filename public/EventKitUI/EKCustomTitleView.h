//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, UILabel;

@interface EKCustomTitleView : UIView
{
    UILabel *_originalTitle;
    UILabel *_title;
    UIImageView *_originalImage;
    UIImageView *_titleImage;
    UILabel *_subTitle;
    NSArray *_changingConstraints;
}

@property(retain) NSArray *changingConstraints; // @synthesize changingConstraints=_changingConstraints;
@property(retain) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) UIImageView *titleImage; // @synthesize titleImage=_titleImage;
@property(retain) UIImageView *originalImage; // @synthesize originalImage=_originalImage;
@property(retain) UILabel *title; // @synthesize title=_title;
@property(retain) UILabel *originalTitle; // @synthesize originalTitle=_originalTitle;
- (void).cxx_destruct;
- (void)animateOutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3;

@end

