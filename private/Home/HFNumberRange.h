//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HFNumberRange : NSObject
{
    unsigned long long _type;
    NSNumber *_maxValue;
    NSNumber *_midValue;
    NSNumber *_minValue;
}

+ (id)valueWithValue:(id)arg1;
+ (id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2;
@property(copy, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(copy, nonatomic) NSNumber *midValue; // @synthesize midValue=_midValue;
@property(copy, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

