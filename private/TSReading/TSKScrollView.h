//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;
@protocol UIScrollViewDelegate><TSKScrollViewDelegate;

@interface TSKScrollView : UIScrollView
{
    unsigned long long mAnimatingContentOffsetCount;
    _Bool _mayPassScrollEventsToNextResponder;
    _Bool _shouldDisableScrollingWhenCursorIsHidden;
    struct CGRect _scrollableAreaBounds;
}

@property(readonly, nonatomic) struct CGRect scrollableAreaBounds; // @synthesize scrollableAreaBounds=_scrollableAreaBounds;
@property(nonatomic) _Bool shouldDisableScrollingWhenCursorIsHidden; // @synthesize shouldDisableScrollingWhenCursorIsHidden=_shouldDisableScrollingWhenCursorIsHidden;
@property(nonatomic) _Bool mayPassScrollEventsToNextResponder; // @synthesize mayPassScrollEventsToNextResponder=_mayPassScrollEventsToNextResponder;
- (void)hideScrollIndicators;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *contentView;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (struct CGRect)visibleFrame;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect tsk_bounds;
- (struct CGSize)tsk_contentSize;

// Remaining properties
@property(nonatomic) id <UIScrollViewDelegate><TSKScrollViewDelegate> delegate; // @dynamic delegate;

@end
