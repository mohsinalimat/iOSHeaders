//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUIRunLoopDelay : NSObject
{
    NSString *_mode;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    double _timeout;
}

- (void).cxx_destruct;
- (void)endDelay;
- (void)delayRunLoop;
- (void)dealloc;
- (id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2;

@end

