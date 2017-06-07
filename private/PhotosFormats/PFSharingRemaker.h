//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableDictionary, NSOperationQueue, PFSharingRemakerOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PFSharingRemaker : NSObject
{
    NSObject<OS_dispatch_queue> *_remakerQueue;
    float _progress;
    NSMutableDictionary *_inProgressOperationByUUID;
    _Bool _remakerSuccess;
    _Bool _abortedRemaker;
    NSError *_remakerError;
    NSOperationQueue *_remakeOperationQueue;
    NSObject<OS_dispatch_source> *_progressTimer;
    PFSharingRemakerOptions *__options;
    NSArray *__operations;
    CDUnknownBlockType __progressHandler;
    CDUnknownBlockType __completionHandler;
}

+ (id)remakerWithOperations:(id)arg1 options:(id)arg2;
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(copy, nonatomic, setter=_setProgressHandler:) CDUnknownBlockType _progressHandler; // @synthesize _progressHandler=__progressHandler;
@property(retain, nonatomic, setter=_setOperations:) NSArray *_operations; // @synthesize _operations=__operations;
@property(retain, nonatomic, setter=_setOptions:) PFSharingRemakerOptions *_options; // @synthesize _options=__options;
- (void).cxx_destruct;
- (void)_abortWithError:(id)arg1;
- (void)_completeOperationWithUUID:(id)arg1;
- (void)_configurePhotoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_configureVideoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_endSessionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_callProgressBlockWithProgress:(double)arg1;
- (double)_computeProgress;
- (void)_updateProgress;
- (void)remakeWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
