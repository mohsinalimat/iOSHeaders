//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordKeyValueSetting-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecord, NSMutableDictionary, NSMutableSet, NSString;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding>
{
    _Bool _trackChanges;
    NSMutableDictionary *_values;
    NSMutableDictionary *_originalValues;
    NSMutableSet *_changedKeysSet;
    CKRecord *_record;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(nonatomic) _Bool trackChanges; // @synthesize trackChanges=_trackChanges;
@property(retain, nonatomic) NSMutableSet *changedKeysSet; // @synthesize changedKeysSet=_changedKeysSet;
@property(retain, nonatomic) NSMutableDictionary *originalValues; // @synthesize originalValues=_originalValues;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_validateRecordValue:(id)arg1;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateKeyUniquenessForKey:(id)arg1;
- (_Bool)checkProperties:(_Bool)arg1 withValueCheckBlock:(CDUnknownBlockType)arg2;
- (void)resetChangedKeys;
- (id)changedKeys;
- (id)allKeys;
- (void)_sanitizeRecordValue:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)recordID;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

