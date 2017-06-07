//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UAUserActivityLoggingManager : NSObject
{
    _Bool _loggingEnabled;
    _Bool _isServer;
    NSMutableDictionary *_logsForTags;
}

+ (id)hexDataDump:(id)arg1;
+ (id)sharedDebugManager;
@property(readonly, retain) NSMutableDictionary *logsForTags; // @synthesize logsForTags=_logsForTags;
@property _Bool isServer; // @synthesize isServer=_isServer;
- (void).cxx_destruct;
- (void)log:(const char *)arg1 line:(long long)arg2 queue:(const char *)arg3 format:(const char *)arg4;
- (id)createLogFileForClient:(id)arg1 rotateLogs:(_Bool)arg2;
@property(readonly) _Bool loggingEnabled;
- (id)logForCategory:(id)arg1;
- (id)log;
- (void)resume;
- (void)suspend;
- (id)init;

@end

