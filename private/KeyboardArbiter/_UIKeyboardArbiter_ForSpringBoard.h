//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/_UIKeyboardArbiterLink-Protocol.h>

@class NSString, SBUIScene, SBUIWorkspace, _UIKeyboardArbiter;

@interface _UIKeyboardArbiter_ForSpringBoard : NSObject <_UIKeyboardArbiterLink>
{
    SBUIWorkspace *_workspace;
    SBUIScene *_scene;
    _UIKeyboardArbiter *owner;
}

+ (void)launch;
@property(nonatomic) __weak _UIKeyboardArbiter *owner; // @synthesize owner;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (void)updateSceneSettings;
- (void)createSceneWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectWithQueue:(id)arg1;
@property(readonly, nonatomic) _Bool isAvailable;
@property(readonly, nonatomic) NSString *serviceName;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

