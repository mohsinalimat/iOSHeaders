//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DALDAP/LDAPTask.h>

@class DAContactsSearchQuery, NSMutableArray, NSObject;
@protocol OS_ldap_operation;

@interface LDAPSearchTask : LDAPTask
{
    DAContactsSearchQuery *_query;
    NSMutableArray *_foundContacts;
    NSObject<OS_ldap_operation> *_operation;
}

@property(retain, nonatomic) NSObject<OS_ldap_operation> *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSMutableArray *foundContacts; // @synthesize foundContacts=_foundContacts;
@property(readonly, nonatomic) DAContactsSearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)daLevelErrorForLDAPError:(int)arg1;
- (int)numDownloadedElements;
- (void)finishWithError:(id)arg1;
- (void)performTask;
- (void)_failImmediately;
- (void)_promptForPasswordDueToError:(id)arg1;
- (void)_appendKey:(id)arg1 value:(id)arg2 toSearchResultElement:(id)arg3;
- (void)_performQuery;
- (id)_copySearchStringForQueryInput:(id)arg1;
- (id)_searchStringForWord:(id)arg1;
- (void)disable;
- (id)initWithQuery:(id)arg1;

@end

