//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDIncomingCloudPushLogEvent : HMDLogEvent
{
    NSString *_topic;
}

+ (id)incomingCloudPush:(id)arg1;
+ (id)uuid;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (id)initWithTopic:(id)arg1;

@end

