//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper
{
    float mScale;
    _Bool mCircularArrows;
    int mDiagramType;
    int mArrowShapeType;
}

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)circumscribedBounds;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (void)mapTransitionArrowsAt:(id)arg1 index:(unsigned int)arg2 withState:(id)arg3;
- (void)mapTransitionPointAt:(id)arg1 index:(unsigned int)arg2 withState:(id)arg3;
- (struct CGSize)nodeSize;
- (struct CGRect)nodeBoundsWithIndex:(unsigned long long)arg1;

@end

