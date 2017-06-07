//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSData, UMUser;
@protocol UMUserListUpdateObserver;

@protocol UMUserManagement <NSObject>
@property(readonly, nonatomic) unsigned long long maxNumberOfUsers;
@property(readonly, copy, nonatomic) UMUser *currentUser;
@property(readonly, nonatomic) _Bool isMultiUser;
- (void)registerUserListUpdateObserver:(id <UMUserListUpdateObserver>)arg1;
- (void)disableUser:(UMUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteUser:(UMUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)loadUser:(UMUser *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)createUser:(UMUser *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)canAccessUserProperties;
@end

