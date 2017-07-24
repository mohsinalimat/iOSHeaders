//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UILabel, UIView, _UINavigationBarLargeTitleView, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLargeTitleViewLayout : NSObject
{
    _Bool _supportsTwoLines;
    _Bool _alignAccessoryViewToTitleBaseline;
    _UINavigationBarLargeTitleView *_contentView;
    long long _titleType;
    UILabel *_titleLabel;
    double _titleRestingHeight;
    UIView *_accessoryView;
    unsigned long long _accessoryViewHorizontalAlignment;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
    double _restingHeightOfRefreshControl;
    UIView *_refreshHostContainerView;
}

@property(retain, nonatomic) UIView *refreshHostContainerView; // @synthesize refreshHostContainerView=_refreshHostContainerView;
@property(nonatomic) double restingHeightOfRefreshControl; // @synthesize restingHeightOfRefreshControl=_restingHeightOfRefreshControl;
@property(readonly, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // @synthesize refreshControlHost=_refreshControlHost;
@property(nonatomic) unsigned long long accessoryViewHorizontalAlignment; // @synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment;
@property(nonatomic) _Bool alignAccessoryViewToTitleBaseline; // @synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) double titleRestingHeight; // @synthesize titleRestingHeight=_titleRestingHeight;
@property(nonatomic) _Bool supportsTwoLines; // @synthesize supportsTwoLines=_supportsTwoLines;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(readonly, nonatomic) _UINavigationBarLargeTitleView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)invalidate;
- (struct CGSize)sizeFittingSize:(struct CGSize)arg1 titleType:(long long)arg2;
- (double)_textHeightForSize:(struct CGSize)arg1 titleType:(long long)arg2;
- (void)setContentHidden:(_Bool)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)cleanupAfterLayoutTransitionCompleted;
- (double)_unobstructedHeightOfRefreshControlWithFrame:(struct CGRect)arg1;
- (void)layoutViewsWithOffset:(struct UIOffset)arg1 useRestingTitleHeight:(_Bool)arg2;
- (void)layoutViews;
- (void)_enforceRefreshHostContainerViewOrdering;
- (void)configureRefreshControlUsingHost:(id)arg1;
- (void)updateRestingTitleHeight;
- (struct CGRect)_contentLayoutBounds;
- (struct CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(_Bool)arg1;
- (id)initWithContentView:(id)arg1;

@end

