//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFTimeConditionBuilder.h>

@class NSDateComponents;

@interface HFDateComponentsConditionBuilder : HFTimeConditionBuilder
{
    NSDateComponents *_dateComponents;
}

+ (_Bool)canHandlePredicate:(id)arg1;
@property(retain, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
- (void).cxx_destruct;
- (void)_updatePredicate;
- (void)setComparisonType:(unsigned long long)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

