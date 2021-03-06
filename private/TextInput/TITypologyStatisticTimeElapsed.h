//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic
{
    TITypologyTimer *_timer;
    TITypologyTimer *_adjustedTimer;
}

@property(retain, nonatomic) TITypologyTimer *adjustedTimer; // @synthesize adjustedTimer=_adjustedTimer;
@property(retain, nonatomic) TITypologyTimer *timer; // @synthesize timer=_timer;
- (void)visitRecordKeyboardInput:(id)arg1;
@property(readonly, nonatomic) double adjustedElapsedTime;
@property(readonly, nonatomic) double elapsedTime;
- (id)aggregateReport;
- (id)structuredReport;
- (void)dealloc;
- (id)init;

@end

