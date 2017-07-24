//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPProgressManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_downloadProgressPerItemIDs;
    NSMapTable *_uploadProgressPerItemIDs;
    NSMapTable *_copyProgressPerItemIDs;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)_progressForItem:(id)arg1 usingProgressMap:(id)arg2;
- (id)uploadProgressForItem:(id)arg1;
- (id)downloadProgressForItem:(id)arg1;
- (id)copyProgressForItem:(id)arg1;
- (void)removeCopyProgressForItemID:(id)arg1;
- (void)registerCopyProgress:(id)arg1 forItemID:(id)arg2;
- (void)attachProgressToItemsIfNeeded:(id)arg1;
- (id)init;

@end

