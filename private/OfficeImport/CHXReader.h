//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXReader : NSObject
{
}

+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 chartStyleId:(int)arg2 drawingState:(id)arg3;
+ (id)readFromParentNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)externalDataWithChartPart:(id)arg1 relationship:(id)arg2;
+ (id)externalDataRelationshipWithChartPart:(id)arg1 drawingState:(id)arg2;
+ (id)chartPartWithParentNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;

@end

