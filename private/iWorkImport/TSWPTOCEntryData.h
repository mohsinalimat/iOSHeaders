//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSString, TSWPListStyle, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSWPTOCEntryData : TSPObject <TSPCopying>
{
    int _numberFormat;
    unsigned long long _paragraphIndex;
    unsigned long long _pageNumber;
    NSString *_heading;
    TSWPParagraphStyle *_indexedStyle;
    TSWPListStyle *_indexedListStyle;
    unsigned long long _indexedListStart;
    unsigned long long _indexedParagraphLevel;
}

+ (id)tocEntryDataWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8;
@property(readonly, nonatomic) unsigned long long indexedParagraphLevel; // @synthesize indexedParagraphLevel=_indexedParagraphLevel;
@property(readonly, nonatomic) unsigned long long indexedListStart; // @synthesize indexedListStart=_indexedListStart;
@property(readonly, nonatomic) TSWPListStyle *indexedListStyle; // @synthesize indexedListStyle=_indexedListStyle;
@property(readonly, nonatomic) TSWPParagraphStyle *indexedStyle; // @synthesize indexedStyle=_indexedStyle;
@property(readonly, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(readonly, nonatomic) int numberFormat; // @synthesize numberFormat=_numberFormat;
@property(readonly, nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly, nonatomic) unsigned long long paragraphIndex; // @synthesize paragraphIndex=_paragraphIndex;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TOCEntryInstanceArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TOCEntryInstanceArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8;

@end

