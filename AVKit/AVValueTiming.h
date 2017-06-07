//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/NSCoding-Protocol.h>
#import <AVKit/NSCopying-Protocol.h>
#import <AVKit/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
+ (double)currentTimeStamp;
@property(readonly, nonatomic) double rate;
@property(readonly, nonatomic) double anchorTimeStamp;
@property(readonly, nonatomic) double anchorValue;
- (CDStruct_c3b9c2ee)_timing;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValueTiming:(id)arg1;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (_Bool)isEqualToValueTiming:(id)arg1;
- (double)timeStampForValue:(double)arg1;
- (double)valueForTimeStamp:(double)arg1;
@property(readonly, nonatomic) double currentValue;

@end
