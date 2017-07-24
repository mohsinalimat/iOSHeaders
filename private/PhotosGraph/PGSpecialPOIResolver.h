//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject
{
    NSArray *_momentNodes;
    NSMutableDictionary *_countBySpecialPOI;
}

+ (id)_nameBySpecialPOI;
+ (id)_regionsBySpecialPOI;
@property(retain, nonatomic) NSMutableDictionary *countBySpecialPOI; // @synthesize countBySpecialPOI=_countBySpecialPOI;
@property(readonly, nonatomic) NSArray *momentNodes; // @synthesize momentNodes=_momentNodes;
- (void).cxx_destruct;
- (unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2;
- (unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1;
- (_Bool)anyMomentHasPOIEntertainment;
- (unsigned long long)specialPOIsWithMomentRatio:(double)arg1;
- (unsigned long long)specialPOIsInAnyMoment;
- (_Bool)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2;
- (_Bool)anyMomentContainsSpecialPOI:(unsigned long long)arg1;
- (id)initWithMomentNodes:(id)arg1;

@end
