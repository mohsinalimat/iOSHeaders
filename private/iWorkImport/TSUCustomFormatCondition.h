//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface TSUCustomFormatCondition : NSObject <NSCopying>
{
    int mConditionType;
    double mConditionValue;
    TSUCustomFormatData *mData;
}

@property(readonly, nonatomic) TSUCustomFormatData *data; // @synthesize data=mData;
@property(readonly, nonatomic) double conditionValue; // @synthesize conditionValue=mConditionValue;
@property(readonly, nonatomic) int conditionType; // @synthesize conditionType=mConditionType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (id)init;

@end

