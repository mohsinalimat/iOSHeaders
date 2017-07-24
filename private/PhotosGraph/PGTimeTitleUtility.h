//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGTimeTitleUtility : NSObject
{
}

+ (id)_locationNodesForTimeTitleFromLocationNodes:(id)arg1;
+ (id)_significantDateNodesFromEventNodes:(id)arg1 dateFormatterType:(unsigned long long)arg2;
+ (id)_dateNodesFromEventNodes:(id)arg1;
+ (id)_commonLocationLabelForLocationNodes:(id)arg1;
+ (unsigned long long)_numberOfVisitsPerYearInEvents:(id)arg1 withLocationNodes:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4;
+ (unsigned long long)_numberOfVisitsPerMonthInEvents:(id)arg1 withLocationNodes:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4;
+ (void)_enumerateNeighborNodesOfEventNodes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (_Bool)_eventNodes:(id)arg1 coverCompleteTimeWithEdgeLabel:(id)arg2;
+ (_Bool)_eventNodesCoverCompleteYear:(id)arg1;
+ (_Bool)_eventNodesCoverCompleteMonth:(id)arg1;
+ (unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (_Bool)yearIsNeededForDisplayingDate:(id)arg1;
+ (_Bool)_yearIsNeededForDisplayingDate:(id)arg1;
+ (id)numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 useOrdinal:(_Bool)arg3;
+ (id)_numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1;
+ (id)_splitTimeTitleWithLocalStartDate:(id)arg1 endDate:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 allowedFormats:(unsigned long long)arg5 locale:(id)arg6;
+ (id)splitTimeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)splitTimeTitleWithOptions:(id)arg1;
+ (id)timeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)timeTitleWithOptions:(id)arg1;

@end

