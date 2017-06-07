//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface PKWelcomeHeaderView : UIView
{
    UIView *_titleView;
    UILabel *_environmentLabel;
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _showActivityIndicator;
    _Bool _showSEHinting;
    unsigned long long _passType;
    NSString *_hintingLabel;
}

@property(copy, nonatomic) NSString *hintingLabel; // @synthesize hintingLabel=_hintingLabel;
@property(nonatomic) _Bool showSEHinting; // @synthesize showSEHinting=_showSEHinting;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(readonly, nonatomic) unsigned long long passType; // @synthesize passType=_passType;
- (void).cxx_destruct;
- (void)_addTapped;
- (void)addTapped;
- (void)layoutSubviews;
- (id)initWithPassType:(unsigned long long)arg1;
- (id)init;

@end

