//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

__attribute__((visibility("hidden")))
@interface CADSpotlightOperationGroup : CADOperationGroup
{
}

+ (id)whitelistedBundles;
+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)_resetDatabase;
- (void)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1;
- (void)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1 inBatchesOf:(unsigned long long)arg2;
- (id)_gatherAllCalendarItemUUIDs;
- (void)CADPushItemsToSpotlight:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

@end

