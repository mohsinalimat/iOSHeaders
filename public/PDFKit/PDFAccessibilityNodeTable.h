//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PDFKit/PDFAccessibilityNode.h>

@class PDFAccessibilityNodeTablePrivate;

__attribute__((visibility("hidden")))
@interface PDFAccessibilityNodeTable : PDFAccessibilityNode
{
    PDFAccessibilityNodeTablePrivate *_private3;
}

- (void).cxx_destruct;
- (id)_cells;
- (id)_rows;
- (void)buildAccessibilityHierarchy;
- (long long)accessibilityColumnCount;
- (long long)accessibilityRowCount;
- (id)initWithParent:(id)arg1 nodeRef:(struct CGPDFNode *)arg2;

@end

