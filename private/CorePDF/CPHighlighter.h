//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPTextLine, CPZone;

@interface CPHighlighter : NSObject
{
    CPZone *boundingZone;
    CPTextLine *textLine;
    struct CGColor *color;
    struct CPPDFStyle *style;
    struct CPPDFStyle *highlightedStyle;
}

+ (_Bool)reconstructHighlightFor:(id)arg1;
@property(nonatomic) struct CPPDFStyle *highlightedStyle; // @synthesize highlightedStyle;
@property(nonatomic) struct CPPDFStyle *style; // @synthesize style;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color;
- (void)highlight;
- (id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(struct CGColor *)arg3;

@end

