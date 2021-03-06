//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMDaemonCore/IMDMessagePTaskStore-Protocol.h>

@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>
{
}

- (_Bool)updateTaskFlagsForPTask:(id)arg1;
- (_Bool)deleteAllCompletedTasks;
- (id)loadMostRecentMessagePTasks;
- (_Bool)storePTask:(id)arg1;
- (_Bool)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
- (_Bool)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg1 taskFlags:(long long)arg2;
- (id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)arg1;
- (_Bool)_networkCall_InsertRowGuid:(id)arg1 taskFlags:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

