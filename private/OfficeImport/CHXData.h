//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXData : NSObject
{
}

+ (id)chdDataFromXmlDataElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (_Bool)isHiddenDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;
+ (void)readStrDataFromXmlMultiLevelStrDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;
+ (void)readStrDataFromXmlStrDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;
+ (void)readNumDataFromXmlNumDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;

@end

