//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction
{
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
    NSString *_destinationContainerId;
}

@property(retain, nonatomic) NSString *destinationContainerId; // @synthesize destinationContainerId=_destinationContainerId;
@property(retain, nonatomic) NSString *sourceServerId; // @synthesize sourceServerId=_sourceServerId;
@property(retain, nonatomic) NSString *sourceContainerId; // @synthesize sourceContainerId=_sourceContainerId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;

@end

