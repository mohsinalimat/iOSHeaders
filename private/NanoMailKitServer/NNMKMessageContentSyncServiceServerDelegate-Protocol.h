//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKMessageContentSyncServiceServer, NSString;

@protocol NNMKMessageContentSyncServiceServerDelegate <NSObject>
- (void)messageContentSyncServiceServer:(NNMKMessageContentSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)messageContentSyncServiceServer:(NNMKMessageContentSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end

