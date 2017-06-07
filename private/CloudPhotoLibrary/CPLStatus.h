//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSURL;
@protocol CPLStatusDelegate, OS_dispatch_queue;

@interface CPLStatus : NSObject
{
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
    id <CPLStatusDelegate> _delegate;
}

+ (id)statusForSharedLibrary;
@property(nonatomic) __weak id <CPLStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)statusDescription;
- (void)_statusDidChange;
@property(readonly, nonatomic) NSDate *cloudAssetCountPerTypeLastCheckDate;
- (void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(_Bool)arg2;
@property(readonly, nonatomic) NSDictionary *cloudAssetCountPerType;
@property(nonatomic) _Bool iCloudLibraryExists;
@property(nonatomic) _Bool iCloudLibraryHasBeenWiped;
@property(copy, nonatomic) NSDate *exitDeleteTime;
@property(nonatomic) _Bool isExceedingQuota;
@property(nonatomic) _Bool hasChangesToProcess;
@property(copy, nonatomic) NSDate *initialSyncDate;
@property(copy, nonatomic) NSDate *lastPruneDate;
@property(copy, nonatomic) NSDate *lastCompletePrefetchDate;
@property(copy, nonatomic) NSDate *lastSuccessfulSyncDate;
- (void)refetchFromDisk;
- (void)_save;
- (void)_loadIfNecessary;
- (id)initWithClientLibraryBaseURL:(id)arg1;

@end

