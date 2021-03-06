//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPostTask.h>

@class CalDAVScheduleResponseItem, NSArray, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask
{
    NSArray *_attendees;
    CalDAVScheduleResponseItem *_scheduleResponse;
    NSString *_originator;
}

@property(retain, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(retain, nonatomic) CalDAVScheduleResponseItem *scheduleResponse; // @synthesize scheduleResponse=_scheduleResponse;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)additionalHeaderValues;
- (id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4;

@end

