//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DistributedEvaluation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, NSUUID;

@protocol DESService <NSObject>
- (void)runLiveEvaluationForBundleId:(NSString *)arg1 baseURL:(NSURL *)arg2 completion:(void (^)(NSError *))arg3;
- (void)runEvaluationForBundleId:(NSString *)arg1 recipe:(NSDictionary *)arg2 recordUUID:(NSUUID *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)runEvaluationForBundleId:(NSString *)arg1 recipe:(NSDictionary *)arg2 recordInfo:(NSDictionary *)arg3 recordData:(NSData *)arg4 completion:(void (^)(NSDictionary *, NSError *))arg5;
- (void)deleteAllSavedRecordsForBundleId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchSavedRecordInfoForBundleId:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)saveRecordForBundleId:(NSString *)arg1 data:(NSData *)arg2 recordInfo:(NSDictionary *)arg3 completion:(void (^)(NSUUID *, NSError *))arg4;
@end

