//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class UIViewController;

@protocol MusicMediaDetailSplitViewControllerDelegate <NSObject>
- (void)mediaDetailSplitViewController:(UIViewController *)arg1 contentScrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)mediaDetailSplitViewControllerContentScrollViewDidScroll:(UIViewController *)arg1;
- (void)mediaDetailSplitViewControllerContentScrollViewContentSizeDidChange:(UIViewController *)arg1;
@end

