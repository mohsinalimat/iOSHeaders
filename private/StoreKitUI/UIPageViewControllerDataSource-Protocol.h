//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class UIPageViewController, UIViewController;

@protocol UIPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;

@optional
- (long long)presentationIndexForPageViewController:(UIPageViewController *)arg1;
- (long long)presentationCountForPageViewController:(UIPageViewController *)arg1;
@end

