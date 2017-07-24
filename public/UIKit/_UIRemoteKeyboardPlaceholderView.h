//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UISplittableInputView-Protocol.h>
#import <UIKit/_UIRemoteKeyboardInputViewPlaceholder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder>
{
    UIView *_mirroredView;
    struct CGSize _fixedSize;
    CDUnknownBlockType _sizeBlock;
    UIView *_fallbackView;
    UIView *_associatedView;
}

+ (id)placeholderWithSizer:(CDUnknownBlockType)arg1;
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;
+ (id)placeholderForView:(id)arg1;
@property(retain, nonatomic) UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(retain, nonatomic) UIView *fallbackView; // @synthesize fallbackView=_fallbackView;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGSize fixedSize;
- (_Bool)refreshPlaceholder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
@property(readonly, retain) UIView *placeheldView;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (struct CGSize)rightContentViewSize;
- (struct CGSize)leftContentViewSize;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (struct CGRect)_compatibleBounds;
- (void)didEndSplitTransition;
- (void)willBeginSplitTransition;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)updateMergedSubviewConstraints;
- (void)layoutMergedSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

