//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class CAMediaTimingFunction, NSString;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding>
{
    double _duration;
    double _delay;
    double _frameInterval;
    CAMediaTimingFunction *_timingFunction;
    float _speed;
}

+ (_Bool)supportsSecureCoding;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)settingsWithDuration:(double)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_setSpeed:(float)arg1;
- (void)_setFrameInterval:(double)arg1;
- (void)_setTimingFunction:(id)arg1;
- (void)_setDelay:(double)arg1;
- (void)_setDuration:(double)arg1;
- (_Bool)isSpringAnimation;
@property(readonly, nonatomic) float speed;
@property(readonly, nonatomic) double frameInterval;
@property(readonly, retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) double duration;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyToCAAnimation:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4 speed:(float)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

