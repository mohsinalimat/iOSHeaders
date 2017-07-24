//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPTargetHint : NSObject <TSWPOffscreenColumn, NSCopying>
{
    _Bool _usedParagraphHeights;
    _Bool _endOfLayout;
    unsigned long long _nextWidowPullsDownFromCharIndex;
    unsigned long long _columnCount;
    unsigned long long _lineFragmentCount;
    struct _NSRange _range;
    struct _NSRange _anchoredRange;
    struct CGRect _frameBounds;
}

@property(nonatomic) _Bool endOfLayout; // @synthesize endOfLayout=_endOfLayout;
@property(nonatomic) _Bool usedParagraphHeights; // @synthesize usedParagraphHeights=_usedParagraphHeights;
@property(nonatomic) unsigned long long lineFragmentCount; // @synthesize lineFragmentCount=_lineFragmentCount;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) struct _NSRange anchoredRange; // @synthesize anchoredRange=_anchoredRange;
@property(nonatomic) unsigned long long nextWidowPullsDownFromCharIndex; // @synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) struct CGRect frameBounds; // @synthesize frameBounds=_frameBounds;
@property(readonly, copy) NSString *debugDescription;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

