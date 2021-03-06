//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMAccessoryProfile, NSMutableDictionary;
@protocol HFAccessorySettings;

@interface HFAccessorySettingAdapterManager : NSObject
{
    HMAccessoryProfile<HFAccessorySettings> *_accessoryProfile;
    NSMutableDictionary *_adaptersByID;
}

@property(readonly, nonatomic) NSMutableDictionary *adaptersByID; // @synthesize adaptersByID=_adaptersByID;
@property(readonly, nonatomic) __weak HMAccessoryProfile<HFAccessorySettings> *accessoryProfile; // @synthesize accessoryProfile=_accessoryProfile;
- (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1;

@end

