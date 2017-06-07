//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>

@class HFItem, HUGridSceneCellLayoutOptions, HUIconView, HUPieProgressView, NAFuture, NSArray, NSString, UIView, _HUGridActionSetTitleAndDescriptionView;

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol>
{
    HFItem *_item;
    NAFuture *_executeActionSetFuture;
    UIView *_accessoryView;
    HUIconView *_iconView;
    _HUGridActionSetTitleAndDescriptionView *_titleAndDescriptionView;
    HUPieProgressView *_progressView;
    NSArray *_actionSetCellConstraints;
    NAFuture *_internalExecuteActionSetFuture;
    HUGridSceneCellLayoutOptions *_sceneCellLayoutOptions;
}

+ (Class)layoutOptionsClass;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) __weak HUGridSceneCellLayoutOptions *sceneCellLayoutOptions; // @synthesize sceneCellLayoutOptions=_sceneCellLayoutOptions;
@property(retain, nonatomic) NAFuture *internalExecuteActionSetFuture; // @synthesize internalExecuteActionSetFuture=_internalExecuteActionSetFuture;
@property(retain, nonatomic) NSArray *actionSetCellConstraints; // @synthesize actionSetCellConstraints=_actionSetCellConstraints;
@property(retain, nonatomic) HUPieProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) _HUGridActionSetTitleAndDescriptionView *titleAndDescriptionView; // @synthesize titleAndDescriptionView=_titleAndDescriptionView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) NAFuture *executeActionSetFuture; // @synthesize executeActionSetFuture=_executeActionSetFuture;
- (id)item;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (void)_updateLabelsWithTitle:(id)arg1 description:(id)arg2 primaryState:(long long)arg3;
- (void)_updateLabels;
- (void)displayStyleDidChange;
- (void)layoutOptionsDidChange;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)setItem:(id)arg1;
- (void)_setupActionSetCell;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

