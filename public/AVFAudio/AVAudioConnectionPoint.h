//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject
{
    AVAudioNode *_node;
    unsigned long long _bus;
    void *_reserved;
}

+ (id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long bus; // @synthesize bus=_bus;
@property(readonly, nonatomic) __weak AVAudioNode *node; // @synthesize node=_node;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithNode:(id)arg1 bus:(unsigned long long)arg2;
- (id)init;

@end

