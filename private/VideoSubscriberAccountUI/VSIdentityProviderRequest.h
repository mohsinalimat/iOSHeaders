//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSAccount, VSOptional, VSPersistentStorage;

@interface VSIdentityProviderRequest : NSObject
{
    long long _type;
    NSString *_requestingAppDisplayName;
    NSString *_requestingAppAdamID;
    VSAccount *_account;
    VSPersistentStorage *_storage;
    VSOptional *_accountMetadataRequest;
}

+ (id)deleteAccountRequestWithAccount:(id)arg1 storage:(id)arg2;
+ (id)accountMetadataRequestWithAccount:(id)arg1 storage:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4 requestingAppAdamID:(id)arg5;
+ (id)makeAccountRequestWithStorage:(id)arg1;
@property(retain, nonatomic) VSOptional *accountMetadataRequest; // @synthesize accountMetadataRequest=_accountMetadataRequest;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) VSAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *requestingAppAdamID; // @synthesize requestingAppAdamID=_requestingAppAdamID;
@property(copy, nonatomic) NSString *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool forceAuthentication;
- (id)_initWithRequestType:(long long)arg1 account:(id)arg2 storage:(id)arg3;
@property(readonly, nonatomic) _Bool requiresUI;
@property(readonly, nonatomic) _Bool allowsUI;
- (id)init;

@end

