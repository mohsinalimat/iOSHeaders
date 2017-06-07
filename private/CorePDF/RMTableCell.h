//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, RMTable;

@interface RMTableCell : NSObject
{
    NSString *_contents;
    RMTableCell *_nextCellInColumn;
    RMTableCell *_nextCellInRow;
    RMTable *_table;
    struct CGPDFNode *_tableCellNode;
}

@property struct CGPDFNode *tableCellNode; // @synthesize tableCellNode=_tableCellNode;
@property RMTable *table; // @synthesize table=_table;
@property(retain) RMTableCell *nextCellInRow; // @synthesize nextCellInRow=_nextCellInRow;
@property(retain) RMTableCell *nextCellInColumn; // @synthesize nextCellInColumn=_nextCellInColumn;
- (struct CGColor *)backgroundColor;
- (unsigned long long)column;
- (unsigned long long)row;
- (id)contents;
- (struct CGRect)bounds;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (void)dealloc;

@end

