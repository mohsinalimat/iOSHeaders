//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class UIScrollView, UIViewController, _TVListViewController;

@protocol _TVListViewControllerDelegate <NSObject>
- (void)listViewController:(_TVListViewController *)arg1 updatePreviewViewController:(UIViewController *)arg2;

@optional
- (void)listViewController:(_TVListViewController *)arg1 didScrollWithScrollView:(UIScrollView *)arg2;
@end

