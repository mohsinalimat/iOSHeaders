//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNPdfExporter.h>

__attribute__((visibility("hidden")))
@interface KNPdfNoteExporter : KNPdfExporter
{
    _Bool mIsPrintingNote;
}

- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)incrementPage;
- (id)currentInfos;

@end

