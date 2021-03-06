//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSEventQueue, NSString;

@interface BSEventQueueLock : NSObject
{
    _Bool _relinquished;
    NSString *_reason;
    BSEventQueue *_eventQueue;
}

@property(retain, nonatomic) BSEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)relinquish;
- (id)description;
- (void)dealloc;
- (id)initWithEventQueue:(id)arg1 reason:(id)arg2;

@end

