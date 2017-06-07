//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationItem.h>

@class NSNumber;

@interface SUDelayedNavigationItem : SUNavigationItem
{
    id _delayedBackButtonTitle;
    id _delayedLeftBarButtonItems;
    NSNumber *_delayedLeftItemsSupplementBackButton;
    id _delayedTitle;
    id _delayedTitleView;
    id _delayedRightBarButtonItems;
    _Bool _shouldDelayChanges;
    SUNavigationItem *_wrappedNavigationItem;
}

@property(retain, nonatomic) SUNavigationItem *wrappedNavigationItem; // @synthesize wrappedNavigationItem=_wrappedNavigationItem;
@property(nonatomic) _Bool shouldDelayChanges; // @synthesize shouldDelayChanges=_shouldDelayChanges;
- (void)_scheduleCommit;
- (void)_prepareButtonItemForDisplay:(id)arg1;
- (id)titleView;
- (id)title;
- (void)setTitleView:(id)arg1 animated:(_Bool)arg2;
- (void)setTitleView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftItemsSupplementBackButton:(_Bool)arg1;
- (void)setLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)setBackButtonTitle:(id)arg1;
- (id)rightBarButtonItems;
- (id)rightBarButtonItem;
- (id)navigationBar;
- (_Bool)leftItemsSupplementBackButton;
- (id)leftBarButtonItems;
- (id)leftBarButtonItem;
- (id)backButtonTitle;
- (void)commitDelayedChanges;
- (void)dealloc;
- (id)initWithNavigationItem:(id)arg1;

@end

