//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol PXPeopleProgressDataSource;

@interface PXPeopleProgressManager : NSObject
{
    _Bool _monitoringProgress;
    _Bool _processingComplete;
    id <PXPeopleProgressDataSource> _dataSource;
    double _updateInterval;
    double _progress;
    unsigned long long _processingStatus;
    NSTimer *_statusTimer;
}

@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(nonatomic) unsigned long long processingStatus; // @synthesize processingStatus=_processingStatus;
@property(readonly) _Bool processingComplete; // @synthesize processingComplete=_processingComplete;
@property double progress; // @synthesize progress=_progress;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic, getter=isMonitoringProgress) _Bool monitoringProgress; // @synthesize monitoringProgress=_monitoringProgress;
@property(retain, nonatomic) id <PXPeopleProgressDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)_progressComplete:(double)arg1;
- (void)_updateStatusForProgress:(double)arg1 processCount:(unsigned long long)arg2;
- (void)_scheduleNextUpdate;
- (void)updateProgressWithForce:(_Bool)arg1;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
@property(readonly) _Bool hasFaceProcessingTodo;
- (_Bool)hasSubstantialProcessingUsingMinAssetCount:(_Bool)arg1;
@property(readonly) _Bool shouldUseProgressFooter;
@property(readonly) _Bool shouldUseInterstitial;
@property(readonly) _Bool featureUnlocked;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

