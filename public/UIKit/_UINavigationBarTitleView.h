//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UINavigationBarAugmentedTitleView-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UINavigationItem, _UINavigationBarTitleViewOverlayRects;
@protocol _UINavigationBarTitleViewDataSource;

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView>
{
    NSLayoutConstraint *_heightConstraint;
    _UINavigationBarTitleViewOverlayRects *_overlayRects;
    _Bool _underlayBarContent;
    _Bool _hideBackButton;
    _Bool _hideLeadingBarButtons;
    _Bool _hideStandardTitle;
    _Bool _hideTrailingBarButtons;
    id <_UINavigationBarTitleViewDataSource> _dataSource;
    UINavigationItem *_navigationItem;
    long long _titleLocation;
    double _height;
}

@property(nonatomic) _Bool hideTrailingBarButtons; // @synthesize hideTrailingBarButtons=_hideTrailingBarButtons;
@property(nonatomic) _Bool hideStandardTitle; // @synthesize hideStandardTitle=_hideStandardTitle;
@property(nonatomic) _Bool hideLeadingBarButtons; // @synthesize hideLeadingBarButtons=_hideLeadingBarButtons;
@property(nonatomic) _Bool hideBackButton; // @synthesize hideBackButton=_hideBackButton;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool underlayBarContent; // @synthesize underlayBarContent=_underlayBarContent;
@property(nonatomic) long long titleLocation; // @synthesize titleLocation=_titleLocation;
@property(nonatomic) __weak UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(nonatomic, getter=_dataSource, setter=_setDataSource:) __weak id <_UINavigationBarTitleViewDataSource> _dataSource; // @synthesize _dataSource;
- (void).cxx_destruct;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)performTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)transitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)contentDidChange;
- (void)preferredContentSizeDidChange;
- (long long)preferredContentSizeForSize:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *contentOverlayRects;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

