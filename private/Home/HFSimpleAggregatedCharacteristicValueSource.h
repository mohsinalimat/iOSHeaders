//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAggregatedCharacteristicValueSource-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource>
{
    id <HFCharacteristicValueSource> _valueSource;
    NSDictionary *_characteristicsByType;
}

+ (id)na_identity;
@property(readonly, nonatomic) NSDictionary *characteristicsByType; // @synthesize characteristicsByType=_characteristicsByType;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *characteristics;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

