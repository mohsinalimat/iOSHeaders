//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse
{
}

@property(readonly, nonatomic) long long errorCode;
@property(readonly, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic) NSString *errorTitle;
@property(readonly, nonatomic) NSDictionary *userDisplayStrings;
@property(readonly, nonatomic) NSArray *devices;

@end

