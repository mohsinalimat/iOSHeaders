//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CaliTIPHandler : NSObject
{
}

+ (_Bool)diffsAreImportant:(id)arg1;
+ (void)processMessages:(id)arg1 inCalendar:(id)arg2;
+ (void)setLogiTIPDetail:(_Bool)arg1;
+ (_Bool)logiTIPDetail;
+ (void)initialize;
+ (id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2;
+ (void)processMessage:(id)arg1 inCalendar:(id)arg2;
+ (_Bool)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2;
+ (id)myAddressInAccount:(id)arg1 forEvent:(id)arg2;
+ (_Bool)isAddressMe:(id)arg1 forAccount:(id)arg2;
+ (_Bool)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3;
+ (id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3;
+ (id)debugStringForEvent:(id)arg1;

@end

