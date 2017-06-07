//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCharacterSet, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TPHeaderFragmentImportHelper : NSObject
{
    id *_fragments;
    TSPObjectContext *_storageContext;
    TSPObjectContext *_objectsContext;
    NSCharacterSet *_whitespaceCharacterSet;
    NSCharacterSet *_nonWhitespaceCharacterSet;
}

- (void)processFragmentsForSpaceFormatting;
- (void)p_splitStorageInThree:(int)arg1 withRanges:(struct _NSRange [2])arg2;
- (void)p_splitStorageInTwo:(int)arg1 withRanges:(struct _NSRange [2])arg2 firstTarget:(int)arg3 secondTarget:(int)arg4;
- (unsigned long long)countOfWhitespaceRunsInString:(id)arg1 ranges:(struct _NSRange [2])arg2;
- (_Bool)p_storageIsEffectivelyEmpty:(id)arg1;
- (void)dealloc;
- (id)initWithFragments:(id *)arg1 storageContext:(id)arg2 objectsContext:(id)arg3;

@end

