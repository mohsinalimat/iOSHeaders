//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate-Protocol.h>

@class NSString, WebBookmarksXPCConnection;
@protocol WebBookmarksClientDelegateProtocol;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCConnection *_connection;
    id <WebBookmarksClientDelegateProtocol> _delegate;
}

@property(nonatomic) __weak id <WebBookmarksClientDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishFetching;
- (void)didUpdateProgressWithMessage:(id)arg1;
- (void)didStopFetchingReadingListItemWithMessage:(id)arg1;
- (void)didStartFetchingReadingListItemWithMessage:(id)arg1;
- (void)clearReadingListArchiveWithUUID:(id)arg1;
- (void)clearAllReadingListArchives;
- (void)startReadingListFetcher;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

