//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView;
@protocol ICScrollViewKeyboardResizerDelegate;

@interface ICScrollViewKeyboardResizer : NSObject
{
    _Bool _autoResizing;
    _Bool _observingKeyboardNotifications;
    _Bool _didResizeScrollView;
    id <ICScrollViewKeyboardResizerDelegate> _delegate;
}

@property(nonatomic) _Bool didResizeScrollView; // @synthesize didResizeScrollView=_didResizeScrollView;
@property(nonatomic, getter=isObservingKeyboardNotifications) _Bool observingKeyboardNotifications; // @synthesize observingKeyboardNotifications=_observingKeyboardNotifications;
@property(nonatomic, getter=isAutoResizing) _Bool autoResizing; // @synthesize autoResizing=_autoResizing;
@property(nonatomic) __weak id <ICScrollViewKeyboardResizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)clearInsetsWithDuration:(double)arg1;
- (void)applyInsetsFromKeyboardFrame:(struct CGRect)arg1 duration:(double)arg2;
- (void)stopAutoResizing;
- (void)startAutoResizing;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

