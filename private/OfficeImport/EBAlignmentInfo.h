//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : NSObject
{
}

+ (void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(struct XlGraphicsInfo *)arg2;
+ (struct XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)arg1;
+ (void)writeAlignmentInfo:(id)arg1 toXlXf:(struct XlXf *)arg2;
+ (id)edAlignmentInfoFromXlGraphicsInfo:(struct XlGraphicsInfo *)arg1;
+ (id)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign *)arg1;
+ (id)edAlignmentInfoFromXlXf:(struct XlXf *)arg1;
+ (int)convertEDVerticalAlignmentEnumToXl:(int)arg1;
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)arg1;
+ (int)convertXlVertAlignEnumToED:(int)arg1;
+ (int)convertXlHorizAlignEnumToED:(int)arg1;

@end

