//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class NSObject, SSVLoadURLOperation;
@protocol MPStoreSocialRequestOperationDataSource, OS_dispatch_queue;

@interface MPStoreSocialRequestOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSVLoadURLOperation *_URLOperation;
    id <MPStoreSocialRequestOperationDataSource> _dataSource;
    CDUnknownBlockType _responseHandler;
}

+ (id)_stringRepresentationForHTTPMethod:(long long)arg1;
+ (id)_stringRepresentationForHTTPBodyType:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) id <MPStoreSocialRequestOperationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_storeURLRequestPropertiesUsingBag:(id)arg1;
- (void)execute;
- (void)cancel;
- (id)initWithDataSource:(id)arg1;

@end
