//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolConsoleDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)heapSnapshotWithTimestamp:(double)arg1 snapshotData:(id)arg2 title:(id *)arg3;
- (void)messagesCleared;
- (void)messageRepeatCountUpdatedWithCount:(int)arg1;
- (void)messageAddedWithMessage:(id)arg1;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end
