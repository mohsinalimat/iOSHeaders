//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class NSArray, NSString, TSUNoCopyDictionary;
@protocol TSDHint;

__attribute__((visibility("hidden")))
@interface TPPageHint : NSObject <TSWPOffscreenColumn>
{
    int _pageKind;
    vector_7a2e319d _hints;
    struct _NSRange _footnoteAutoNumberRange;
    struct _NSRange _footnoteLayoutRange;
    NSArray *_childHints;
    TSUNoCopyDictionary *_anchoredDrawablePositions;
    struct TSWPTopicNumberHints _topicNumbers;
}

@property(retain, nonatomic) NSArray *childHints; // @synthesize childHints=_childHints;
@property(nonatomic) struct TSWPTopicNumberHints *topicNumbers; // @synthesize topicNumbers=_topicNumbers;
@property(retain, nonatomic) TSUNoCopyDictionary *anchoredDrawablePositions; // @synthesize anchoredDrawablePositions=_anchoredDrawablePositions;
@property(nonatomic) struct _NSRange footnoteLayoutRange; // @synthesize footnoteLayoutRange=_footnoteLayoutRange;
@property(nonatomic) struct _NSRange footnoteAutoNumberRange; // @synthesize footnoteAutoNumberRange=_footnoteAutoNumberRange;
@property(nonatomic) int pageKind; // @synthesize pageKind=_pageKind;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct PageHintArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct PageHintArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) unsigned long long lineCount;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
@property(readonly, nonatomic) unsigned long long startAnchoredCharIndex;
- (struct _NSRange)rangeAndChildHints:(out id *)arg1;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned long long startCharIndex;
@property(readonly, nonatomic) id <TSDHint> lastChildHint;
@property(readonly, nonatomic) id <TSDHint> firstChildHint;
- (_Bool)syncsWithEndOfPageHint:(id)arg1 storage:(id)arg2;
- (void)offsetStartCharIndexBy:(long long)arg1 charIndex:(unsigned long long)arg2;
- (vector_7a2e319d)hints;
- (struct TSWPTargetHint *)lastHint;
- (struct TSWPTargetHint *)firstHint;
- (id)lastColumn;
- (id)firstColumn;
- (void)setHints:(const vector_7a2e319d *)arg1;
- (id)copyForArchiving;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

