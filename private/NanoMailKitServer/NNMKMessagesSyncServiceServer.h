//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;

@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint
{
    id <NNMKMessagesSyncServiceServerDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKMessagesSyncServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectivityChanged;
- (void)spaceBecameAvailable;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)sendBatchedFetchResult:(id)arg1;
- (id)sendMoreMessagesForConversation:(id)arg1;
- (id)sendMoreMessages:(id)arg1;
- (id)sendInitialMessagesSync:(id)arg1;
- (id)addMessages:(id)arg1 notificationPriority:(_Bool)arg2;
- (id)deleteMessages:(id)arg1 notificationPriority:(_Bool)arg2;
- (id)updateMessagesStatus:(id)arg1 notificationPriority:(_Bool)arg2;
- (id)initWithQueue:(id)arg1;

@end

