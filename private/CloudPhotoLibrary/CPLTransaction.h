//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLTransaction : NSObject
{
}

+ (unsigned long long)transactionCount;
+ (id)transactions;
+ (void)endTransactionWithReason:(id)arg1;
+ (void)beginTransactionWithReason:(id)arg1 keepPower:(_Bool)arg2;

@end
