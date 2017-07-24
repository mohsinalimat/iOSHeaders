//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/OSActivityStreamDelegate-Protocol.h>
#import <CloudKitDaemon/OSLogPersistenceDelegate-Protocol.h>

@class NSDate, NSMutableArray, NSString, OSActivityStream, OSLogPersistence;

@interface CKLLog : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate>
{
    _Bool _colorOutput;
    double _startTimeOffset;
    NSDate *_absoluteStartDate;
    NSString *_processName;
    unsigned long long _source;
    OSLogPersistence *_archiveSource;
    OSActivityStream *_streamSource;
    NSMutableArray *_streamObservers;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMutableArray *streamObservers; // @synthesize streamObservers=_streamObservers;
@property(retain, nonatomic) OSActivityStream *streamSource; // @synthesize streamSource=_streamSource;
@property(retain, nonatomic) OSLogPersistence *archiveSource; // @synthesize archiveSource=_archiveSource;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) _Bool colorOutput; // @synthesize colorOutput=_colorOutput;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSDate *absoluteStartDate; // @synthesize absoluteStartDate=_absoluteStartDate;
@property(nonatomic) double startTimeOffset; // @synthesize startTimeOffset=_startTimeOffset;
- (void).cxx_destruct;
- (void)streamDidStop:(id)arg1;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (_Bool)activityStream:(id)arg1 results:(id)arg2;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)streamLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addStreamObserver:(id)arg1;
- (id)initWithArchiveAtURL:(id)arg1;
- (id)initWithRemoteDevice:(id)arg1;
- (id)initForSimulator;
- (id)initForHost;
- (void)_configureStreamSource:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

