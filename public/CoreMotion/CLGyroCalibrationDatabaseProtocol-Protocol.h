//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@class NSString;

@protocol CLGyroCalibrationDatabaseProtocol <CLNotifierServiceProtocol>
- (int)syncgetNumTemperatures;
- (_Bool)syncgetWipeDatabase;
- (void)dumpDatabase:(NSString *)arg1 onCompletion:(void (^)(NSString *))arg2;
- (_Bool)syncgetInsertWithBias:(const CDStruct_03942939 *)arg1 variance:(const CDStruct_03942939 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;
- (double)syncgetLastMiniCalibration;
- (_Bool)syncgetSupportsMiniCalibration;
- (int)syncgetNonFactoryRoundCount;
- (_Bool)syncgetBiasFit:(CDStruct_f329898c *)arg1;
- (void)startFactoryGYTT;
- (int)syncgetMaxDynamicTemperature;
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_03942939 *)arg1 slope:(CDStruct_03942939 *)arg2 l2Error:(CDStruct_03942939 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_03942939 *)arg5 deltaSlope:(CDStruct_03942939 *)arg6 deltaError:(CDStruct_03942939 *)arg7 isDeltaDynamic:(_Bool)arg8;
- (_Bool)syncgetDoSync:(void (^)(struct CLGyroCalibrationDatabase *))arg1;
- (void)doAsync:(void (^)(struct CLGyroCalibrationDatabase *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLGyroCalibrationDatabase *))arg1;
@end

