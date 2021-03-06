//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVCSessionConfiguration : NSObject
{
    unsigned long long _maxRemoteParticipants;
    long long _sessionType;
}

+ (long long)sessionTypeWithClientSessionType:(long long)arg1;
+ (long long)clientSessionTypeWithSessionType:(long long)arg1;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) unsigned long long maxRemoteParticipants; // @synthesize maxRemoteParticipants=_maxRemoteParticipants;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;

@end

