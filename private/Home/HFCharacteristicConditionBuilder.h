//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFConditionBuilder.h>

@class HMCharacteristic;

@interface HFCharacteristicConditionBuilder : HFConditionBuilder
{
    HMCharacteristic *_characteristic;
    unsigned long long _operatorType;
    id _value;
}

+ (id)_valuePredicateInCompoundPredicate:(id)arg1;
+ (id)_characteristicPredicateInCompoundPredicate:(id)arg1;
+ (_Bool)canHandlePredicate:(id)arg1;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (void)_updatePredicate;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

