//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCNetworkAddress : NSObject
{
    NSString *_ip;
    NSString *_interfaceName;
    unsigned short _port;
    unsigned short _ipVersion;
}

@property(nonatomic) unsigned short ipVersion; // @synthesize ipVersion=_ipVersion;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (_Bool)isIPv6;
- (void)dealloc;

@end
