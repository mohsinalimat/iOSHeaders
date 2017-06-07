//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface TPStatusBarManager : NSObject
{
    NSString *_currentAbbreviatedStatusBarString;
    NSTimer *_callDurationTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *callDurationTimer; // @synthesize callDurationTimer=_callDurationTimer;
@property(copy, nonatomic) NSString *currentAbbreviatedStatusBarString; // @synthesize currentAbbreviatedStatusBarString=_currentAbbreviatedStatusBarString;
- (void).cxx_destruct;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
- (void)updateCurrentAbbreviatedStatusBarString;
- (void)dealloc;
- (id)init;

@end

