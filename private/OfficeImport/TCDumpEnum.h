//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpEnum : NSObject
{
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}

- (id)nameForValue:(int)arg1;
- (id)valueForName:(id)arg1;
- (id)typeName;
- (void)dealloc;
- (id)initWithTypeName:(id)arg1 pairs:(struct TCDumpEnumPair *)arg2;

@end

