//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class UIView;

@interface SearchUILayoutFreeSectionView : SearchUICardSectionView
{
    UIView *_containerView;
}

@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (_Bool)isAutoLayoutFree;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContainer:(id)arg1;
- (void)setContainerWithDefaultInsets:(id)arg1;

@end

