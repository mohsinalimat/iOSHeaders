//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropFindTask.h>

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask
{
    _Bool _syncEvents;
    _Bool _syncTodos;
    NSDateComponents *_eventFilterStartDate;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
    NSDateComponents *_todoFilterEndDate;
}

@property(retain, nonatomic) NSDateComponents *todoFilterEndDate; // @synthesize todoFilterEndDate=_todoFilterEndDate;
@property(retain, nonatomic) NSDateComponents *todoFilterStartDate; // @synthesize todoFilterStartDate=_todoFilterStartDate;
@property(retain, nonatomic) NSDateComponents *eventFilterEndDate; // @synthesize eventFilterEndDate=_eventFilterEndDate;
@property(retain, nonatomic) NSDateComponents *eventFilterStartDate; // @synthesize eventFilterStartDate=_eventFilterStartDate;
@property(nonatomic) _Bool syncTodos; // @synthesize syncTodos=_syncTodos;
@property(nonatomic) _Bool syncEvents; // @synthesize syncEvents=_syncEvents;
- (void).cxx_destruct;
- (id)requestBody;
- (void)_appendComponentFiltersToXMLData:(id)arg1;
- (void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_icsDateStringForNSDateComponents:(id)arg1;
- (id)httpMethod;
- (id)description;

@end

