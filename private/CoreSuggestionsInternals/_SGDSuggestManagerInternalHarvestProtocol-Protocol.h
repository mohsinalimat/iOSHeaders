//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _SGDSuggestManagerInternalHarvestProtocol <_SGDSuggestManagerBaseProtocol>
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 groupIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 identifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)addSearchableItemMetadata:(NSData *)arg1 htmlData:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
@end

