//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSDate, NSTimer;

@interface _CPPowerAssertionThread : NSThread
{
    NSTimer *_timer;
    NSDate *_earliest;
}

- (void)didTimeOut:(id)arg1;
- (void)addAssertion:(id)arg1;
- (void)main;

@end

