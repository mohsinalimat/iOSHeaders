//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HFDiscoveredAccessory, NSString;
@protocol HFHomeKitObject;

@interface HFDiscoveredAccessoryItem : HFItem <HFHomeKitItemProtocol>
{
    HFDiscoveredAccessory *_discoveredAccessory;
}

@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessory; // @synthesize discoveredAccessory=_discoveredAccessory;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)initWithDiscoveredAccessory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

