//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRConnectivitySubscriber : NSObject
{
    _Bool _connected;
    unsigned long long _dropoutCounter;
}

+ (_Bool)getDropoutCounter:(unsigned long long *)arg1;
@property(nonatomic) unsigned long long dropoutCounter; // @synthesize dropoutCounter=_dropoutCounter;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
- (void)_readConnectivityStatus;
- (id)init;

@end

