//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDDXPCConnection, CDDebug;

@interface CDDClientConnection : NSObject
{
    CDDXPCConnection *_connection;
    CDDebug *_debug;
    unsigned long long _clientId;
}

@property(readonly) unsigned long long clientId; // @synthesize clientId=_clientId;
@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
@property(readonly) CDDXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (_Bool)getLocalAppBundleId:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestAdmissionLogFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)setActiveBundles:(id)arg1 startTimestamps:(id)arg2 endTimestamps:(id)arg3 event:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)setNonAppBundlId:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)bundleIdChange:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 cost:(long long)arg7 onDate:(id)arg8 risingEdge:(_Bool)arg9 fallingEdge:(_Bool)arg10 error:(id *)arg11 replyHandler:(CDUnknownBlockType)arg12;
- (_Bool)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(long long)arg6 onDate:(id)arg7 risingEdge:(_Bool)arg8 fallingEdge:(_Bool)arg9 error:(id *)arg10 replyHandler:(CDUnknownBlockType)arg11;
- (_Bool)readRemoteRequestResult:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 statistic:(int)arg4 historyWindow:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 value:(id)arg4 historyWindow:(id)arg5 format:(long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (_Bool)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)requestSystemDataFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)resetAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)resetAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)setAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)setAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)broadcastSystemDataWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)readSystemDataFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)getDeviceFromDescription:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)getDevicesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)resetAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 type:(int)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)resetAttributeId:(unsigned long long)arg1 type:(int)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)remoteFocalAppWithId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)budgetsForAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)budgetsForAttributeId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 historyOfValue:(id)arg3 forWindow:(id)arg4 filter:(long long)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (_Bool)attributeId:(unsigned long long)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(long long)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 meteredWithValue:(id)arg3 costDictionary:(id)arg4 onDate:(id)arg5 risingEdge:(_Bool)arg6 fallingEdge:(_Bool)arg7 type:(int)arg8 meterToken:(unsigned long long)arg9 error:(id *)arg10 replyHandler:(CDUnknownBlockType)arg11;
- (_Bool)attributeId:(unsigned long long)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(_Bool)arg5 fallingEdge:(_Bool)arg6 type:(int)arg7 meterToken:(unsigned long long)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 deviceIdentifier:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 statistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)attributeId:(unsigned long long)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (_Bool)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 setCategory:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)attributeId:(unsigned long long)arg1 setCategory:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 associateToBudgetId:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)attributeId:(unsigned long long)arg1 associateToBudgetId:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)deleteDataWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)poolNamesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)attributeNamesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 occurredWithValue:(id)arg3 cost:(long long)arg4 onDate:(id)arg5 risingEdge:(_Bool)arg6 fallingEdge:(_Bool)arg7 type:(int)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (_Bool)attributeId:(unsigned long long)arg1 occurredWithValue:(id)arg2 cost:(long long)arg3 onDate:(id)arg4 risingEdge:(_Bool)arg5 fallingEdge:(_Bool)arg6 type:(int)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (_Bool)attributeId:(unsigned long long)arg1 backgroundLaunch:(id)arg2 risingEdge:(_Bool)arg3 fallingEdge:(_Bool)arg4 type:(int)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)idForAttribute:(id)arg1 clientId:(long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)idForAttribute:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)registerAttribute:(id)arg1 withType:(int)arg2 dataProtectionClass:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)appsLaunchedSince:(id)arg1 butNotPrewarmedSince:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)deleteAllDatabaseEntriesOlderThanDate:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)setDebugBitmap:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)deleteAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)deleteAttributeId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)deleteBundleId:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)bundleIdEntriesOlderThanDate:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)deregisterTrendableApp:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)registerTrendableApp:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)readLiveAppsWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)readTrendingAppsWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)incrementPool:(unsigned long long)arg1 incrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)decrementPool:(unsigned long long)arg1 decrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)compareAndSwapPool:(unsigned long long)arg1 compareValue:(long long)arg2 swapValue:(long long)arg3 type:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)readPool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)deletePool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)idForPool:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 maxFraction:(double)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 maxFraction:(double)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (_Bool)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 deviceIdentifier:(id)arg6 temporalLeeway:(double)arg7 limitCount:(unsigned long long)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (_Bool)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(double)arg6 limitCount:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (_Bool)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 limitCount:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;
- (_Bool)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 limitCount:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)message:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (_Bool)versionWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)initWithClientId:(unsigned long long)arg1 error:(id *)arg2;
- (id)init;
- (_Bool)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 int64Value1:(long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 valueKey3:(id)arg6 uint64Value3:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (_Bool)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 uint64Value1:(unsigned long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)sendMessageWithType:(long long)arg1 valueKey:(id)arg2 uint64Value:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 type:(unsigned long long)arg6 integerId:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 typeField:(unsigned long long)arg4 integerId:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (_Bool)sendMessageWithType:(long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;

@end

