//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DADaemonSupport/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol DAEventsCalendarDirectorySearchResponseConsumer <NSObject>
- (void)calendarDirectorySearchFinishedWithError:(NSError *)arg1 exceededResultLimit:(_Bool)arg2;
- (void)calendarDirectorySearchReturnedResults:(NSDictionary *)arg1;
@end

