//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBGraphic : NSObject
{
}

+ (id)readMainChartWithState:(id)arg1;
+ (void)readGraphicsInChart:(id)arg1 state:(id)arg2;
+ (void)readGraphicsWithState:(id)arg1;
+ (int)objectTypeForShape:(id)arg1;
+ (void)readNotesWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readImage:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo *)arg2 state:(id)arg3;
+ (void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3;
+ (void)readOle:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo *)arg2 state:(id)arg3;
+ (id)readGraphicWithDictionary:(id)arg1 state:(id)arg2;

@end

