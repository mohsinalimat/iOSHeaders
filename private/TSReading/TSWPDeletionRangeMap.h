//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSWPRangeArray;

@interface TSWPDeletionRangeMap : NSObject
{
    unsigned long long _subRangeStart;
    TSWPRangeArray *_removedRanges;
}

- (_Bool)containsCharIndex:(unsigned long long)arg1;
- (id)inverseRangesInStorageRange:(struct _NSRange)arg1;
- (void)adjustByDelta:(long long)arg1;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSubRange:(struct _NSRange)arg1 removeRanges:(id)arg2;

@end

