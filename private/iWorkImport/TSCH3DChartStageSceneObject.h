//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartStageSceneObject : TSCH3DSceneObject
{
    TSCH3DSceneObject *mMain;
}

+ (id)objectWithMain:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)render:(id)arg1;
- (void)render:(id)arg1 selector:(SEL)arg2;
- (void)prerender:(id)arg1;
- (void)dealloc;
- (id)initWithMain:(id)arg1;

@end

