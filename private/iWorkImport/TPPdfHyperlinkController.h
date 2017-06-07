//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSAPdfHyperlinkController.h>

@class NSIndexSet, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TPPdfHyperlinkController : TSAPdfHyperlinkController
{
    struct CGRect mCanvasRect;
    TSWPStorage *mBodyStorage;
    NSIndexSet *mParagraphIndicesInTOCs;
}

+ (id)footnoteMarkNameForIndex:(unsigned long long)arg1;
+ (id)footnoteRefNameForIndex:(unsigned long long)arg1;
- (id)p_paragraphIndicesInTOCs;
- (void)addHyperlinksForRep:(id)arg1 context:(struct CGContext *)arg2;
- (id)destinationFromUrl:(id)arg1;
- (_Bool)isDestination:(id)arg1;
- (_Bool)ignoreUrl:(id)arg1;
- (void)setCanvasRect:(struct CGRect)arg1;
- (struct CGRect)canvasRect;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

@end

