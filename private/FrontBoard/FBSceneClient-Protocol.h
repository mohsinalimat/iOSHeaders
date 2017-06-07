//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneDefinition, FBSSceneParameters, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;
@protocol FBSceneHost;

@protocol FBSceneClient <NSObject>
- (void)host:(id <FBSceneHost>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)host:(id <FBSceneHost>)arg1 didInvalidateWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(_Bool))arg3;
- (void)host:(id <FBSceneHost>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(_Bool))arg5;
- (void)host:(id <FBSceneHost>)arg1 configureWithDefinition:(FBSSceneDefinition *)arg2 parameters:(FBSSceneParameters *)arg3;

@optional
- (void)host:(id <FBSceneHost>)arg1 configureWithInitialClientSettings:(FBSSceneClientSettings *)arg2;
@end

