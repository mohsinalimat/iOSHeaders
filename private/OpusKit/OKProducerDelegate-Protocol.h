//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSArray, OKProducer;

@protocol OKProducerDelegate <NSObject>
- (NSArray *)visibleMediaItemsForProducer:(OKProducer *)arg1;
- (void)producer:(OKProducer *)arg1 didProcessLiveAuthoringKeyPaths:(NSArray *)arg2;
@end

