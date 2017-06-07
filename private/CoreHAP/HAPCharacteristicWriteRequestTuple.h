//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPCharacteristic, NSData, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : NSObject
{
    _Bool _timedWrite;
    HAPCharacteristic *_characteristic;
    id _value;
    NSData *_authorizationData;
    NSNumber *_enableEvents;
}

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(_Bool)arg4;
@property(retain, nonatomic) NSNumber *enableEvents; // @synthesize enableEvents=_enableEvents;
@property(nonatomic) _Bool timedWrite; // @synthesize timedWrite=_timedWrite;
@property(retain, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;

@end

