//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKSource, NSArray, NSDictionary, NSMutableSet, NSSet;

@interface HKSourceAuthorizationController : NSObject
{
    HKHealthStore *_healthStore;
    HKSource *_source;
    NSArray *_orderedTypesForSharing;
    NSArray *_orderedTypesForReading;
    NSMutableSet *_typesEnabledForSharing;
    NSMutableSet *_typesEnabledForReading;
    NSSet *_requestedTypesForSharing;
    NSSet *_requestedTypesForReading;
    NSDictionary *_requestedDocumentAuths;
}

@property(retain, nonatomic) NSDictionary *requestedDocumentAuths; // @synthesize requestedDocumentAuths=_requestedDocumentAuths;
@property(retain, nonatomic) NSSet *requestedTypesForReading; // @synthesize requestedTypesForReading=_requestedTypesForReading;
@property(retain, nonatomic) NSSet *requestedTypesForSharing; // @synthesize requestedTypesForSharing=_requestedTypesForSharing;
@property(retain, nonatomic) NSMutableSet *typesEnabledForReading; // @synthesize typesEnabledForReading=_typesEnabledForReading;
@property(retain, nonatomic) NSMutableSet *typesEnabledForSharing; // @synthesize typesEnabledForSharing=_typesEnabledForSharing;
@property(retain, nonatomic) NSArray *orderedTypesForReading; // @synthesize orderedTypesForReading=_orderedTypesForReading;
@property(retain, nonatomic) NSArray *orderedTypesForSharing; // @synthesize orderedTypesForSharing=_orderedTypesForSharing;
@property(readonly, nonatomic) HKSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (id)_enabledTypesInSection:(long long)arg1;
- (void)_setAuthorizationStatuses:(id)arg1;
- (void)_updateAuthorizationStatusWithTypes:(id)arg1;
- (long long)_authorizationStatusWithType:(id)arg1;
- (void)commitAuthorizationStatuses;
- (void)setEnabled:(_Bool)arg1 forAllTypesInSection:(long long)arg2 commit:(_Bool)arg3;
- (_Bool)anyTypeEnabled;
- (_Bool)allTypesEnabled;
- (void)setEnabled:(_Bool)arg1 forType:(id)arg2 inSection:(long long)arg3 commit:(_Bool)arg4;
- (_Bool)isTypeEnabled:(id)arg1 inSection:(long long)arg2;
- (void)resetObjectAuthorizationStatuses;
- (void)commitObjectAuthorizationStatuses:(id)arg1;
- (id)objectAuthorizationStatusesForDocuments;
- (id)typesInSection:(long long)arg1;
- (unsigned long long)countOfTypesInSection:(long long)arg1;
- (_Bool)isRequestingDocumentAuthorization;
- (void)_reloadTypeAuthorizationRecords;
- (void)_reloadDocumentAuthorizationRecords;
- (void)reload;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4;

@end

