//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSString;

@interface MCGmailAccountPayload : MCPayload
{
    NSString *_accountDescription;
    NSString *_accountName;
    NSString *_emailAddress;
    NSDictionary *_communicationServiceRules;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(readonly, retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (void).cxx_destruct;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)restrictions;
- (id)description;
- (id)stubDictionary;
- (_Bool)mustInstallNonInteractively;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

