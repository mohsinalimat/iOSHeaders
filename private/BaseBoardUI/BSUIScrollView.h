//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <BaseBoardUI/UIScrollViewDelegate-Protocol.h>

@class NSString;
@protocol BSUIScrollViewDelegate;

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _isScrolling;
    _Bool _preventDidEndScrolling;
    _Bool _didScroll;
    CDUnknownBlockType _scrollCompletion;
    struct CGPoint _previousContentOffset;
    struct CGPoint _initialContentOffset;
    _Bool _scrolling;
}

@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
- (void)_didEndScrollAnimationNotification:(id)arg1;
- (void)_didDidEndDeceleratingNotification:(id)arg1;
- (void)_didEndDraggingNotification:(id)arg1;
- (void)_willBeginDraggingNotification:(id)arg1;
- (void)_setScrollCompletion:(CDUnknownBlockType)arg1;
- (void)_updateScrolling;
- (void)_setScrolling:(_Bool)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)_activeMethod;
- (void)_notifyDidScroll;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) CDStruct_3b09cf25 currentScrollContext;
@property(nonatomic) __weak id <BSUIScrollViewDelegate> delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_bs_didEndScrolling;
- (void)_bs_didScrollWithContext:(CDStruct_3b09cf25)arg1;
- (void)_bs_willBeginScrolling;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
