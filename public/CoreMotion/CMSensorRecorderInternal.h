//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMSensorRecorderInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    struct CLConnectionClient *fLocationdConnection;
}

- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;
- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;
- (_Bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;
- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;
- (void)dealloc;
- (void)teardown;
- (id)init;

@end
