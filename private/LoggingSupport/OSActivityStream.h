//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCompoundPredicate, NSMutableDictionary, NSMutableSet, NSString, OSLogDevice;
@protocol OSActivityStreamDelegate, OSDeviceDelegate;

@interface OSActivityStream : NSObject
{
    struct os_activity_stream_s *_stream;
    NSMutableSet *_pids;
    NSMutableSet *_proc_names;
    NSString *_waitforProcessName;
    void *_deviceSearchSession;
    void *_deviceEventSession;
    _Bool _delegateStreamErrorLess;
    _Bool _delegateStreamWithError;
    _Bool _delegateHasDidFail;
    id <OSDeviceDelegate> deviceDelegate;
    id <OSActivityStreamDelegate> _delegate;
    unsigned long long _options;
    unsigned long long _eventFilter;
    NSCompoundPredicate *_predicate;
    OSLogDevice *_device;
    NSMutableDictionary *_activityFilters;
}

@property(nonatomic) NSMutableDictionary *activityFilters; // @synthesize activityFilters=_activityFilters;
@property(nonatomic) OSLogDevice *device; // @synthesize device=_device;
@property(copy, nonatomic) NSCompoundPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned long long eventFilter; // @synthesize eventFilter=_eventFilter;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <OSActivityStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)establishTrust:(id)arg1;
- (id)getInfoForDevice:(id)arg1 andKey:(id)arg2;
@property(nonatomic) __weak id <OSDeviceDelegate> deviceDelegate; // @synthesize deviceDelegate;
- (void)stopRemote;
- (void)stopLocal;
- (void)stop;
- (void)startLocal;
- (void)startRemote;
- (_Bool)streamEvent:(id)arg1 error:(id)arg2;
- (void)start;
- (int)maxProcs;
- (void)addFilterForActivity:(id)arg1 andBinary:(id)arg2;
- (void)addProcessName:(id)arg1;
- (void)addProcessID:(int)arg1;
- (void)waitForProcessName:(id)arg1;
- (id)initWithDevice:(void *)arg1;
@property(nonatomic) unsigned long long events;
- (void)dealloc;
- (id)init;

@end

