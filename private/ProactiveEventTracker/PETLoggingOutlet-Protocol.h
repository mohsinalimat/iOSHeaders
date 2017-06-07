//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveEventTracker/NSObject-Protocol.h>

@class NSString, PETStringPairs;

@protocol PETLoggingOutlet <NSObject>
- (void)logErrorForEvent:(NSString *)arg1 featureId:(NSString *)arg2 reason:(NSString *)arg3;
- (void)logDoubleValue:(double)arg1 forEvent:(NSString *)arg2 featureId:(NSString *)arg3 stringifiedProperties:(PETStringPairs *)arg4 metaData:(PETStringPairs *)arg5;
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(NSString *)arg2 featureId:(NSString *)arg3 stringifiedProperties:(PETStringPairs *)arg4 metaData:(PETStringPairs *)arg5;
@end

