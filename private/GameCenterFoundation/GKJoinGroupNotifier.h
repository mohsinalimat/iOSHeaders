//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKJoinGroup, NSError, NSLock, NSMutableArray;

@interface GKJoinGroupNotifier : NSObject
{
    GKJoinGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
    NSError *_error;
}

@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)setResult:(CDUnknownBlockType)arg1 error:(id)arg2;
@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) GKJoinGroup *group; // @synthesize group=_group;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (id)init;

@end

