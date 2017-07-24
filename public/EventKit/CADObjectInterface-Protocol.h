//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CADObjectID, NSArray, NSDictionary, NSString;

@protocol CADObjectInterface
- (void)CADDatabaseDeleteObjectsWithObjectIDs:(NSArray *)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(NSArray *)arg1 reply:(void (^)(int))arg2;
- (void)CADObject:(CADObjectID *)arg1 setAttributes:(NSDictionary *)arg2 andRelations:(NSDictionary *)arg3 reply:(void (^)(int))arg4;
- (void)CADObject:(CADObjectID *)arg1 getRelatedObjectsWithRelationName:(NSString *)arg2 reply:(void (^)(int, NSSet *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getRelatedObjectWithRelationName:(NSString *)arg2 reply:(void (^)(int, CADObjectID *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getDataPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSData *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getDatePropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSDate *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getNumberPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSNumber *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getStringPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSString *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSObject<NSSecureCoding> *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getPropertiesWithNames:(NSArray *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADObjectsExist:(NSArray *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADObjectExists:(CADObjectID *)arg1 reply:(void (^)(int, _Bool))arg2;
@end

