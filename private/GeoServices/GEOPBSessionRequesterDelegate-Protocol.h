//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOPBSessionRequester, NSError, PBCodable, PBRequest;

@protocol GEOPBSessionRequesterDelegate <NSObject>

@optional
- (void)requesterWillSendRequestForEstablishedConnection:(GEOPBSessionRequester *)arg1 callback:(void (^)(void))arg2;
- (void)requester:(GEOPBSessionRequester *)arg1 didFailWithError:(NSError *)arg2;
- (void)requesterDidCancel:(GEOPBSessionRequester *)arg1;
- (void)requesterDidFinish:(GEOPBSessionRequester *)arg1;
- (void)requester:(GEOPBSessionRequester *)arg1 didReceiveResponse:(PBCodable *)arg2 forRequest:(PBRequest *)arg3;
@end

