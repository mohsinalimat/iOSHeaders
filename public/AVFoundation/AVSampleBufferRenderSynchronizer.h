//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVSampleBufferRenderSynchronizerInternal, NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject
{
    AVSampleBufferRenderSynchronizerInternal *_synchronizerInternal;
}

- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2;
@property(nonatomic) float rate;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (void)finalize;
- (void)dealloc;
- (int)_initializeTimebase;
- (id)init;
- (void)removeRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withClientCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_storeObserver:(id)arg1 clientCompletionHandler:(CDUnknownBlockType)arg2 forRenderer:(id)arg3;
- (void)_removeTimebaseObserverForRenderer:(id)arg1;
- (CDUnknownBlockType)_getClientCompletionHandlerForRenderer:(id)arg1;
- (id)_getTimebaseObserverForRenderer:(id)arg1;
- (void)addRenderer:(id)arg1;
- (_Bool)_addRenderer:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *renderers;
- (long long)_addedAudioRendererCountInternal;
- (long long)_addedAudioRendererCount;
- (_Bool)_multipleAudioRenderersDisallowed;
- (_Bool)_rendererConfigurationIsValid:(id *)arg1;
- (_Bool)_canAddRendererInternal:(id)arg1 error:(id *)arg2;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end

