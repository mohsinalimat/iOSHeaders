//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate
{
    unsigned long long _type;
}

@property(readonly) unsigned long long type; // @synthesize type=_type;
- (long long)hourInGMT:(id)arg1;
- (id)timeOfDayAsString:(unsigned long long)arg1;
- (unsigned long long)timeOfDay:(id)arg1;
- (float)efficiencyForItems:(id)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)title;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

@end

