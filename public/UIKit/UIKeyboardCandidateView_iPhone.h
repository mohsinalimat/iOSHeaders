//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyboardCandidateView.h>

#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIKeyboardCandidateGridHeader;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    UIKeyboardCandidateGridHeader *_header;
    _Bool _keyboardIsHidden;
    _Bool _showingSortControl;
}

+ (double)defaultExtendedControlHeight;
- (void).cxx_destruct;
- (void)showSortControl:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutomaticallyHideAndShowSortControl;
- (void)_handleKeyboardShowOrHide:(id)arg1;
- (struct UIEdgeInsets)sortControlInsets;
- (void)handleTap;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)_shouldUseFullMetrics;
- (_Bool)_shouldShowHideKeyboard;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_setupKeyboardInteraction;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

