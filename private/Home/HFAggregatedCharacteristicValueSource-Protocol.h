//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFCharacteristicValueOperationBatching-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HMCharacteristicMetadata, NAFuture, NSDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable, NSCopying>
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (NSSet *)allCharacteristicsForCharacteristicType:(NSString *)arg1;
- (HMCharacteristicMetadata *)metadataForCharacteristicType:(NSString *)arg1;
- (NAFuture *)writeValuesForCharacteristicTypes:(NSDictionary *)arg1;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1;
@end

