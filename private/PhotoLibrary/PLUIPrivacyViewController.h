//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController
{
    _Bool _showingAccessDeniedView;
    _UIAccessDeniedView *_accessDeniedView;
}

- (void)_cancelButtonClicked:(id)arg1;
- (void)_showCancelButton;
- (void)_updateAccessDeniedView;
- (void)loadView;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;

@end

