//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NSObject-Protocol.h>

@class EPRoutingSlipEntry;
@protocol EPServiceRegistry, EPTransactionDelegate;

@protocol EPTransaction <NSObject>
+ (_Bool)canRollback;
@property(nonatomic) __weak id <EPTransactionDelegate> delegate;
- (void)beginRollbackWithRoutingSlipEntry:(EPRoutingSlipEntry *)arg1 serviceRegistry:(id <EPServiceRegistry>)arg2;
- (void)beginTransactionWithRoutingSlipEntry:(EPRoutingSlipEntry *)arg1 serviceRegistry:(id <EPServiceRegistry>)arg2;
@end
