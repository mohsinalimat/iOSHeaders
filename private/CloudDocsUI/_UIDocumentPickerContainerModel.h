//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerModel : NSObject
{
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    int _sortOrder;
    NSMutableArray *_updateHandlers;
    NSOperationQueue *_thumbnailQueue;
}

@property(retain, nonatomic) NSOperationQueue *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property(retain, nonatomic) NSMutableArray *updateHandlers; // @synthesize updateHandlers=_updateHandlers;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long pickerMode;
@property(readonly, copy, nonatomic) NSArray *pickableTypes;
- (void)updateSortDescriptors;
- (void)refreshItem:(id)arg1 thumbnailOnly:(_Bool)arg2;
@property(readonly, nonatomic) _Bool afterInitialUpdate;
- (id)displayTitle;
- (void)stopMonitoringChanges;
- (void)startMonitoringChanges;
@property(readonly, nonatomic) NSArray *modelObjects;
- (void)dealloc;
- (id)init;

@end

