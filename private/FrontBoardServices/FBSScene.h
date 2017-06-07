//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplay, FBSDisplay, FBSSceneClientSettings, FBSSceneSettings, NSArray, NSString;
@protocol FBSSceneDelegate;

@interface FBSScene : NSObject
{
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)invalidate;
- (void)_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_hasAgent;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
@property(readonly, retain, nonatomic) FBSDisplay *fbsDisplay;
@property(readonly, nonatomic) CADisplay *display;
@property(readonly, retain, nonatomic) NSArray *layers;
@property(readonly, retain, nonatomic) NSArray *contexts;
@property(readonly, retain, nonatomic) FBSSceneClientSettings *clientSettings;
@property(readonly, retain, nonatomic) FBSSceneSettings *settings;
@property(nonatomic) id <FBSSceneDelegate> delegate;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_init;
- (id)init;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;

@end

