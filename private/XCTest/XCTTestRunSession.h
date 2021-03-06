//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCTestConfiguration;
@protocol XCTTestRunSessionDelegate;

@interface XCTTestRunSession : NSObject
{
    XCTestConfiguration *_testConfiguration;
    id <XCTTestRunSessionDelegate> _delegate;
}

@property id <XCTTestRunSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) XCTestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;
- (_Bool)runTestsAndReturnError:(id *)arg1;
- (_Bool)_preTestingInitialization;
- (void)resumeAppSleep:(id)arg1;
- (id)suspendAppSleep;
- (id)initWithTestConfiguration:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end

