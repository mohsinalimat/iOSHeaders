//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCServerUser : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    int _eventLogLevel;
}

@property(nonatomic) int eventLogLevel; // @synthesize eventLogLevel=_eventLogLevel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
- (void)dealloc;
- (id)init;

@end

