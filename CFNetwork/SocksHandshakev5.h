//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/SocksHandshake.h>

@class NSMutableSet, NSMutableString;

__attribute__((visibility("hidden")))
@interface SocksHandshakev5 : SocksHandshake
{
    _Bool _done;
    unsigned long long _state;
    int _numberOfAuthVersionSupported;
    NSMutableSet *_authMethods;
    unsigned char _addressType;
    int _destinationLen;
    NSMutableString *_domainName;
    unsigned char ipaddr[16];
    int _portLen;
    unsigned short _destPort;
}

- (void).cxx_destruct;
- (id)finish:(int)arg1;
- (_Bool)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
