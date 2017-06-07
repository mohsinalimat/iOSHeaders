//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccount, ACAccountStore, NSString, SUScriptAppleAccountCredential, SUScriptAppleAccountType;

@interface SUScriptAppleAccount : SUScriptObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *username;
@property(readonly) NSString *identifier;
@property(readonly) NSString *dsID;
@property(readonly) SUScriptAppleAccountCredential *credential;
- (id)_className;
@property(readonly) SUScriptAppleAccountType *accountType;
@property(readonly) NSString *accountDescription;
- (void)reload;
@property(readonly) ACAccountStore *nativeAccountStore;
@property(readonly) ACAccount *nativeAccount;
- (void)dealloc;
- (id)initWithACAccount:(id)arg1 accountStore:(id)arg2;

@end

