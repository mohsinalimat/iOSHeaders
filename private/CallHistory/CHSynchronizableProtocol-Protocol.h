//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CHSynchronizableProtocol
- (NSObject<OS_dispatch_queue> *)queue;
- (_Bool)executeSyncWithBOOL:(_Bool (^)(void))arg1;
- (id)executeSyncWithResult:(id (^)(void))arg1;
- (void)executeSync:(void (^)(void))arg1;
- (void)execute:(void (^)(void))arg1;
@end

