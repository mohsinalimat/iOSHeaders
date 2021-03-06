//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying>
{
    unsigned long long mSeriesIndex;
    unsigned long long mValueIndex;
}

+ (id)repElementIndexWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long valueIndex; // @synthesize valueIndex=mValueIndex;
@property(readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
- (id)valueIndexSet;
- (id)seriesIndexSet;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;
- (id)init;

@end

