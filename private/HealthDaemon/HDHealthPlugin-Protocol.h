//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class CMCatherineFeeder, HDClient, HDProfile, HDQueryServer, HKSampleType, NSArray, NSDate, NSDictionary, NSString, NSTimeZone, NSUUID, _HKDeepBreathingSessionConfiguration, _HKQueryServerDataObject;
@protocol HDDeepBreathingSessionServer, HDDeepBreathingSessionServerDelegate, HDHealthDaemon, HDQueryServerDelegate;

@protocol HDHealthPlugin <NSObject>
- (void)activate;
- (id)initWithHealthDaemon:(id <HDHealthDaemon>)arg1;

@optional
- (void)_setPluginHeartRateEnable:(_Bool)arg1;
- (void)_setPluginCatherineFeeder:(CMCatherineFeeder *)arg1;
- (void)setCurrentActivityCacheOverrideDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (NSArray *)dataCollectors;
- (id <HDDeepBreathingSessionServer>)deepBreathingServerForClient:(id)arg1 configuration:(_HKDeepBreathingSessionConfiguration *)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 delegate:(id <HDDeepBreathingSessionServerDelegate>)arg4;
- (HDQueryServer *)queryServerForUUID:(NSUUID *)arg1 serverDataObject:(_HKQueryServerDataObject *)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(HDClient *)arg5 profile:(HDProfile *)arg6 queryDelegate:(id <HDQueryServerDelegate>)arg7;
- (void)setDataCollectionOptions:(NSDictionary *)arg1 forKey:(NSString *)arg2 type:(HKSampleType *)arg3 clientUUID:(NSUUID *)arg4;
- (_Bool)daemonDidReceiveNotification:(const char *)arg1;
@end

