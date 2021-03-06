//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@interface AXMVisionColor : NSObject <NSSecureCoding>
{
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
    unsigned char _hue;
    unsigned char _saturation;
    unsigned char _brightness;
}

+ (_Bool)supportsSecureCoding;
+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3;
+ (id)colorWithHue:(unsigned char)arg1 saturation:(unsigned char)arg2 brightness:(unsigned char)arg3;
+ (id)colorWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
@property(readonly, nonatomic) double brightnessFloat;
@property(readonly, nonatomic) double saturationFloat;
- (double)hueRadians;
@property(readonly, nonatomic) double hueFloat;
@property(readonly, nonatomic) double blueFloat;
@property(readonly, nonatomic) double greenFloat;
@property(readonly, nonatomic) double redFloat;
- (double)euclidianDistanceHS:(id)arg1;
- (double)euclidianDistanceHSV:(id)arg1;
- (void)_getRed:(char *)arg1 green:(char *)arg2 blue:(char *)arg3;
- (void)_getHue:(char *)arg1 saturation:(char *)arg2 brightness:(char *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToAXMVisionColor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

