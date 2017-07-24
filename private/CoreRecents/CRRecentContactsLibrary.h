//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CRRecentContactsLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_connection;
}

+ (CDUnknownBlockType)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3;
+ (CDUnknownBlockType)frecencyComparator;
+ (struct NSObject *)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3;
+ (struct NSObject *)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned long long)arg5;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned long long)arg7;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4;
+ (struct NSObject *)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned long long)arg6;
+ (id)defaultInstance;
- (int)_daemonProcessID;
- (id)_removeRecentContactsMatchingQuery:(id)arg1;
- (void)_removeAllRecentContactsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)removeRecentContacts:(id)arg1 error:(out id *)arg2;
- (_Bool)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id *)arg4;
- (void)_recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(_Bool)arg5;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(_Bool)arg4;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3;
- (id)copyRecentsForDomain:(id)arg1;
- (id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4;
- (void)performRecentsSearch:(id)arg1 operationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(CDUnknownBlockType)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_searchRecentsUsingQuery:(id)arg1;
- (id)_recentContactsWithQuery:(id)arg1;
- (id)_searchRecentsUsingQuery:(id)arg1 error:(id *)arg2;
- (void)_searchRecentsUsingQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_remoteLibraryWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_newConnection;
- (void)start;
- (void)setImplicitGroupThreshold:(unsigned long long)arg1 forDomain:(id)arg2;
- (unsigned long long)maxDateEventsPerRecentContact;
- (void)dealloc;
- (id)init;

@end

