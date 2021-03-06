//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UINavigationItem;
@protocol _UINavigationBarTitleViewDataSource;

@protocol _UINavigationBarAugmentedTitleView <NSObject>
@property(readonly, nonatomic) _Bool _hideNavigationBarTrailingBarButtons;
@property(readonly, nonatomic) _Bool _hideNavigationBarStandardTitle;
@property(readonly, nonatomic) _Bool _hideNavigationBarLeadingBarButtons;
@property(readonly, nonatomic) _Bool _hideNavigationBarBackButton;
@property(readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property(readonly, nonatomic) double _navigationBarContentHeight;
@property(readonly, nonatomic) _Bool _underlayNavigationBarContent;
- (void)_transitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_performTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_contentDidChange;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id <_UINavigationBarTitleViewDataSource>)arg1 navigationItem:(UINavigationItem *)arg2 titleLocation:(long long)arg3;
@end

