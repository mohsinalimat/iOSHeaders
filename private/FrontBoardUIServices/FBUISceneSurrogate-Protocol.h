//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/FBUISceneConduit-Protocol.h>

@class FBSSceneParameters, FBUISceneIdentity;
@protocol FBUISceneUpdater;

@protocol FBUISceneSurrogate <FBUISceneConduit>
- (void)registerSceneUpdater:(id <FBUISceneUpdater>)arg1;
- (FBSSceneParameters *)configureWithSceneIdentity:(FBUISceneIdentity *)arg1;
@end

