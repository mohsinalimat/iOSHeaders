//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKNavigatorScrollViewControllerProxy.h>

@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy
{
    UIPushBehavior *_velocityPushBehavior;
}

+ (id)supportedSettings;
- (void)pushWatchdog:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)dynamicsPushBehaviors;
- (void)setSettingShowsHorizontalScrollIndicator:(_Bool)arg1;
- (void)setSettingShowsVerticalScrollIndicator:(_Bool)arg1;
- (void)setSettingAlwaysBounceHorizontal:(_Bool)arg1;
- (void)setSettingAlwaysBounceVertical:(_Bool)arg1;
- (void)setSettingIndicatorStyle:(unsigned long long)arg1;
- (void)setSettingContentSize:(struct CGSize)arg1;
- (struct CGSize)settingContentSize;
- (id)layoutSettingsKeys;
- (struct CGSize)contentSize;
- (struct CGRect)contentBounds;
- (struct CGPoint)contentOffset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)commonInit;

@end

