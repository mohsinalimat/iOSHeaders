//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/_HMAccesorySettingGroupDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, _HMAccessorySettingGroup;
@protocol OS_dispatch_queue;

@interface HMAccessorySettingGroup : NSObject <_HMAccesorySettingGroupDelegate>
{
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    _HMAccessorySettingGroup *_internal;
    HMAccessorySettingGroup *_group;
}

@property __weak HMAccessorySettingGroup *group; // @synthesize group=_group;
@property(readonly) _HMAccessorySettingGroup *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didAddSetting:(id)arg2;
- (void)removeGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeGroup:(id)arg1;
- (void)addGroup:(id)arg1;
@property(readonly, copy) NSArray *groups;
- (void)removeSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeSetting:(id)arg1;
- (void)addSetting:(id)arg1;
@property(readonly, copy) NSArray *settings;
@property(readonly, copy) NSString *keyPath;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *localizedTitle;
@property(readonly, copy) NSString *description;
- (id)initWithInternal:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

