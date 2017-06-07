//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HMResidentDevice, NSString;
@protocol HFHomeKitObject;

@interface HFResidentDeviceItem : HFItem <HFHomeKitItemProtocol, NSCopying>
{
    HMResidentDevice *_residentDevice;
}

@property(readonly, nonatomic) HMResidentDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithResidentDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

