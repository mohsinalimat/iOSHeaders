//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationRetrySignal-Protocol.h>

@class NSString;

@interface FCOperationImmediateRetrySignal : NSObject <FCOperationRetrySignal>
{
}

@property(readonly, copy) NSString *description;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

