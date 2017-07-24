//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class IMUnitTestRunner, NSError, NSString;
@protocol IMUnitTestRunnerResult;

@protocol IMUnitTestRunnerDelegate <NSObject>

@optional
- (NSString *)unitTestRunnerGetPathToXCTestFramework:(IMUnitTestRunner *)arg1;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 didReceiveOutput:(NSString *)arg2;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testCaseDidFinish:(NSString *)arg2 withResult:(id <IMUnitTestRunnerResult>)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testCase:(NSString *)arg2 didFailWithDescription:(NSString *)arg3 inFile:(NSString *)arg4 atLine:(unsigned long long)arg5;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testCaseWillStart:(NSString *)arg2;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testSuite:(NSString *)arg2 didFailWithDescription:(NSString *)arg3 inFile:(NSString *)arg4 atLine:(unsigned long long)arg5;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testSuiteDidFinish:(NSString *)arg2 withResult:(id <IMUnitTestRunnerResult>)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 testSuiteWillStart:(NSString *)arg2;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 runningTestsInBundleAtPath:(NSString *)arg2 failedWithError:(NSError *)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 didRunTestsInBundleAtPath:(NSString *)arg2 results:(id <IMUnitTestRunnerResult>)arg3;
- (void)unitTestRunner:(IMUnitTestRunner *)arg1 willRunTestsInBundleAtPath:(NSString *)arg2;
@end

