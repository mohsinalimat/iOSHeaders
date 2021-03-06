//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSSceneSettings, FBSSceneTransitionContext;

@interface FBProcessWatchdogEventContext : NSObject
{
    long long _event;
    FBSSceneSettings *_sceneSettings;
    FBSSceneTransitionContext *_sceneTransitionContext;
}

+ (id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3;
@property(readonly, nonatomic) FBSSceneTransitionContext *sceneTransitionContext; // @synthesize sceneTransitionContext=_sceneTransitionContext;
@property(readonly, nonatomic) FBSSceneSettings *sceneSettings; // @synthesize sceneSettings=_sceneSettings;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;

@end

