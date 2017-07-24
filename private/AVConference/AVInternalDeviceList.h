//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    CDUnknownBlockType changeListener;
    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t listLock;
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;
+ (id)newDeviceList;
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (id)deviceList;
- (void)notifyDeviceListChanged;
- (void)dealloc;
- (void)cleanup;
- (id)init;
- (unsigned int)dataSourceControlID;

@end

