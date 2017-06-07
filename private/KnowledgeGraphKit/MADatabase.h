//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSPredicate, NSURL;

@interface MADatabase : NSObject
{
    NSURL *_fileURL;
    unsigned long long _batchCounter;
    unsigned long long _markerCounter;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_predicateIdentifierTemplate;
    NSPredicate *_predicateIdentifiersTemplate;
    NSPredicate *_predicateIdentifierAndKeyTemplate;
}

+ (_Bool)destroyAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)_markerFilePathForPersistentStoreFileURL:(id)arg1;
+ (void)deleteMarker:(id)arg1;
+ (_Bool)hasMarker:(id)arg1;
+ (id)persistentStoreCoordinatorOptions;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (void).cxx_destruct;
- (_Bool)migrateToURL:(id)arg1 error:(id *)arg2;
- (_Bool)_saveSynchonously:(id *)arg1;
- (id)modelPropertiesForIdentifiers:(id)arg1 forType:(id)arg2;
- (void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
- (void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
- (void)removeModelEdgePropertiesForIdentifier:(long long)arg1;
- (void)removeModelEdgesPropertiesForIdentifiers:(id)arg1;
- (void)removeModelNodePropertiesForIdentifier:(long long)arg1;
- (void)removeModelNodesPropertiesForIdentifiers:(id)arg1;
- (void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
- (void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
- (void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 requiresTesting:(_Bool)arg3;
- (void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 requiresTesting:(_Bool)arg3;
- (id)modelEdgePropertiesForIdentifier:(long long)arg1;
- (id)modelNodePropertiesForIdentifier:(long long)arg1;
- (void)removeModelEdgeForIdentifier:(long long)arg1;
- (void)removeModelEdgesForIdentifiers:(id)arg1;
- (void)updateEdge:(id)arg1;
- (void)addEdge:(id)arg1 requiresTesting:(_Bool)arg2;
- (void)enumerateModelEdgesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeModelNodeForIdentifier:(long long)arg1;
- (void)removeModelNodesForIdentifiers:(id)arg1;
- (void)updateNode:(id)arg1;
- (void)addNode:(id)arg1 requiresTesting:(_Bool)arg2;
- (void)enumerateModelNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)setLabelStrings:(id)arg1;
- (id)labelStrings;
- (void)setGraphVersion:(unsigned long long)arg1;
- (unsigned long long)graphVersion;
- (id)graphIdentifier;
- (id)_modelGraph;
- (void)leaveBatch;
- (void)enterBatch;
- (id)_markerFilePath;
- (void)deleteMarker;
- (void)setMarker;
- (_Bool)hasMarker;
- (void)invalidateMemoryCaches;
- (void)invalidatePersistentStores;
- (void)_resetCoreDataStack;
- (void)save:(CDUnknownBlockType)arg1;
- (void)_save:(CDUnknownBlockType)arg1 force:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

