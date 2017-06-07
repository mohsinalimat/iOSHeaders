//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUIconView, NSArray, UILabel;
@protocol HFStringGenerator;

@interface HUQuickControlSummaryView : UIView
{
    HUIconView *_iconView;
    id <HFStringGenerator> _primaryStatusText;
    id <HFStringGenerator> _secondaryStatusText;
    unsigned long long _contentAlignment;
    long long _sizeSubclass;
    unsigned long long _iconSize;
    UILabel *_primaryStatusLabel;
    UILabel *_secondaryStatusLabel;
    NSArray *_contentConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(readonly, nonatomic) UILabel *secondaryStatusLabel; // @synthesize secondaryStatusLabel=_secondaryStatusLabel;
@property(readonly, nonatomic) UILabel *primaryStatusLabel; // @synthesize primaryStatusLabel=_primaryStatusLabel;
@property(nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long sizeSubclass; // @synthesize sizeSubclass=_sizeSubclass;
@property(nonatomic) unsigned long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(copy, nonatomic) id <HFStringGenerator> secondaryStatusText; // @synthesize secondaryStatusText=_secondaryStatusText;
@property(copy, nonatomic) id <HFStringGenerator> primaryStatusText; // @synthesize primaryStatusText=_primaryStatusText;
@property(readonly, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (double)_iconHeight;
- (void)_updateSecondaryStatusContent;
- (void)_updatePrimaryStatusContent;
- (void)_invalidateContentAndConstraints;
- (id)_statusParagraphStyleWithLineHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
