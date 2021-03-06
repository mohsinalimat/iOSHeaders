//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSMapTable, NSObject, NSOperation, NSOperationQueue;
@protocol OS_dispatch_group;

@interface MusicStoreBrowseRequestOperation : MPStoreModelRequestOperation
{
    _Bool _didInitializeTimeoutIntervalAdditions;
    _Bool _errorReportingDisabled;
    NSOperation *_individualPendingNestedRequestOperation;
    NSObject<OS_dispatch_group> *_nestedRequestOperationsGroup;
    NSOperationQueue *_nestedRequestsOperationQueue;
    unsigned long long _requestType;
    NSMapTable *_sectionsToPendingNestedRequestOperations;
    double _timeoutIntervalAdditions;
}

- (void).cxx_destruct;
- (void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_produceRegularResponseWithParser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_nestedRequestsOperationQueue;
- (double)adjustTimeoutInterval:(double)arg1;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)execute;
- (void)cancel;

@end

