//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileCoordinator.h>

@interface NSFileCoordinator (TSPersistence)
+ (_Bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 filePresenter:(id)arg5 error:(id *)arg6 byAccessor:(CDUnknownBlockType)arg7;
+ (_Bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 filePresenter:(id)arg3 error:(id *)arg4 byAccessor:(CDUnknownBlockType)arg5;
+ (_Bool)tsp_coordinateReadingItemAtURL:(id)arg1 urlType:(long long)arg2 options:(unsigned long long)arg3 writingItemAtURL:(id)arg4 options:(unsigned long long)arg5 filePresenter:(id)arg6 error:(id *)arg7 byAccessor:(CDUnknownBlockType)arg8;
+ (_Bool)tsp_coordinateReadingItemAtURL:(id)arg1 urlType:(long long)arg2 options:(unsigned long long)arg3 filePresenter:(id)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;
+ (void)tsp_removeFilePresenter:(id)arg1;
+ (void)tsp_addFilePresenter:(id)arg1;
@end

