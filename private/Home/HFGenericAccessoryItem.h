//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFGenericAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating>
{
    id <HFCharacteristicValueSource> _valueSource;
    HMAccessory *_accessory;
}

@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)controlPanelItems;
- (id)allControlItems;
- (id)incrementalStateControlItem;
- (id)primaryStateControlItem;
- (id)services;
- (id)accessories;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

