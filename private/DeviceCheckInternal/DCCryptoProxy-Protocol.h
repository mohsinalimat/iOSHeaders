//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceCheckInternal/NSObject-Protocol.h>

@class DCContext;

@protocol DCCryptoProxy <NSObject>
- (void)fetchOpaqueBlobWithContext:(DCContext *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end
