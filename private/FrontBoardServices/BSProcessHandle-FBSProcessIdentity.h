//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSProcessHandle.h>

#import <FrontBoardServices/FBSProcessIdentity-Protocol.h>

@class BSMachPortTaskNameRight, FBSProcessHandle, NSString;

@interface BSProcessHandle (FBSProcessIdentity) <FBSProcessIdentity>
@property(readonly, retain, nonatomic) FBSProcessHandle *handle;
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jobLabel; // @dynamic jobLabel;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) int pid;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @dynamic taskNameRight;
@end

