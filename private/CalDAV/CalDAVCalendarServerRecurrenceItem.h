//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
    CalDAVCalendarServerChangesItem *_changes;
}

@property(retain, nonatomic) CalDAVCalendarServerChangesItem *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) CoreDAVLeafItem *recurrenceID; // @synthesize recurrenceID=_recurrenceID;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *master; // @synthesize master=_master;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMaster;
- (id)copyParseRules;
- (id)init;

@end

