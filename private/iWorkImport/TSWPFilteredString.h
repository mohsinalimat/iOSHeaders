//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class TSWPDeletionRangeMap, TSWPRangeArray;

__attribute__((visibility("hidden")))
@interface TSWPFilteredString : NSString
{
    unsigned long long _length;
    NSString *_sourceString;
    TSWPDeletionRangeMap *_rangeMap;
    TSWPRangeArray *_sourceRanges;
}

@property(readonly, retain, nonatomic) TSWPRangeArray *sourceRanges; // @synthesize sourceRanges=_sourceRanges;
@property(retain, nonatomic) TSWPDeletionRangeMap *rangeMap; // @synthesize rangeMap=_rangeMap;
@property(retain, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
- (unsigned long long)length;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 subrange:(struct _NSRange)arg2 removeRanges:(id)arg3;

@end

