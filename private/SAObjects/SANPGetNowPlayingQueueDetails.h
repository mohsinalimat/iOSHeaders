//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand
{
}

+ (id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNowPlayingQueueDetails;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(nonatomic) long long previousItemCount;
@property(nonatomic) long long nextItemCount;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

