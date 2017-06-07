//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MCLDAPAccountPayload : MCPayload
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    _Bool _useSSL;
    NSArray *_searchSettings;
    NSString *_accountPersistentUUID;
    NSDictionary *_communicationServiceRules;
    NSNumber *_useSSLNum;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSNumber *useSSLNum; // @synthesize useSSLNum=_useSSLNum;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property(readonly, retain, nonatomic) NSArray *searchSettings; // @synthesize searchSettings=_searchSettings;
@property(readonly, nonatomic) _Bool useSSL; // @synthesize useSSL=_useSSL;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (void).cxx_destruct;
- (_Bool)containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)restrictions;
- (id)stubDictionary;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

