//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPaymentServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, PKPaymentService;
@protocol OS_dispatch_queue;

@interface NPKPeerPaymentMessagesTransactionsManager : NSObject <PKPaymentServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_transactionsQueue;
    NSObject<OS_dispatch_queue> *_peerPaymentPassQueue;
    NSString *_peerPaymentPassUniqueID;
    NSMutableSet *_peerPaymentTransactions;
    PKPaymentService *_paymentService;
    NSMutableDictionary *_paymentStatus;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(readonly, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property(retain, nonatomic) NSMutableSet *peerPaymentTransactions; // @synthesize peerPaymentTransactions=_peerPaymentTransactions;
- (void).cxx_destruct;
- (void)_fetchAllPeerPaymentTransactionsWithPeerPaymentPassID:(id)arg1;
- (void)_transactionsQueue_NotifyStatusUpdateOfTransactionWithServiceIdentifier:(id)arg1 status:(unsigned long long)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (id)_transactionsQueue_PeerPaymentTransactionWithServiceIdentifier:(id)arg1;
- (id)peerPaymentTransactionWithServiceIdentifier:(id)arg1;
- (void)_transactionsQueue_RemoveStatusForPeerPaymentTransactionWithServiceIdentifier:(id)arg1 notifyUpdate:(_Bool)arg2;
- (void)_transactionsQueue_SetStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2 notifyUpdate:(_Bool)arg3;
- (void)setStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2;
- (unsigned long long)statusOfPaymentTransactionWithServiceIdentifier:(id)arg1;
@property(copy) NSString *peerPaymentPassUniqueID; // @synthesize peerPaymentPassUniqueID=_peerPaymentPassUniqueID;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1 paymentService:(id)arg2;
- (void)dealloc;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
