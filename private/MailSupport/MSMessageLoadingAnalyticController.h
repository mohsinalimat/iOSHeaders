//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDiagnosticManager, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MSMessageLoadingAnalyticController : NSObject
{
    NSMutableDictionary *_messageLoadTime;
    MSDiagnosticManager *_diagnosticManager;
    NSObject<OS_dispatch_queue> *_serialMessageLoadingTimerQueue;
}

@property(readonly, copy, nonatomic) NSDictionary *messageLoadTime; // @synthesize messageLoadTime=_messageLoadTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue; // @synthesize serialMessageLoadingTimerQueue=_serialMessageLoadingTimerQueue;
@property(retain, nonatomic) MSDiagnosticManager *diagnosticManager; // @synthesize diagnosticManager=_diagnosticManager;
- (void).cxx_destruct;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1;
- (void)_startTimeoutForMessage:(id)arg1;
- (void)_endRecordingForMessage:(id)arg1;
- (void)endAllRecording;
- (void)endRecordingForMessage:(id)arg1;
- (void)startRecordingForMessage:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1;

@end

