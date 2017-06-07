//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMAccessory, HMService, NSSet;
@protocol HFCharacteristicValueSource;

@interface HFServiceLikeItemUpdateRequest : NSObject
{
    HMAccessory *_accessory;
    HMService *_service;
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_characteristics;
}

@property(retain, nonatomic) NSSet *characteristics; // @synthesize characteristics=_characteristics;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(retain, nonatomic) HMService *service; // @synthesize service=_service;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)_standardResultsForReadResponse:(id)arg1 displayMetadata:(id)arg2 batteryLevelResults:(id)arg3 updateOptions:(id)arg4;
- (id)_displayMetadataForReadRespnose:(id)arg1;
- (id)updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2 characteristics:(id)arg3;
- (id)initWithService:(id)arg1 valueSource:(id)arg2 characteristicTypes:(id)arg3;

@end
