//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/NSCopying-Protocol.h>
#import <AttentionAwareness/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    NSString *_identifier;
    unsigned long long _eventMask;
    double _samplingInterval;
    double _stalenessTolerance;
}

+ (void)cancelNotification:(struct AWNotification_s *)arg1;
+ (struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)supportedEventsString;
+ (unsigned long long)supportedEvents;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(nonatomic) double stalenessTolerance; // @synthesize stalenessTolerance=_stalenessTolerance;
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;
@property(copy, nonatomic) NSSet *attentionLostTimeouts; // @dynamic attentionLostTimeouts;
- (void)setAttentionLostTimeout:(double)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

