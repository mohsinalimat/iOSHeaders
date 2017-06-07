//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPCharacteristicMetadata, NSNumber, NSUUID;

@interface HAPBTLECharacteristicSignature : NSObject
{
    _Bool _authenticated;
    NSUUID *_characteristicType;
    NSNumber *_serviceInstanceID;
    NSUUID *_serviceType;
    unsigned long long _characteristicProperties;
    HAPCharacteristicMetadata *_characteristicMetadata;
}

@property(readonly, nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) HAPCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
@property(readonly, nonatomic) unsigned long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(readonly, copy, nonatomic) NSUUID *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSNumber *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, copy, nonatomic) NSUUID *characteristicType; // @synthesize characteristicType=_characteristicType;
- (void).cxx_destruct;
- (id)initWithCharacteristicType:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 characteristicProperties:(unsigned long long)arg4 characteristicMetadata:(id)arg5 authenticated:(_Bool)arg6;

@end

