//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCTestRun;

@interface XCTest : NSObject
{
    id _internal;
}

+ (id)languageAgnosticTestClassNameForTestClass:(Class)arg1;
@property(readonly) NSString *nameForLegacyLogging;
@property(readonly) NSString *languageAgnosticTestMethodName;
@property(readonly) NSString *languageAgnosticTestClassName;
- (void)tearDown;
- (void)setUp;
- (void)runTest;
- (void)performTest:(id)arg1;
@property(readonly) XCTestRun *testRun;
@property(readonly) Class testRunClass;
@property(readonly) Class _requiredTestRunBaseClass;
@property(readonly, copy) NSString *name;
@property(readonly) unsigned long long testCaseCount;
- (id)init;
- (void)dealloc;
- (void)removeTestsWithNames:(id)arg1;
@property(readonly) NSString *_methodNameForReporting;
@property(readonly) NSString *_classNameForReporting;

@end

