//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface MSCLProximityCoordinator : NSObject
{
    NSHashTable *_observers;
    _Bool _originalUIDeviceState;
}

+ (id)coordinator;
- (void).cxx_destruct;
- (void)_proximityStateChangeNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

