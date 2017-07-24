//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectID, NSMutableArray, NSMutableSet, PLImageSource, PLLoadRequestKey;

@interface PLImageLoadRequest : NSObject
{
    NSManagedObjectID *_assetID;
    PLImageSource *_source;
    NSMutableSet *_queues;
    int _priority;
    NSMutableArray *_completionBlocks;
    PLLoadRequestKey *_key;
}

+ (id)requestWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 completion:(CDUnknownBlockType)arg4 loadingQueue:(id)arg5;
@property(readonly, retain, nonatomic) PLImageSource *source; // @synthesize source=_source;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (void)notifyImageLoadingQueuesOfImageAvailability:(id)arg1;
- (_Bool)someImageLoadingQueuesRegistered;
- (_Bool)isImageLoadingQueueRegistered:(id)arg1;
- (void)deregisterImageLoadingQueue:(id)arg1;
- (void)registerImageLoadingQueue:(id)arg1;
- (id)debugDescription;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *completionBlocks;
- (_Bool)isEqual:(id)arg1;
@property(readonly, retain, nonatomic) PLLoadRequestKey *key;
- (id)assetInPhotoLibrary:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3;

@end

