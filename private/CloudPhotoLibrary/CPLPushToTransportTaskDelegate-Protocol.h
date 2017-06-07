//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLChangeBatch, CPLPushToTransportTask, NSArray;
@protocol CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask;

@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id <CPLEngineTransportCheckRecordsExistenceTask>)task:(CPLPushToTransportTask *)arg1 wantsToCheckRecordsExistence:(NSArray *)arg2 fetchRecordProperties:(NSArray *)arg3 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (id <CPLEngineTransportUploadBatchTask>)task:(CPLPushToTransportTask *)arg1 wantsToPushBatch:(CPLChangeBatch *)arg2 progressBlock:(void (^)(NSString *, float))arg3 continuationBlock:(void (^)(NSError *))arg4;
@end

