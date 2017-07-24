//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>

#import <Home/NSCopying-Protocol.h>

@class NSNumber;

@interface HFPercentFormatter : NSNumberFormatter <NSCopying>
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (id)_percentageFromValue:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;
+ (id)_valueFromPercentage:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (void).cxx_destruct;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForRelativePercentValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2;

@end

