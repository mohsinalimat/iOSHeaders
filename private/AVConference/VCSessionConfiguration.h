//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSessionConfiguration : NSObject
{
    unsigned long long _maxRemoteParticipants;
    long long _sessionType;
}

@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) unsigned long long maxRemoteParticipants; // @synthesize maxRemoteParticipants=_maxRemoteParticipants;
- (_Bool)applyConfigurationUsingClientDict:(id)arg1;
@property(readonly, nonatomic) _Bool isContinuity;
- (_Bool)updateWithClientDictionary:(id)arg1;
- (id)initWithClientDictionary:(id)arg1;

@end

