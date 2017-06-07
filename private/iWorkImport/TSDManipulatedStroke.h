//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDSmartStroke.h>

@class NSMutableDictionary, TSDPathManipulation;

__attribute__((visibility("hidden")))
@interface TSDManipulatedStroke : TSDSmartStroke
{
    TSDPathManipulation *mManipulation;
    NSMutableDictionary *mArrows;
    unsigned int mRandomSeed;
}

+ (Class)mutableClass;
@property(retain, nonatomic) TSDPathManipulation *pathManipulation; // @synthesize pathManipulation=mManipulation;
@property(nonatomic) unsigned int randomSeed; // @synthesize randomSeed=mRandomSeed;
- (double)renderedWidth;
- (void)saveToArchive:(struct StrokeArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokeArchive *)arg1 unarchiver:(id)arg2;
- (struct CGPath *)pathToStrokeFromCGPath:(struct CGPath *)arg1;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (_Bool)canApplyToCAShapeLayer;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4 parameterized:(_Bool)arg5 drawWithOpenGL:(_Bool)arg6 shouldReverseDrawOrder:(_Bool)arg7;
- (struct CGPath *)manipulatePath:(struct CGPath *)arg1 withLineWidth:(double)arg2;
- (id)strokeLineEnd:(id)arg1;
- (struct CGPath *)strokedPath:(struct CGPath *)arg1 withLineWidth:(double)arg2 insideStroke:(_Bool)arg3;
- (void)seedRandom;
- (void)applyInteriorWrapPropertiesInContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)drawsOutsideStrokeBounds;
- (void)dealloc;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (void)p_setupDoodlesManipulation;

@end

