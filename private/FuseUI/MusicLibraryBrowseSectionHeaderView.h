//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <FuseUI/MusicActionableHeaderViewDelegate-Protocol.h>

@class MusicActionableHeaderView, NSString, UIColor, UIView, _UIBackdropView;
@protocol MusicLibraryBrowseSectionHeaderViewDelegate;

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate>
{
    MusicActionableHeaderView *_actionableHeaderView;
    _UIBackdropView *_floatingBackdropView;
    UIView *_hairlineView;
    _Bool _shouldSkipLayout;
    NSString *_backdropGroupName;
    UIColor *_backgroundColorForNonFloatingState;
    long long _hairlineStyleForNonFloatingState;
    UIColor *_headerTextColorForNonFloatingState;
    double _topContentInset;
    id <MusicLibraryBrowseSectionHeaderViewDelegate> _delegate;
}

+ (CDStruct_4a0565dd)_actionableHeaderMetricsForDisplayScale:(double)arg1;
+ (double)heightForTraitCollection:(id)arg1;
@property(nonatomic) __weak id <MusicLibraryBrowseSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(retain, nonatomic) UIColor *headerTextColorForNonFloatingState; // @synthesize headerTextColorForNonFloatingState=_headerTextColorForNonFloatingState;
@property(nonatomic) long long hairlineStyleForNonFloatingState; // @synthesize hairlineStyleForNonFloatingState=_hairlineStyleForNonFloatingState;
@property(retain, nonatomic) UIColor *backgroundColorForNonFloatingState; // @synthesize backgroundColorForNonFloatingState=_backgroundColorForNonFloatingState;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
- (void).cxx_destruct;
- (void)_setupForCurrentFloatingState;
@property(copy, nonatomic) NSString *headerText;
@property(nonatomic, getter=isActionable) _Bool actionable;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (void)setFloating:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutBelowIfNeeded;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

