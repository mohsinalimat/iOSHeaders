//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIContext, NSHashTable, NSLock;
@protocol MTLDevice;

@interface CVMLImageBufferManager : NSObject
{
    CIContext *mainCIContext;
    id <MTLDevice> mainCIContextMetalDevice;
    CIContext *lowPriorityCIContext;
    id <MTLDevice> lowPriorityCIContextMetalDevice;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}

+ (id)manager;
- (void).cxx_destruct;
- (id)sharedCIContextWithOptions:(id)arg1;
- (void)removeBuffer:(id)arg1;
- (void)addImageBuffer:(id)arg1;
- (void)purgeAllCaches;
- (void)dealloc;
- (id)init;

@end

