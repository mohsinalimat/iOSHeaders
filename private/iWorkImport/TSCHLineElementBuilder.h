//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHScatterElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHLineElementBuilder : TSCHScatterElementBuilder
{
}

- (void)p_addKnobsForPoint:(struct CGPoint)arg1 strokedUnitSymbolRect:(struct CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(_Bool)arg4 includePoint:(_Bool)arg5;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect)arg2 stringSize:(struct CGSize)arg3 symbolType:(int)arg4;
- (_Bool)needsSeparateHitTestingPaths;

@end

