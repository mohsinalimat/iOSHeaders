//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContactStore;
@protocol OS_dispatch_queue;

@interface IMDCNPersonAliasResolver : NSObject
{
    NSObject<OS_dispatch_queue> *_contactsQueue;
    CNContactStore *_contactStore;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contactsQueue; // @synthesize contactsQueue=_contactsQueue;
- (_Bool)isFavoritedContact:(id)arg1;
- (void)CNRecordIDForAliases:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_fetchContactRecordIDForAliases:(id)arg1;
- (id)_fetchContactIdentifierForAlias:(id)arg1;
- (id)_predicateForAlias:(id)arg1;
- (id)_predicateForPhoneNumber:(id)arg1;
- (id)_predicateForEmailAddress:(id)arg1;
- (void)dealloc;
- (id)init;

@end
