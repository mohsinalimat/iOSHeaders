//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKContactlessInterfaceSessionDelegate-Protocol.h>

@class NSString;

@interface PKContactlessInterfaceSessionDefaultBehavior : NSObject <PKContactlessInterfaceSessionDelegate>
{
}

+ (void)attachDefaultBehaviorToSession:(id)arg1;
- (void)_processContext:(id)arg1;
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

