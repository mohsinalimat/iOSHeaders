//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface DAResolvedRecipient : NSObject
{
    long long _status;
    long long _certificatesStatus;
    long long _availabilityStatus;
    NSString *_mergedFreeBusy;
    NSMutableDictionary *_mResolvedEmailToX509Certs;
}

@property(retain, nonatomic) NSMutableDictionary *mResolvedEmailToX509Certs; // @synthesize mResolvedEmailToX509Certs=_mResolvedEmailToX509Certs;
@property(retain, nonatomic) NSString *mergedFreeBusy; // @synthesize mergedFreeBusy=_mergedFreeBusy;
@property(nonatomic) long long availabilityStatus; // @synthesize availabilityStatus=_availabilityStatus;
@property(nonatomic) long long certificatesStatus; // @synthesize certificatesStatus=_certificatesStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)addCert:(id)arg1 forEmailAddress:(id)arg2;
- (id)description;
@property(readonly, nonatomic) NSDictionary *resolvedEmailToX509Certs;

@end

