//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightDaemon/MDAgent.h>

@class MDSearchableIndexService;

@interface MDIndexAgent : MDAgent
{
    MDSearchableIndexService *_service;
}

+ (id)clientXPCInterface;
+ (id)xpcInterface;
+ (id)machServiceName;
@property(retain) MDSearchableIndexService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)_pullEntitlementsOffConnection:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3;

@end

