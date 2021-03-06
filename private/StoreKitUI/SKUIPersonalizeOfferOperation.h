//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, SKUIClientContext;
@protocol OS_dispatch_queue;

@interface SKUIPersonalizeOfferOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;

@end

