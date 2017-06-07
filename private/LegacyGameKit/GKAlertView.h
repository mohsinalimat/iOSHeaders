//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@class UIView;

@interface GKAlertView : UIAlertView
{
    UIView *_clipView;
    UIView *_contentView;
}

+ (struct CGSize)preferredContentViewSize;
+ (void)initialize;
- (void)dealloc;
- (void)setContentView:(id)arg1 animated:(_Bool)arg2;
- (id)contentView;
- (void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_replaceContentView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_canDrawContent;
- (void)layoutAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)layoutAnimated:(_Bool)arg1;
- (id)initAlertView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

