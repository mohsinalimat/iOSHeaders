//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (AttendeeSorting)
- (id)attendeesWithoutOrganizerAndLocations;
- (_Bool)hasHumanInviteesToDisplay;
- (id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1;
- (id)sortEKParticipantsIgnoringNonHumans:(id)arg1;
- (id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1;
@end

