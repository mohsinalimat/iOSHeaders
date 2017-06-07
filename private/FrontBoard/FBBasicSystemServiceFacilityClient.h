//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBSystemServiceFacilityClient-Protocol.h>

@class NSString;
@protocol FBSystemServiceClient;

@interface FBBasicSystemServiceFacilityClient : NSObject <FBSystemServiceFacilityClient>
{
    id <FBSystemServiceClient> _systemServiceClient;
}

+ (id)facilityClientWithSystemServiceClient:(id)arg1;
@property(readonly, nonatomic) id <FBSystemServiceClient> systemServiceClient; // @synthesize systemServiceClient=_systemServiceClient;
- (id)initWithSystemServiceClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

