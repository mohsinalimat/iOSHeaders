//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue
{
}

+ (id)sharedInstance;
- (void)_noteQueueDidUnlock;
- (void)_noteQueueDidLock;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (_Bool)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;
- (void)executeOrPrependEvents:(id)arg1;
- (void)executeOrPrependEvent:(id)arg1;
- (void)executeOrAppendEvent:(id)arg1;

@end

