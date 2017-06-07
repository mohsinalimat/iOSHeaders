//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSDate;

@protocol BSFuture <NSObject>
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (_Bool)cancel;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
@end

