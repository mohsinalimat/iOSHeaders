//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXEventTapPair : NSObject
{
    int priority;
    int _type;
    CDUnknownBlockType handler;
    NSString *identifier;
    struct __IOHIDEventSystemClient *_systemClient;
    CDUnknownBlockType _matchingServiceHandler;
}

@property(copy, nonatomic) CDUnknownBlockType matchingServiceHandler; // @synthesize matchingServiceHandler=_matchingServiceHandler;
@property(retain, nonatomic) struct __IOHIDEventSystemClient *systemClient; // @synthesize systemClient=_systemClient;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int priority; // @synthesize priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
- (id)description;
- (void)dealloc;

@end

