//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXHearingSupport/AXHAXPCClient.h>

@interface AXHAFakeXPCClient : AXHAXPCClient
{
    CDUnknownBlockType _updateBlock;
}

- (void).cxx_destruct;
- (_Bool)sendMessage:(id)arg1 withError:(id *)arg2;
- (void)registerMessageBlock:(CDUnknownBlockType)arg1;
- (_Bool)wantsUpdatesForIdentifier:(unsigned long long)arg1;

@end

