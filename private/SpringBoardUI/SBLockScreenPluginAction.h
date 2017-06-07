//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject
{
    BSAction *_action;
    NSString *_label;
    long long _authenticationPolicy;
    CDUnknownBlockType _completion;
}

+ (id)actionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)action;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long authenticationPolicy; // @synthesize authenticationPolicy=_authenticationPolicy;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)sendResponseWithSuccess:(_Bool)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (_Bool)isCallAction;
- (_Bool)isInCallAction;
- (_Bool)isApplicationAction;
- (_Bool)isEmergencyDialerAction;

@end

