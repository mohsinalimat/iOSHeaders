//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDAccessorySettingGroupMetadata, NSString;

@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject>
{
    HMDAccessorySettingGroupMetadata *_rootGroup;
}

@property(readonly) HMDAccessorySettingGroupMetadata *rootGroup; // @synthesize rootGroup=_rootGroup;
- (void).cxx_destruct;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

