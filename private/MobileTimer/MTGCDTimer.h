//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface MTGCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)startTimer:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

