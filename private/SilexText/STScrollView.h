//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDScrollView.h>

@class STAXCustomRotorProvider;
@protocol STScrollViewDelegate;

@interface STScrollView : TSDScrollView
{
    id <STScrollViewDelegate> _scrollViewDelegate;
    STAXCustomRotorProvider *_customRotorProvider;
}

@property(retain, nonatomic) STAXCustomRotorProvider *customRotorProvider; // @synthesize customRotorProvider=_customRotorProvider;
@property(nonatomic) __weak id <STScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityCustomRotors;
@property(readonly, nonatomic) _Bool isBouncing;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

