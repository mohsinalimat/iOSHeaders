//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKSyncCoordinatorLogging : NSObject
{
}

+ (void)_syncCoordinatorDidCreateChangeSet:(id)arg1;
+ (void)_syncCoordinatorDidDeleteRemoteEvents:(id)arg1;
+ (void)_syncCoordinatorDidAddRemoteEvents:(id)arg1;
+ (void)_syncCoordinatorDidInsertLocalAdditionEvents:(id)arg1;
+ (void)_updateSyncCounter:(id)arg1 notification:(id)arg2;
+ (id)typeValueWithStreamName:(id)arg1;
+ (id)portraitStreamNames;
+ (void)load;

@end

