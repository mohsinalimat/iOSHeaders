//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface OKDocumentsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_documentsAccessQueue;
}

+ (id)defaultManager;
- (_Bool)deleteFileURL:(id)arg1 error:(id *)arg2;
- (id)renameFileURL:(id)arg1 toFileName:(id)arg2 error:(id *)arg3;
- (id)duplicateFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)duplicateFileURL:(id)arg1 error:(id *)arg2;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 copy:(_Bool)arg3 error:(id *)arg4;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)importFileURL:(id)arg1 error:(id *)arg2;
- (id)uniqueFileURLForFileName:(id)arg1 error:(id *)arg2;
- (id)uniqueFileURLForFileName:(id)arg1 inDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)documentURLsAtDirectoryURL:(id)arg1 error:(id *)arg2;
- (id)documentURLs:(id *)arg1;
- (id)documentsDirectoryURL;
- (id)localDocumentsDirectoryURL;
- (void)_performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

