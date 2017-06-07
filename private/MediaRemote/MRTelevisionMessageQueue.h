//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRPendingMessageQueue, NSMutableDictionary;
@protocol MRTelevisionMessageQueueDatasource, MRTelevisionMessageQueueDelegate;

@interface MRTelevisionMessageQueue : NSObject
{
    MRPendingMessageQueue *_pendingMessageQueue;
    NSMutableDictionary *_pendingReplyQueue;
    id <MRTelevisionMessageQueueDatasource> _datasource;
    id <MRTelevisionMessageQueueDelegate> _delegate;
}

@property(nonatomic) id <MRTelevisionMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <MRTelevisionMessageQueueDatasource> datasource; // @synthesize datasource=_datasource;
- (id)_dataForMessage:(id)arg1;
- (_Bool)reply:(id)arg1;
- (void)flush;
- (void)enqueueMessage:(id)arg1 reply:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)dealloc;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;

@end

