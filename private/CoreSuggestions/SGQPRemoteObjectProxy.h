//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/SGQPSearchToShareServerProtocol-Protocol.h>

@class SGDaemonConnection;

@interface SGQPRemoteObjectProxy : NSObject <SGQPSearchToShareServerProtocol>
{
    SGDaemonConnection *_connection;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

