//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IC)
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)permanentObjectIDsFromObjects:(id)arg1;
+ (id)objectIDsFromObjects:(id)arg1;
+ (id)objectsFromObjectIDs:(id)arg1 context:(id)arg2;
+ (id)objectFromObjectID:(id)arg1 context:(id)arg2;
- (void)postNotificationOnMainThreadAfterSaveWithName:(id)arg1;
- (void)postNotificationOnMainThreadWithName:(id)arg1;
- (id)permanentObjectID;
- (_Bool)obtainPermanentObjectIDIfNecessary;
@end

