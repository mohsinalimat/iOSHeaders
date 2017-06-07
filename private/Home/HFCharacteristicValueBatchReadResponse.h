//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueBatchReadResponse : NSObject <NSCopying>
{
    NSMutableSet *_allCharacteristics;
    NSMutableSet *_allCharacteristicTypes;
    id <HFCharacteristicOperationContextProviding> _contextProvider;
    NSMutableDictionary *_valuesByCharacteristicType;
    NSMutableDictionary *_errorsByCharacteristicType;
}

@property(readonly, nonatomic) NSMutableDictionary *errorsByCharacteristicType; // @synthesize errorsByCharacteristicType=_errorsByCharacteristicType;
@property(readonly, nonatomic) NSMutableDictionary *valuesByCharacteristicType; // @synthesize valuesByCharacteristicType=_valuesByCharacteristicType;
@property(retain, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(readonly, nonatomic) NSSet *allCharacteristicTypes; // @synthesize allCharacteristicTypes=_allCharacteristicTypes;
@property(readonly, nonatomic) NSSet *allCharacteristics; // @synthesize allCharacteristics=_allCharacteristics;
- (void).cxx_destruct;
- (_Bool)didReadValueForCharacteristicType:(id)arg1;
- (_Bool)hasErrorForEveryCharacteristic;
- (_Bool)hasAnyErrors;
- (void)addError:(id)arg1 forCharacteristic:(id)arg2;
- (void)addValue:(id)arg1 forCharacteristic:(id)arg2;
- (void)addCharacteristic:(id)arg1;
- (id)errorForCharacteristicType:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 outCharacteristic:(out id *)arg2;
- (id)valueForCharacteristicType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

