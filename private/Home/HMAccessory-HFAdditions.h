//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

@class NSSet;

@interface HMAccessory (HFAdditions)
@property(readonly, nonatomic) NSSet *hf_programmableSwitchNamespaceServices;
- (id)hf_serviceOfType:(id)arg1;
@property(readonly, nonatomic) unsigned long long hf_numberOfProgrammableSwitches;
@property(readonly, nonatomic) long long hf_appPunchOutReason;
@property(readonly, nonatomic) NSSet *hf_displayNamesForVisibleTiles;
@property(readonly, nonatomic) NSSet *hf_visibleServices;
@property(readonly, nonatomic) _Bool hf_isProgrammableSwitch;
@property(readonly, nonatomic) _Bool hf_isCamera;
@property(readonly, nonatomic) _Bool hf_isBridge;
@property(readonly, nonatomic) _Bool hf_requiresFirmwareUpdate;
@end

