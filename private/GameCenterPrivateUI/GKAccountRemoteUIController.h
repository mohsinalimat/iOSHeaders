//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKRemoteUIController.h>

@class NSArray, NSDictionary, NSURL;

@interface GKAccountRemoteUIController : GKRemoteUIController
{
    _Bool _authenticatePlayerOnCompletion;
    long long _mode;
    NSArray *_availableExternalServices;
    NSURL *_url;
    NSDictionary *_postBody;
}

+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *postBody; // @synthesize postBody=_postBody;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool authenticatePlayerOnCompletion; // @synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion;
@property(retain, nonatomic) NSArray *availableExternalServices; // @synthesize availableExternalServices=_availableExternalServices;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)postBodyForInitialLoad;
- (id)bagKey;
- (id)fallbackURL;
- (void)fireCompletionHandler;
- (void)dealloc;
- (id)initWithMode:(long long)arg1 player:(id)arg2;
- (id)initWithMode:(long long)arg1;

@end

