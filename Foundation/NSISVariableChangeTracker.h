//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSISEngine, NSMutableSet;

@interface NSISVariableChangeTracker : NSObject
{
    struct __CFDictionary *_variableMap;
    NSMutableSet *_variableDelegates;
    NSISEngine *_engine;
}

- (void)performPendingChangeNotificationsForVariable:(id)arg1;
- (void)performPendingChangeNotifications;
- (long long)count;
- (void)noteVariable:(id)arg1 changedFrom:(double)arg2;
- (void)dealloc;
- (id)initWithEngine:(id)arg1;

@end
