//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RMListItem : NSObject
{
    struct CGPDFNode **_paragraphs;
    unsigned long long _count;
    unsigned long long _pos;
}

@property(readonly) struct CGPDFNode **paragraphNodes; // @synthesize paragraphNodes=_paragraphs;
- (struct CGRect)bounds;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (void)addParagraph:(struct CGPDFNode *)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;

@end

