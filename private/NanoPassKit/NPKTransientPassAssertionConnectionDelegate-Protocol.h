//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKTransientPassAssertionConnection, NPKTransientPassRequest;

@protocol NPKTransientPassAssertionConnectionDelegate <NSObject>
- (void)connection:(NPKTransientPassAssertionConnection *)arg1 hasNewTransientPassRequest:(NPKTransientPassRequest *)arg2;
- (void)connectionDied:(NPKTransientPassAssertionConnection *)arg1;
- (void)handleNewConnection:(NPKTransientPassAssertionConnection *)arg1;
@end

