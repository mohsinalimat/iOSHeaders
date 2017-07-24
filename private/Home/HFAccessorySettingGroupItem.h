//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFAccessorySettingItemProtocol-Protocol.h>

@class HFAccessorySettingsEntity, HMAccessoryProfile, HMAccessorySelectionSetting, HMAccessorySettingGroup, NSString;
@protocol HFAccessorySettings, HFHomeKitObject;

@interface HFAccessorySettingGroupItem : HFItem <HFAccessorySettingItemProtocol>
{
    HMAccessoryProfile<HFAccessorySettings> *_accessoryProfile;
    HFAccessorySettingsEntity *_entity;
    HMAccessorySettingGroup *_settingGroup;
    HMAccessorySelectionSetting *_selectionSetting;
}

@property(readonly, nonatomic) HMAccessorySelectionSetting *selectionSetting; // @synthesize selectionSetting=_selectionSetting;
@property(readonly, nonatomic) HMAccessorySettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(readonly, nonatomic) HFAccessorySettingsEntity *entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile; // @synthesize accessoryProfile=_accessoryProfile;
- (void).cxx_destruct;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) NSString *settingKeyPath;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessoryProfile:(id)arg1 selectionSetting:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 group:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 entity:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

