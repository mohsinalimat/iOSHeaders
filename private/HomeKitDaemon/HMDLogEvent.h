//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSError, NSUUID;

@interface HMDLogEvent : HMFObject
{
    _Bool _submitted;
    NSUUID *_eventType;
    NSError *_eventError;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

+ (id)stringForSource:(unsigned long long)arg1;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSError *eventError; // @synthesize eventError=_eventError;
@property(readonly, nonatomic) NSUUID *eventType; // @synthesize eventType=_eventType;
@property(nonatomic, getter=isSubmitted) _Bool submitted; // @synthesize submitted=_submitted;
- (void).cxx_destruct;
@property(readonly) double durationInMilliseconds;
- (void)submitAtTime:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithEventType:(id)arg1;
- (id)init;

@end

