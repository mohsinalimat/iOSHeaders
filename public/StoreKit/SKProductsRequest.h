//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (void)dealloc;
- (id)initWithProductIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) id <SKProductsRequestDelegate> delegate; // @dynamic delegate;

@end

