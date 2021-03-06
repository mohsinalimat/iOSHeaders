//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSArray, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFServiceItemProvider : HFItemProvider
{
    HMHome *_home;
    CDUnknownBlockType _filter;
    NSMutableSet *_serviceItems;
    NSArray *_serviceTypes;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

+ (id)standardServices;
@property(retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource; // @synthesize overrideValueSource=_overrideValueSource;
@property(retain, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(retain, nonatomic) NSMutableSet *serviceItems; // @synthesize serviceItems=_serviceItems;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 serviceTypes:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

