//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BLTLightsAndSirensReplyInfoCache : NSObject
{
    NSMutableDictionary *_localReplyInfo;
    NSDate *_timeToCheck;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedReplyCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDate *timeToCheck; // @synthesize timeToCheck=_timeToCheck;
@property(retain, nonatomic) NSMutableDictionary *localReplyInfo; // @synthesize localReplyInfo=_localReplyInfo;
- (void).cxx_destruct;
- (void)_checkCache;
- (_Bool)_isTimeToCheck;
- (void)_setNextTimeToCheck;
- (void)_addReplyInfo:(id)arg1 forSectionID:(id)arg2 bulletinID:(id)arg3;
- (id)_keyForSectionID:(id)arg1 bulletinID:(id)arg2;
- (id)_firstReplyInfoWithNoReplyWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (id)_firstReplyInfoWithNoDidPlayStateWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (void)purgeReplyInfo:(id)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3;
- (id)retrieveReplyInfoWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (void)cacheDidPlayLightsAndSirens:(unsigned long long)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3;
- (void)cacheReply:(CDUnknownBlockType)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 publicationDate:(id)arg4;
- (id)init;

@end

