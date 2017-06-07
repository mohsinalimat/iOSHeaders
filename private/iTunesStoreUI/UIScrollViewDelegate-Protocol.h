//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class UIScrollView, UIView;

@protocol UIScrollViewDelegate <NSObject>

@optional
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg1;
- (_Bool)scrollViewShouldScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (UIView *)viewForZoomingInScrollView:(UIScrollView *)arg1;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewDidZoom:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
@end

