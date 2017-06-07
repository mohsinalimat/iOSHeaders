//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject
{
    EKSource *_source;
    NSMutableArray *_array;
}

+ (id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(_Bool)arg2;
@property(readonly) NSMutableArray *calendarArray; // @synthesize calendarArray=_array;
- (void).cxx_destruct;
- (_Bool)shouldShowWhenViewingLists;
- (_Bool)shouldShowWhenEditingLists;
- (_Bool)canDeleteList;
- (_Bool)canAddList;
- (_Bool)_isNonEmpty;
- (id)source;
- (id)title;
- (int)sortOrder;
- (id)initWithSource:(id)arg1;

@end

