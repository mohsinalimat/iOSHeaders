//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeDeleting
- (void)deleteObjects:(NSArray *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)deleteObjects:(NSArray *)arg1 error:(id *)arg2;
@end

