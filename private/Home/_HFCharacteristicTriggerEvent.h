//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCharacteristic;

@interface _HFCharacteristicTriggerEvent : NSObject
{
    id _triggerValue;
    HMCharacteristic *_characteristic;
}

+ (id)characteristicTriggerTupleWithCharacteristic:(id)arg1 triggerValue:(id)arg2;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(copy, nonatomic) id triggerValue; // @synthesize triggerValue=_triggerValue;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2;

@end

