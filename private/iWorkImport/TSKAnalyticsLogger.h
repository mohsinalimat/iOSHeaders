//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKAnalyticsLogger : NSObject
{
    NSString *_domain;
    long long _samplingPercentage;
    _Bool _shouldSummarize;
    _Bool _willLogAnalytics;
    _Bool _recalculateWillLog;
    CDStruct_f6aba300 _miniOSVersion;
    CDStruct_f6aba300 _minOSXVersion;
}

+ (void)logBoolValue:(_Bool)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logDoubleValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logIntegerValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)loggerWithDomain:(id)arg1;
@property(nonatomic) CDStruct_f6aba300 minOSXVersion; // @synthesize minOSXVersion=_minOSXVersion;
@property(nonatomic) CDStruct_f6aba300 miniOSVersion; // @synthesize miniOSVersion=_miniOSVersion;
@property(nonatomic) _Bool shouldSummarize; // @synthesize shouldSummarize=_shouldSummarize;
@property(nonatomic) long long samplingPercentage; // @synthesize samplingPercentage=_samplingPercentage;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)logBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (void)logDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)logIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)finishMessage;
- (void)startMessage;
- (void)p_logASLMessageWithDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithValueString:(char *)arg1 forKey:(id)arg2;
- (id)p_qualifiedStringForKey:(id)arg1;
@property(readonly, nonatomic) _Bool willLogAnalytics; // @dynamic willLogAnalytics;
@property(readonly, nonatomic) _Bool canLogAnalytics; // @dynamic canLogAnalytics;
- (id)initWithDomain:(id)arg1;
- (id)init;

@end

