//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAREngagedCompletionCache : NSObject
{
}

+ (id)sharedInstance;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (void)clearAllCompletions;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (id)init;

@end

