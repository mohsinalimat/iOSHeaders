//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCameraMetricsSnapshotLogEvent, NSError;

@interface HMDCameraSnapshotMetrics : NSObject
{
    HMDCameraMetricsSnapshotLogEvent *_cameraSnapshotMetricsLogEvent;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) HMDCameraMetricsSnapshotLogEvent *cameraSnapshotMetricsLogEvent; // @synthesize cameraSnapshotMetricsLogEvent=_cameraSnapshotMetricsLogEvent;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3 snapshotForNotification:(_Bool)arg4;

@end

