//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface EKCustomTitleView : UIView
{
    UILabel *_title;
    UILabel *_subTitle;
    NSArray *_verticalConstraints;
}

@property(retain) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)animateOutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3;

@end
