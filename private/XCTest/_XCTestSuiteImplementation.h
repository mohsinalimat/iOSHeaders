//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/XCTest.h>

@class NSMutableArray, NSMutableDictionary, NSString, XCTestConfiguration;

@interface _XCTestSuiteImplementation : XCTest
{
    NSString *_name;
    NSMutableArray *_tests;
    XCTestConfiguration *_testConfiguration;
    NSMutableDictionary *_activityAggregateStatistics;
}

@property(readonly) NSMutableDictionary *activityAggregateStatistics; // @synthesize activityAggregateStatistics=_activityAggregateStatistics;
@property(retain) XCTestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;
@property(retain) NSMutableArray *tests; // @synthesize tests=_tests;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

