//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, NSXPCListenerEndpoint;

@protocol TKProtocolSlotRegistry
- (void)addSlotWithEndpoint:(NSXPCListenerEndpoint *)arg1 name:(NSString *)arg2 type:(NSString *)arg3 forProcesses:(NSArray *)arg4 reply:(void (^)(void))arg5;
@end

