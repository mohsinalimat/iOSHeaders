//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSPersistentStoreCoordinator, NSString, NSURL, VSOptional;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPersistentContainer : NSObject
{
    _Bool _didSetupPersistence;
    _Bool _skipMigration;
    NSOperationQueue *_migrationQueue;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    VSOptional *_viewContext;
    NSString *_persistentStoreType;
    NSURL *_persistentStoreURL;
    NSURL *_subscriptionsPropertyListURL;
}

@property(copy, nonatomic) NSURL *subscriptionsPropertyListURL; // @synthesize subscriptionsPropertyListURL=_subscriptionsPropertyListURL;
@property(copy, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
@property(copy, nonatomic) NSString *persistentStoreType; // @synthesize persistentStoreType=_persistentStoreType;
@property(nonatomic) _Bool skipMigration; // @synthesize skipMigration=_skipMigration;
@property(retain, nonatomic) VSOptional *viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(nonatomic) _Bool didSetupPersistence; // @synthesize didSetupPersistence=_didSetupPersistence;
@property(retain, nonatomic) NSOperationQueue *migrationQueue; // @synthesize migrationQueue=_migrationQueue;
- (void).cxx_destruct;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 andWait:(_Bool)arg2;
- (_Bool)_setupPersistenceIfNeeded:(id *)arg1;
- (id)init;

@end
