//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (WFPrivateAdditions)
+ (id)wf_weatherDataOnDate:(id)arg1 inArray:(id)arg2;
+ (id)wf_weatherDatasOnDate:(id)arg1 inArray:(id)arg2;
+ (id)wf_weatherDataClosestToDate:(id)arg1 inArray:(id)arg2;
+ (_Bool)wf_isSameDayWithComponents:(id)arg1 andComponents:(id)arg2;
+ (long long)wf_minutesBetweenDateComponents:(id)arg1 andComponents:(id)arg2;
- (long long)wf_dateComponentsCompare:(id)arg1;
- (id)wf_componentsWithoutTimeZone;
- (_Bool)wf_componentsAreTimeless;
- (long long)wf_minutesDifferenceFromDate:(id)arg1;
- (long long)wf_minutesFromNow;
@end

