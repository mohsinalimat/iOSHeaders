//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSWorkspaceActionsEvent, FBSWorkspaceClient, FBSWorkspaceCreateSceneEvent, FBSWorkspaceDestroySceneEvent;

@protocol FBSWorkspaceClientDelegate <NSObject>
- (void)client:(FBSWorkspaceClient *)arg1 handleActions:(FBSWorkspaceActionsEvent *)arg2;
- (void)client:(FBSWorkspaceClient *)arg1 handleDestroyScene:(FBSWorkspaceDestroySceneEvent *)arg2 withCompletion:(void (^)(FBSWorkspaceDestroySceneResponseEvent *))arg3;
- (void)client:(FBSWorkspaceClient *)arg1 handleCreateScene:(FBSWorkspaceCreateSceneEvent *)arg2 withCompletion:(void (^)(FBSWorkspaceCreateSceneResponseEvent *))arg3;
- (void)clientEndTransaction:(FBSWorkspaceClient *)arg1;
- (void)clientBeginTransaction:(FBSWorkspaceClient *)arg1;
- (void)clientSystemApplicationTerminated:(FBSWorkspaceClient *)arg1;
@end

