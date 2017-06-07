//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, NSString;

@interface HFActionSetSuggestionItem : HFItem
{
    HMHome *_home;
    NSString *_builtInActionSetType;
}

@property(readonly, nonatomic) NSString *builtInActionSetType; // @synthesize builtInActionSetType=_builtInActionSetType;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)_actionBuildersToSetTargetBlindsPositionOpen:(_Bool)arg1;
- (id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1;
- (id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetLightbulbBrightness:(double)arg1;
- (id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1;
- (id)_actionBuildersToSetPowerState:(_Bool)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionSetBuilderForBuiltInActionSetType:(id)arg1 outDependentServiceTypes:(out id *)arg2;
- (id)_builtInActionSetOfType:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 builtInActionSetType:(id)arg2;
- (id)init;

@end

