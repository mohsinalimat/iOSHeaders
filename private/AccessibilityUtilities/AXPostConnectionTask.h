//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject
{
    _Bool _didTimeout;
    CDUnknownBlockType _postConnectionBlock;
    AXAccessQueueTimer *_timeoutTimer;
}

@property(nonatomic) _Bool didTimeout; // @synthesize didTimeout=_didTimeout;
@property(retain, nonatomic) AXAccessQueueTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType postConnectionBlock; // @synthesize postConnectionBlock=_postConnectionBlock;
- (void)_performTask;
- (void)performTask;
- (void)dealloc;
- (id)initWithConnectBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2 accessQueue:(id)arg3;

@end

