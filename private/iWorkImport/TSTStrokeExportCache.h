//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDStroke, TSTStrokeLayerMergedStack;

__attribute__((visibility("hidden")))
@interface TSTStrokeExportCache : NSObject
{
    TSTStrokeLayerMergedStack *_mergedStrokes;
    TSDStroke *_stroke;
    struct TSTSimpleRange _range;
}

@property(retain, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;
@property(nonatomic) struct TSTSimpleRange range; // @synthesize range=_range;
@property(retain, nonatomic) TSTStrokeLayerMergedStack *mergedStrokes; // @synthesize mergedStrokes=_mergedStrokes;
- (id)strokeAtIndex:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithMergedStack:(id)arg1;

@end

