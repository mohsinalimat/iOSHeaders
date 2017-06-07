//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPChunk, CPCluster;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable>
{
    CPChunk *parentChunk;
    _Bool shapesAreVectorGraphics;
    unsigned int shapeCount;
    id *shapes;
    double pageSpread;
    CPCluster *cluster;
    unsigned int groupInfoCount;
    struct {
        unsigned int _field1;
        struct CGRect _field2;
    } *groupInfoArray;
    _Bool disposed;
}

+ (_Bool)makeCompoundGraphicsInZonesOf:(id)arg1;
- (_Bool)makeCompoundGraphics;
- (_Bool)groupOverlappingGraphics;
- (_Bool)makeCompoundGraphicsFromShapeGroups;
- (void)coalesceShapeGroups;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect)arg2;
- (_Bool)findClusterLevel;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;

@end

