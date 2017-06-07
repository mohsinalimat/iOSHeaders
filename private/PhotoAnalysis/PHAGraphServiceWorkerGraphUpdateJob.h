//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSDate, NSObject, NSString;
@protocol OS_os_transaction;

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob
{
    _Bool _finished;
    float _completionScore;
    CDUnknownBlockType _updateBlock;
    NSString *_label;
    NSDate *_creationDate;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) float completionScore; // @synthesize completionScore=_completionScore;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)updateCompletionScore:(float)arg1;
- (void)markAsFinishedWithCompletionScore:(float)arg1;
- (id)description;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4;

@end

