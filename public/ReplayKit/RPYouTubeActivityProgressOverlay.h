//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface RPYouTubeActivityProgressOverlay : UIView
{
    _Bool _isShowing;
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)stopActivity;
- (void)setShowing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tearDownOverlayAnimated:(_Bool)arg1;
- (void)setupOverlayAnimated:(_Bool)arg1;

@end

