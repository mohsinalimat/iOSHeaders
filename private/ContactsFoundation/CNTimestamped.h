//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNTimestamped : NSObject
{
    id _value;
    double _timestamp;
}

+ (id)timestampedWithValue:(id)arg1 timestamp:(double)arg2;
+ (CDUnknownBlockType)wrapTransformWithScheduler:(id)arg1;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithValue:(id)arg1 timestamp:(double)arg2;

@end

