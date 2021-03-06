//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKCaptureService.h>

@interface CMKDebugCaptureService : CMKCaptureService
{
    _Bool _debugLoggingEnabled;
    double __enqueueTime;
}

@property(readonly, nonatomic) double _enqueueTime; // @synthesize _enqueueTime=__enqueueTime;
@property(nonatomic, getter=isDebugLoggingEnabled) _Bool debugLoggingEnabled; // @synthesize debugLoggingEnabled=_debugLoggingEnabled;
- (void)responseWasCompleted:(id)arg1 error:(id)arg2;
- (void)responseWasGenerated:(id)arg1 error:(id)arg2;
- (void)receivedStillImageForRequest:(id)arg1;
- (void)didCaptureStillImageForRequest:(id)arg1;
- (void)willCaptureStillImageForRequest:(id)arg1;
- (void)requestWasEnqueued:(id)arg1;

@end

