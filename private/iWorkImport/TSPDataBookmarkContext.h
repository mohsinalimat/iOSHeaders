//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TSUTemporaryDirectory;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPDataBookmarkContext : NSObject
{
    TSUTemporaryDirectory *_temporaryDirectory;
    NSMutableDictionary *_bookmarkDataURLsForFilenames;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)bookmarkDataNeedsWriteForData:(id)arg1;
- (id)makeBookmarkDataForData:(id)arg1 filename:(id)arg2 options:(unsigned long long)arg3 error:(out id *)arg4;
- (id)init;

@end

