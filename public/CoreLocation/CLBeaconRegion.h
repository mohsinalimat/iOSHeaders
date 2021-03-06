//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/CLRegion.h>

@class NSNumber, NSUUID;

@interface CLBeaconRegion : CLRegion
{
}

+ (_Bool)supportsSecureCoding;
+ (id)any;
@property(nonatomic) _Bool notifyEntryStateOnDisplay;
- (id)peripheralDataWithMeasuredPower:(id)arg1;
- (BOOL)_measuredPowerForDevice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSNumber *minor;
@property(readonly, copy, nonatomic) NSNumber *major;
@property(readonly, copy, nonatomic) NSUUID *proximityUUID;

@end

