//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

#import <iWorkImport/TSCH3DSceneObjectDelegator-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartSelectedElementHighlightSceneObject : TSCH3DSceneObject <TSCH3DSceneObjectDelegator>
{
}

+ (void)setHighlightColor:(id)arg1 scene:(id)arg2;
+ (void)setSelectedSeriesIndex:(unsigned long long)arg1 scene:(id)arg2;
+ (id)propertiesForScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)render:(id)arg1;
- (id)p_calculateEdgeVerticesForPipeline:(id)arg1;

@end

