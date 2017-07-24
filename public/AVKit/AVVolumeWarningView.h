//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewPropertyAnimator;

@interface AVVolumeWarningView : UIView
{
    _Bool _stopping;
    UIViewPropertyAnimator *_animator;
}

@property(nonatomic) __weak UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic, getter=isStopping) _Bool stopping; // @synthesize stopping=_stopping;
- (void).cxx_destruct;
- (void)stopAnimatingAndRemoveFromSuperview;
- (void)continueAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

