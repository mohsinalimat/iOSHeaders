//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FPFSHelpers)
+ (id)fp_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(_Bool)arg4;
+ (id)fp_pathWithFileSystemRepresentation:(const char *)arg1;
- (id)fp_stringByDeletingPathExtension;
- (id)fp_pathExtension;
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (id)fp_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (id)fp_stringByDeletingPathBounceNo:(unsigned long long *)arg1 andPathExtension:(id *)arg2;
- (const char *)fp_fileSystemRepresentation;
- (id)fp_nextBouncedFilename;
@end

