//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUValueFilter : NSObject
{
    double _currentValue;
}

@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;
- (double)outputValue;
- (void)setInputValue:(double)arg1;
- (id)initWithValue:(double)arg1;
- (id)init;

@end

