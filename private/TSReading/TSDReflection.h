//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    double mOpacity;
    double mFadeAcceleration;
}

+ (_Bool)canMixWithNilObjects;
+ (id)reflection;
@property(readonly, nonatomic) double fadeAcceleration; // @synthesize fadeAcceleration=mFadeAcceleration;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOpacity:(double)arg1;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;
- (id)init;

@end

