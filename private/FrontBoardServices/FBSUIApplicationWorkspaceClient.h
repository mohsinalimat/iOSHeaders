//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceClient.h>

@protocol FBSUIApplicationWorkspaceClientDelegate;

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient
{
}

- (void)_queue_handleAssertionExpirationImminent:(id)arg1;
- (void)_queue_handleExit:(id)arg1;
- (void)_queue_handleLaunch:(id)arg1;
- (_Bool)willObserveLayersManually;
- (_Bool)_queue_handleMessageWithType:(long long)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <FBSUIApplicationWorkspaceClientDelegate> delegate; // @dynamic delegate;

@end

