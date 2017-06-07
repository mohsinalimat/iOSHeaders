//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TILanguageModelOfflineLearningTask;
@protocol OS_dispatch_queue;

@interface TILanguageModelOfflineLearningAgent : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TILanguageModelOfflineLearningTask *_currentLearningTask;
}

+ (void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2;
+ (id)contactRecordsForRecipients:(id)arg1;
+ (id)sharedLearningAgent;
@property(retain, nonatomic) TILanguageModelOfflineLearningTask *currentLearningTask; // @synthesize currentLearningTask=_currentLearningTask;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)handleRemovalOfLearnedModels;
- (void)performTaskInBackground:(CDUnknownBlockType)arg1;
- (void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2;
- (_Bool)continueLearningTaskWithStrategy:(id)arg1;
- (id)init;
- (void)dealloc;

@end
