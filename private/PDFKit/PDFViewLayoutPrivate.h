//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, PDFDocument;

@interface PDFViewLayoutPrivate : NSObject
{
    id delegate;
    _Bool delegateKnowsMargins;
    _Bool delegateKnowsScaleFactor;
    _Bool delegateKnowsDisplayMode;
    _Bool delegateKnowsDisplayAsBook;
    _Bool delegateKnowsDisplayBox;
    _Bool delegateKnowsDisplaySoloPagesCentered;
    _Bool delegateKnowsDisplayRTL;
    _Bool delegateKnowsDisableInterpageSpacing;
    _Bool delegateKnowsFlipped;
    struct CGSize singlePageContinuousSize;
    struct CGSize twoUpContinousSize;
    struct CGRect *pageLayoutBounds;
    NSLock *layoutLock;
    PDFDocument *document;
    unsigned long long pageCount;
    struct _NSRange pageSubrange;
}

- (void).cxx_destruct;

@end

