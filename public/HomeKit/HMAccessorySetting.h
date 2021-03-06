//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/_HMAccesorySettingDelegate-Protocol.h>

@class HMAccessorySettingGroup, NSString, _HMAccessorySetting;
@protocol NSCopying><NSSecureCoding;

@interface HMAccessorySetting : NSObject <_HMAccesorySettingDelegate>
{
    _HMAccessorySetting *_internal;
    HMAccessorySettingGroup *_group;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)settingForInternal:(id)arg1;
@property __weak HMAccessorySettingGroup *group; // @synthesize group=_group;
@property(readonly) _HMAccessorySetting *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (void)_settingDidUpdateValue:(id)arg1;
- (void)_settingWillUpdateValue:(id)arg1;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) id <NSCopying><NSSecureCoding> value;
@property(readonly) Class valueClass;
@property(readonly, copy) NSString *localizedTitle;
@property(readonly, copy) NSString *keyPath;
@property(readonly, getter=isWritable) _Bool writable;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithInternal:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

