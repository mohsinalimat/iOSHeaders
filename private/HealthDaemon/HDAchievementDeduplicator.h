//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDAchievementDeduplicator : NSObject
{
}

+ (unsigned long long)_pickWinningAchievementWithAdded:(id)arg1 existing:(id)arg2 strategy:(unsigned long long)arg3;
+ (id)findAchievementsInSet:(id)arg1 missingFromSet:(id)arg2 inCalendar:(id)arg3;
+ (void)findDuplicatesInAddedAchievements:(id)arg1 existingAchievements:(id)arg2 foundDuplicatesInAdded:(id *)arg3 duplicatesInExisting:(id *)arg4;

@end

