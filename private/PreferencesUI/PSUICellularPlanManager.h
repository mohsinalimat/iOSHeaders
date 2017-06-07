//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTCellularPlanItem, NSArray;

@interface PSUICellularPlanManager : NSObject
{
    _Bool _cacheIsValid;
    NSArray *_planItems;
    CTCellularPlanItem *_selectedPlanItem;
    _Bool _hasSubscriptions;
    _Bool _hasHomePlan;
    _Bool _isMultipleDataPlanSupportAvailable;
    _Bool _isRoamingPlanSupportAvailable;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowPlanSelector;
@property(readonly, nonatomic) _Bool isSelectedPlanExpired;
@property(readonly, nonatomic) _Bool isAnyPlanActivating;
@property(readonly, nonatomic) _Bool isSelectedPlanActivating;
@property(readonly, nonatomic) _Bool shouldShowAccountRenew;
@property(readonly, nonatomic) _Bool shouldShowAccountSetup;
@property(readonly, nonatomic) _Bool hasSubscriptions;
@property(readonly, nonatomic) _Bool isRoamingPlanSupportAvailable;
@property(readonly, nonatomic) _Bool isMultipleDataPlanSupportAvailable;
@property(retain, nonatomic) CTCellularPlanItem *selectedPlanItem;
@property(readonly, nonatomic) NSArray *planItems;
@property(readonly, nonatomic) _Bool shouldShowDataPlanList;
@property(readonly, nonatomic) _Bool shouldShowAddPlan;
- (void)_fetchPlanItemsIfNeeded;
- (void)_invalidatePlanItemsCache;
- (void)_planInfoDidChange;
- (void)dealloc;
- (id)init;

@end
