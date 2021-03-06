//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/_HKWheelchairUseCharacteristicCacheObserver-Protocol.h>

@class NSArray, NSDictionary, _HKWheelchairUseCharacteristicCache;

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver>
{
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    NSArray *_displayTypes;
    NSDictionary *_displayTypesByIdentifier;
    NSDictionary *_displayTypesByCategoryIdentifier;
    NSDictionary *_displayTypesByObjectType;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)displayTypesForCategoryIdentifier:(long long)arg1;
- (id)displayTypeWithIdentifier:(id)arg1;
- (id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1;
- (id)displayTypeForObjectType:(id)arg1;
- (id)allDisplayTypes;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(_Bool)arg2;
- (void)setWheelchairUseCharacteristicCache:(id)arg1;
- (id)init;

@end

