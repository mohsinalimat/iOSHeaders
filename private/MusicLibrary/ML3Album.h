//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3Collection.h>

@interface ML3Album : ML3Collection
{
}

+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)propertiesForGroupingKey;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (_Bool)propertyIsCountProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)defaultOrderingTerms;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
+ (id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
- (void)updateTrackValues:(id)arg1;
- (id)protocolItem;
- (id)multiverseIdentifier;

@end
