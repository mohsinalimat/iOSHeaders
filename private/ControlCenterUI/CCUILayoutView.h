//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class CCUILayoutOptions;
@protocol CCUILayoutViewLayoutSource;

@interface CCUILayoutView : UIScrollView
{
    CCUILayoutOptions *_layoutOptions;
    _Bool _shouldLayout;
    id <CCUILayoutViewLayoutSource> _layoutSource;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) __weak id <CCUILayoutViewLayoutSource> layoutSource; // @synthesize layoutSource=_layoutSource;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (struct CGRect)frameForLayoutRect:(struct CCUILayoutRect)arg1;
- (struct CGRect)frameForSubview:(id)arg1;
- (id)subviewsToLayout;
- (id)initWithFrame:(struct CGRect)arg1 layoutOptions:(id)arg2;

@end

