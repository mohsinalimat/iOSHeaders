//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BRCancellable-Protocol.h>

@class NSArray, NSDictionary;

@protocol BRItemNotificationReceiving <BRCancellable>
- (void)receiveProgressUpdates:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)receiveUpdates:(NSArray *)arg1 logicalExtensions:(NSDictionary *)arg2 physicalExtensions:(NSDictionary *)arg3 reply:(void (^)(void))arg4;
@end

