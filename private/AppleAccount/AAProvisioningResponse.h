//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AAProvisioningResponse : AAAuthenticationResponse
{
    NSDictionary *_icloud;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSandboxAccount;
@property(readonly, nonatomic) _Bool notesMigrated;
@property(readonly, nonatomic) _Bool isManagedAppleID;
@property(readonly, nonatomic) NSString *fmipSiriToken;
@property(readonly, nonatomic) NSString *fmipAuthToken;
@property(readonly, nonatomic) NSString *iCloudAuthToken;
@property(readonly, nonatomic) NSNumber *primaryEmailVerified;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSArray *appleIDAliases;
@property(readonly, nonatomic) NSString *appleID;
@property(readonly, nonatomic) NSDictionary *dataclassProperties;
@property(readonly, nonatomic) NSArray *provisionedDataclasses;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

