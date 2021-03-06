//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol DATransactionMonitorDelegate;

@interface DATransactionMonitor : NSObject
{
    int _transactionCount;
    NSMutableArray *_transactions;
    id <DATransactionMonitorDelegate> _transactionMonitorDelegate;
}

+ (id)sharedTransactionMonitor;
@property(nonatomic) __weak id <DATransactionMonitorDelegate> transactionMonitorDelegate; // @synthesize transactionMonitorDelegate=_transactionMonitorDelegate;
@property(retain, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
@property(nonatomic) int transactionCount; // @synthesize transactionCount=_transactionCount;
- (void).cxx_destruct;
- (void)decrementTransactionCountForTransaction:(id)arg1;
- (void)incrementTransactionCountForTransaction:(id)arg1;
- (id)init;

@end

