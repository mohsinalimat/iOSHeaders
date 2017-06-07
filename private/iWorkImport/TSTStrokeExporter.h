//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPointerArray, TSUIntegerKeyDictionary;
@protocol TSTCustomStrokeProviding, TSTTableInternalGeometryProviding><TSTTableHiddenRowColumnProviding, TSTTableStrokeProviding;

__attribute__((visibility("hidden")))
@interface TSTStrokeExporter : NSObject
{
    id <TSTTableStrokeProviding> _defaultStrokeProvider;
    id <TSTCustomStrokeProviding> _customStrokeProvider;
    id <TSTTableInternalGeometryProviding><TSTTableHiddenRowColumnProviding> _tableProvider;
    NSPointerArray *_topRowStrokes;
    NSPointerArray *_bottomRowStrokes;
    NSPointerArray *_leftColumnStrokes;
    NSPointerArray *_rightColumnStrokes;
    TSUIntegerKeyDictionary *_rowStrokeExportCache;
    TSUIntegerKeyDictionary *_columnStrokeExportCache;
}

@property(retain, nonatomic) TSUIntegerKeyDictionary *columnStrokeExportCache; // @synthesize columnStrokeExportCache=_columnStrokeExportCache;
@property(retain, nonatomic) TSUIntegerKeyDictionary *rowStrokeExportCache; // @synthesize rowStrokeExportCache=_rowStrokeExportCache;
@property(readonly, retain, nonatomic) NSPointerArray *rightColumnStrokes; // @synthesize rightColumnStrokes=_rightColumnStrokes;
@property(readonly, retain, nonatomic) NSPointerArray *leftColumnStrokes; // @synthesize leftColumnStrokes=_leftColumnStrokes;
@property(readonly, retain, nonatomic) NSPointerArray *bottomRowStrokes; // @synthesize bottomRowStrokes=_bottomRowStrokes;
@property(readonly, retain, nonatomic) NSPointerArray *topRowStrokes; // @synthesize topRowStrokes=_topRowStrokes;
@property(readonly, retain, nonatomic) id <TSTTableInternalGeometryProviding><TSTTableHiddenRowColumnProviding> tableProvider; // @synthesize tableProvider=_tableProvider;
@property(readonly, retain, nonatomic) id <TSTCustomStrokeProviding> customStrokeProvider; // @synthesize customStrokeProvider=_customStrokeProvider;
@property(readonly, retain, nonatomic) id <TSTTableStrokeProviding> defaultStrokeProvider; // @synthesize defaultStrokeProvider=_defaultStrokeProvider;
- (void)strokesForCellID:(struct TSUCellCoord)arg1 top:(id *)arg2 left:(id *)arg3 bottom:(id *)arg4 right:(id *)arg5;
- (void)p_resolveStrokes;
- (void)dealloc;
- (id)initWithDefaultStrokeProvider:(id)arg1 customStrokeProvider:(id)arg2 tableProvider:(id)arg3;

@end

