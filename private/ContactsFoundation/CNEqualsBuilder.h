//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CNEqualsBuilder : NSObject
{
}

+ (_Bool)isDouble:(double)arg1 equalToOther:(double)arg2 withAccuracy:(double)arg3;
+ (_Bool)isInteger:(long long)arg1 equalToOther:(long long)arg2;
+ (_Bool)isBool:(_Bool)arg1 equalToOther:(_Bool)arg2;
+ (_Bool)isString:(id)arg1 localizedCaseInsensitiveEqualToOther:(id)arg2;
+ (_Bool)isObject:(id)arg1 equalToOther:(id)arg2;
+ (_Bool)evaluateBuilderBlock:(CDUnknownBlockType)arg1 remainingBlocks:(struct __va_list_tag [1])arg2;
+ (_Bool)isObject:(id)arg1 memberOfSameClassAndEqualTo:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;
+ (_Bool)isObject:(id)arg1 memberOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (_Bool)isObject:(id)arg1 kindOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (_Bool)isObject:(id)arg1 equalToOther:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;

@end

