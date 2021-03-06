//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplay, CADisplayLink;

__attribute__((visibility("hidden")))
@interface GGLDisplayLink : NSObject
{
    SEL _selector;
    struct _geo_weak_ptr<id> _target;
    CADisplayLink *_displayLink;
    CADisplay *_display;
}

@property(retain, nonatomic) CADisplay *display; // @synthesize display=_display;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
@property(readonly, nonatomic) double targetTimestamp;
@property(nonatomic) long long frameRate;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)invalidate;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)target;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

