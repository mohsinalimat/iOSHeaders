//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>

@class NSString;
@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueSource, HFOverrideCharacteristicValueProvider;

@interface HFOverrideCharacteristicValueSource : NSObject <HFCharacteristicValueSource>
{
    id <HFCharacteristicValueSource> _originalValueSource;
    id <HFOverrideCharacteristicValueProvider> _overrideValueProvider;
}

@property(nonatomic) __weak id <HFOverrideCharacteristicValueProvider> overrideValueProvider; // @synthesize overrideValueProvider=_overrideValueProvider;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> originalValueSource; // @synthesize originalValueSource=_originalValueSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
