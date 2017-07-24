//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMDSpamController : NSObject
{
    NSMutableDictionary *_chatGUIDToSpamCheckTimerMap;
    NSMutableDictionary *_chatGUIDToCountMap;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *chatGUIDToCountMap; // @synthesize chatGUIDToCountMap=_chatGUIDToCountMap;
@property(retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap; // @synthesize chatGUIDToSpamCheckTimerMap=_chatGUIDToSpamCheckTimerMap;
- (void)detectSpam:(id)arg1 chatGUID:(id)arg2;
- (_Bool)_isDisabled;
- (id)chatRegistry;
- (void)_spamCheckTimerFired:(id)arg1;
- (void)_updateSpamCheckTimerWithInterval:(double)arg1 forChatGUID:(id)arg2;
- (void)__queryServerForID:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;

@end

