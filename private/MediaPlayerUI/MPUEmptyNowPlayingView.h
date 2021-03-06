//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel;
@protocol MPUEmptyNowPlayingViewDelegate;

@interface MPUEmptyNowPlayingView : UIButton
{
    UIImageView *_appIconImageView;
    UILabel *_appDisplayNameLabel;
    UILabel *_continueListeningLabel;
    _Bool _shouldShowActionText;
    id <MPUEmptyNowPlayingViewDelegate> _delegate;
    NSString *_appBundleIdentifier;
}

@property(nonatomic) _Bool shouldShowActionText; // @synthesize shouldShowActionText=_shouldShowActionText;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(nonatomic) __weak id <MPUEmptyNowPlayingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_desaturatedImageWithImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

