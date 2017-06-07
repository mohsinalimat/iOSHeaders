//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PETLoggingOutlet;

@interface PETEventTracker : NSObject
{
    _Bool _testingMode;
    NSString *_featureId;
    NSArray *_registeredProperties;
    NSArray *_propertySubsets;
    id <PETLoggingOutlet> _loggingOutlet;
}

@property(readonly, nonatomic) id <PETLoggingOutlet> loggingOutlet; // @synthesize loggingOutlet=_loggingOutlet;
@property(readonly, nonatomic) _Bool testingMode; // @synthesize testingMode=_testingMode;
@property(readonly, nonatomic) NSArray *propertySubsets; // @synthesize propertySubsets=_propertySubsets;
@property(readonly, nonatomic) NSArray *registeredProperties; // @synthesize registeredProperties=_registeredProperties;
@property(readonly, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
- (void).cxx_destruct;
- (void)disableTestingMode;
- (id)getValueForKey:(id)arg1;
- (id)getKeyValueDict;
- (void)_checkInTestingMode;
- (void)enableTestingMode;
- (void)_setLoggingOutlet:(id)arg1;
- (id)_stringifiedPropertiesForEvent:(id)arg1 propertyValueArray:(id)arg2;
- (_Bool)_validatePropertyValues:(id)arg1;
- (id)_keyMetadataForEvent:(id)arg1;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (void)_trackEvent:(id)arg1 withPropertyValues:(id)arg2 value:(id)arg3;
- (void)_checkPropertySubsets:(id)arg1;
- (void)_checkKeyLengthForEvent:(id)arg1 metaData:(id)arg2;
- (void)_checkCardinalityForEvent:(id)arg1;
- (id)_defaultLoggingOutlet;
- (id)initWithFeatureId:(id)arg1 registerProperties:(id)arg2 propertySubsets:(id)arg3;

@end

