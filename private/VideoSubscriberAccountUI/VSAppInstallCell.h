//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class SKUIItemOfferButton;

__attribute__((visibility("hidden")))
@interface VSAppInstallCell : PSTableCell
{
    SKUIItemOfferButton *_installButton;
    long long _installState;
}

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic) long long installState; // @synthesize installState=_installState;
- (void).cxx_destruct;
- (void)_updateSubviewsWithInstallState:(long long)arg1;
- (id)_createInstallButton;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

