//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEIPSecSASession.h>

@interface NEIPSecSAKernelSession : NEIPSecSASession
{
    struct NEIPSecDB_s *_internalSession;
}

@property(nonatomic) struct NEIPSecDB_s *internalSession; // @synthesize internalSession=_internalSession;
- (void)dealloc;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (_Bool)migrateSA:(id)arg1;
- (_Bool)removeSA:(id)arg1;
- (_Bool)addSA:(id)arg1;
- (_Bool)updateSA:(id)arg1;
- (_Bool)addLarvalSA:(id)arg1;
- (void)invalidate;
- (void)removeAllSAs;
- (void)setDelegateQueue:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3;

@end

