//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSPublishStreamsProtocol, NSDictionary, NSError;

@protocol MSPublishStreamsProtocolDelegate <MSStreamsProtocolDelegate>
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didFinishSendingUploadCompleteError:(NSError *)arg2;
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didFinishUploadingMetadataResponse:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

