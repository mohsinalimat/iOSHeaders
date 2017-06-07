//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARMutableSensorData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface ARGyroscopeData : NSObject <ARMutableSensorData, NSSecureCoding>
{
    double _timestamp;
    CDStruct_31142d93 _rotationRate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
